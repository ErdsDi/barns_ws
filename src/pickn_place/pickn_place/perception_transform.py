#!/usr/bin/env python3

import os
import yaml
import numpy as np

import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
from geometry_msgs.msg import PoseStamped, TransformStamped, Pose
from tf2_ros import Buffer, TransformListener, TransformBroadcaster
from tf2_geometry_msgs import do_transform_pose
from tf_transformations import (
    quaternion_matrix,
    quaternion_from_matrix
)
from std_msgs.msg import Int32


class PerceptionTransformNode(Node):
    # Node Variables
    BUFFER_SIZE = 5  # Number of poses to accumulate before processing
    IQR_MULTIPLIER = 1  # Multiplier for IQR outlier filtering
    TF_TIMEOUT_SEC = 1  # Timeout for TF lookup in seconds

    def __init__(self):
        super().__init__('perception_transform_node')

        # Load ROS parameters
        self.declare_parameter('aruco_pose_topic', '/pickn_place/aruco_pose')
        self.aruco_pose_topic = self.get_parameter('aruco_pose_topic').get_parameter_value().string_value

        self.declare_parameter('target_frame', 'base_link')
        self.target_frame = self.get_parameter('target_frame').get_parameter_value().string_value

        self.declare_parameter('aruco_marker_frame', 'aruco_marker')
        self.aruco_marker_frame = self.get_parameter('aruco_marker_frame').get_parameter_value().string_value

        self.declare_parameter(
            'calibration_file',
            os.path.join(
                os.path.expanduser('~'),
                'barns_ws', 'src', 'pickn_place', 'share', 'aruco_calibration.yaml'
            )
        )
        self.calibration_file = self.get_parameter('calibration_file').get_parameter_value().string_value

        self.declare_parameter(
            'aruco_id_match_file',
            os.path.join(
                os.path.expanduser('~'),
                'barns_ws', 'src', 'pickn_place', 'share', 'arucoID_match.yaml'
            )
        )
        self.aruco_id_match_file = self.get_parameter('aruco_id_match_file').get_parameter_value().string_value

        # TF setup
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.tf_broadcaster = TransformBroadcaster(self)
        self.tf_timeout = Duration(seconds=self.TF_TIMEOUT_SEC)

        # Load calibration transform
        self.calib_translation, self.calib_quat = self.load_calibration_transform(self.calibration_file)
        if self.calib_translation is None or self.calib_quat is None:
            self.get_logger().warn("No valid calibration transform loaded. Using identity.")
            self.calib_translation = np.zeros(3)
            self.calib_quat = np.array([0.0, 0.0, 0.0, 1.0])

        # Load ArUCo ID mapping
        self.aruco_id_map = self.load_aruco_id_mapping(self.aruco_id_match_file)

        # Optional rotation swap if needed (identity in this example)
        self.R_zx_swap = np.array([
            [1,  0, 0, 0],
            [0,  1, 0, 0],
            [0,  0, 1, 0],
            [0,  0, 0, 1]
        ])

        # Pose buffer for accumulation
        self.pose_buffer = []

        # Subscribers
        self.aruco_sub = self.create_subscription(
            PoseStamped,
            self.aruco_pose_topic,
            self.aruco_pose_callback,
            10
        )

        self.current_aruco_id = None
        self.aruco_id_sub = self.create_subscription(
            Int32,
            '/pickn_place/target_aruco_id',
            self.aruco_id_callback,
            10
        )

        # Log initial status
        self.get_logger().info(
            f"PerceptionTransformNode started.\n"
            f" - ArUCo pose topic: {self.aruco_pose_topic}\n"
            f" - Link6: {self.target_frame}\n"
            f" - aruco_marker_frame: {self.aruco_marker_frame}\n"
            f" - Loaded calibration file: {self.calibration_file}\n"
            f" - Loaded ID match file: {self.aruco_id_match_file}"
        )

    def load_aruco_id_mapping(self, yaml_file):
        if not os.path.exists(yaml_file):
            self.get_logger().warn(f"ID match file not found: {yaml_file}")
            return {}
        try:
            with open(yaml_file, 'r') as f:
                doc = yaml.safe_load(f)
            output_map = {}
            entries = doc.get('aruco_id', [])
            for entry in entries:
                mid = entry.get('id')
                mname = entry.get('name')
                if mid is not None and mname is not None:
                    output_map[mid] = mname
            self.get_logger().info(f"Loaded {len(output_map)} ID->Name entries from: {yaml_file}")
            return output_map
        except Exception as e:
            self.get_logger().error(f"Failed to parse ID match file: {e}")
            return {}

    def aruco_id_callback(self, msg: Int32):
        self.current_aruco_id = msg.data

    def load_calibration_transform(self, yaml_file):
        if not os.path.exists(yaml_file):
            self.get_logger().error(f"Calibration file not found: {yaml_file}")
            return None, None
        try:
            with open(yaml_file, 'r') as f:
                doc = yaml.safe_load(f)
            data = doc.get('aruco_to_calibration_link', {})
            trans = data.get('translation', {})
            rot = data.get('rotation', {})

            translation = np.array([
                trans.get('x', 0.0),
                trans.get('y', 0.0),
                trans.get('z', 0.0)
            ], dtype=float)
            quaternion = np.array([
                rot.get('x', 0.0),
                rot.get('y', 0.0),
                rot.get('z', 0.0),
                rot.get('w', 1.0)
            ], dtype=float)

            self.get_logger().info(
                f"Loaded calibration transform from YAML: "
                f"T_calib<-aruco = {translation}, {quaternion}"
            )
            return translation, quaternion
        except Exception as e:
            self.get_logger().error(f"Failed to parse calibration file: {e}")
            return None, None

    def aruco_pose_callback(self, msg: PoseStamped):
        self.pose_buffer.append(msg)
        if len(self.pose_buffer) >= self.BUFFER_SIZE:
            self.process_buffer()
            self.pose_buffer = []

    def process_buffer(self):
        """
        Accumulates several ArUCo poses, filters outliers using IQR,
        then computes an average pose and transforms it into the Link6 frame.
        Finally, broadcasts a transform.
        """
        # Positions for debugging or optional additional checks
        positions = np.array([
            [p.pose.position.x, p.pose.position.y, p.pose.position.z] 
            for p in self.pose_buffer
        ])

        # 1. Filter outliers based on IQR
        valid_indices = self.filter_outliers_iqr(self.pose_buffer)
        filtered_buffer = [self.pose_buffer[i] for i in range(len(self.pose_buffer)) if valid_indices[i]]
        if not filtered_buffer:
            self.get_logger().warning("No valid poses after filtering outliers.")
            return

        # 2. Compute the average pose from remaining data
        avg_pose = self.average_poses(filtered_buffer)
        camera_frame = avg_pose.header.frame_id

        # 3. Lookup transform from camera to Link6
        try:
            tf_cam_to_link6 = self.tf_buffer.lookup_transform(
                self.target_frame,
                camera_frame,
                rclpy.time.Time(),
                self.tf_timeout
            )
        except Exception as e:
            self.get_logger().warn(f"TF lookup failed: {self.target_frame} <- {camera_frame}: {e}")
            return

        # 4. Transform average pose into Link6 frame
        pose_in_link6_pose = do_transform_pose(avg_pose.pose, tf_cam_to_link6)
        T_link6_marker = self.pose_to_matrix(pose_in_link6_pose)

        # 5. Apply calibration correction
        T_calib_aruco = self.make_matrix(self.calib_translation, self.calib_quat)
        T_link6_marker_corrected = T_link6_marker @ np.linalg.inv(T_calib_aruco)

        # 6. (Optional) Apply your custom rotation swap if needed
        T_link6_marker_corrected = T_link6_marker_corrected @ self.R_zx_swap

        # 7. Broadcast the transform
        self.broadcast_aruco_tf(T_link6_marker_corrected)

    def filter_outliers_iqr(self, poses):
        """
        Filters outlier positions using the Interquartile Range (IQR) method.
        Change the IQR multiplier if you need stricter or looser thresholds.
        """
        positions = np.array([
            [pose.pose.position.x, pose.pose.position.y, pose.pose.position.z]
            for pose in poses
        ])
        q1 = np.percentile(positions, 25, axis=0)
        q3 = np.percentile(positions, 75, axis=0)
        iqr = q3 - q1

        lower_bound = q1 - self.IQR_MULTIPLIER * iqr
        upper_bound = q3 + self.IQR_MULTIPLIER * iqr

        valid = np.all((positions >= lower_bound) & (positions <= upper_bound), axis=1)
        return valid

    def average_poses(self, pose_buffer):
        """
        Computes the average position and average quaternion (normalized)
        for a set of PoseStamped messages.
        """
        avg_position = np.mean([
            [pose.pose.position.x, pose.pose.position.y, pose.pose.position.z]
            for pose in pose_buffer
        ], axis=0)

        quaternions = np.array([
            [pose.pose.orientation.x, pose.pose.orientation.y, pose.pose.orientation.z, pose.pose.orientation.w]
            for pose in pose_buffer
        ])
        avg_quaternion = np.mean(quaternions, axis=0)
        avg_quaternion /= np.linalg.norm(avg_quaternion)

        avg_pose = PoseStamped()
        avg_pose.header = pose_buffer[-1].header
        avg_pose.pose.position.x = avg_position[0]
        avg_pose.pose.position.y = avg_position[1]
        avg_pose.pose.position.z = avg_position[2]
        avg_pose.pose.orientation.x = avg_quaternion[0]
        avg_pose.pose.orientation.y = avg_quaternion[1]
        avg_pose.pose.orientation.z = avg_quaternion[2]
        avg_pose.pose.orientation.w = avg_quaternion[3]
        return avg_pose

    def pose_to_matrix(self, pose: Pose) -> np.ndarray:
        px, py, pz = pose.position.x, pose.position.y, pose.position.z
        qx, qy, qz, qw = pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w
        mat = quaternion_matrix([qx, qy, qz, qw])
        mat[0, 3] = px
        mat[1, 3] = py
        mat[2, 3] = pz
        return mat

    def make_matrix(self, translation: np.ndarray, quat: np.ndarray) -> np.ndarray:
        mat = quaternion_matrix(quat)
        mat[0, 3] = translation[0]
        mat[1, 3] = translation[1]
        mat[2, 3] = translation[2]
        return mat

    def broadcast_aruco_tf(self, T_link6_marker: np.ndarray):
        """
        Broadcasts the transform from Link6 to the ArUco marker frame.
        """
        tx = T_link6_marker[0, 3]
        ty = T_link6_marker[1, 3]
        tz = T_link6_marker[2, 3]
        quat = quaternion_from_matrix(T_link6_marker)

        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = self.target_frame

        child_name = self.aruco_marker_frame
        if self.current_aruco_id is not None:
            mapped_name = self.aruco_id_map.get(self.current_aruco_id)
            if mapped_name:
                child_name = mapped_name
            else:
                child_name = f"Aruco_{self.current_aruco_id}"
        t.child_frame_id = child_name

        t.transform.translation.x = float(tx)
        t.transform.translation.y = float(ty)
        t.transform.translation.z = float(tz)
        t.transform.rotation.x = float(quat[0])
        t.transform.rotation.y = float(quat[1])
        t.transform.rotation.z = float(quat[2])
        t.transform.rotation.w = float(quat[3])

        self.tf_broadcaster.sendTransform(t)


def main(args=None):
    rclpy.init(args=args)
    node = PerceptionTransformNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

