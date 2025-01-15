import rclpy
from rclpy.node import Node
from tf2_ros import Buffer, TransformListener, TransformBroadcaster, LookupException
from geometry_msgs.msg import TransformStamped
import yaml
import os
import re
from ament_index_python.packages import get_package_share_directory

class TFDistanceCalculator(Node):
    def __init__(self):
        super().__init__('tf_distance_calculator')

        # --------------------------
        #  User-modifiable settings
        # --------------------------
        self.WATCHDOG_TIMEOUT = 1  # seconds; how stale the TF can be before skipping
        self.ROOT_FRAME = 'base_link'    # or 'map', 'base_link', etc.
        self.TIMER_PERIOD = 0.3      # how often we check & broadcast

        # TF2 buffer, listener, and broadcaster
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        self.tf_broadcaster = TransformBroadcaster(self)

        # Retrieve the path to the mount_offsets.yaml file in the package's share folder
        package_share_directory = get_package_share_directory('pickn_place')
        self.yaml_file_path = os.path.join(package_share_directory, 'mount_offsets.yaml')

        # Load the YAML data at startup
        self.yaml_data = self.load_yaml_data()

        # Dictionary to track the last broadcast data (to publish only if it changes)
        # Key: (parent_frame, child_frame)
        # Value: dict with 'translation': tuple, 'rotation': tuple
        self.last_broadcasts = {}

        # Timer to periodically broadcast transforms
        self.timer = self.create_timer(self.TIMER_PERIOD, self.broadcast_all_offsets)

        # Minimal logging
        self.get_logger().info(
            "TFDistanceCalculator initialized. Scanning for valid TF...\n"
            f"Watchdog timeout: {self.WATCHDOG_TIMEOUT} s, Root frame: {self.ROOT_FRAME}\n"
            f"Using offsets from: {self.yaml_file_path}"
        )

    def load_yaml_data(self) -> dict:
        """Loads mount_offsets.yaml and returns its content as a dict."""
        if not os.path.exists(self.yaml_file_path):
            raise FileNotFoundError(f"YAML file not found: {self.yaml_file_path}")

        try:
            with open(self.yaml_file_path, 'r') as file:
                data = yaml.safe_load(file) or {}
            return data
        except yaml.YAMLError as e:
            raise RuntimeError(f"Error parsing YAML file: {e}")

    def broadcast_all_offsets(self):
        """
        1) Parse all frames currently in the TF tree.
        2) For each top-level key in self.yaml_data, derive base_frame (strip "_offset").
        3) Check if base_frame is in the TF tree and if fresh (watchdog).
           - If not found or stale => remove from last_broadcasts (so we can re-broadcast later if it reappears).
        4) If found & fresh => broadcast mount_link and approach_link only if data changed since last broadcast.
        """
        frames_str = self.tf_buffer.all_frames_as_string()
        current_frames = self.parse_all_frames_string(frames_str)

        # We'll collect which (parent_frame, child_frame) are still valid to avoid deleting them
        still_valid_broadcasts = set()

        for offset_key, offsets_dict in self.yaml_data.items():
            # Derive the base frame name
            base_frame = (
                offset_key[:-7] if offset_key.endswith("_offset") else offset_key
            )

            # Check existence in the TF tree
            if base_frame not in current_frames:
                # If it used to exist, remove from last_broadcast so we can rebroadcast if it reappears
                self.cleanup_broadcasts_for_parent(base_frame)
                continue

            # Check freshness via watchdog
            if not self.transform_is_fresh(self.ROOT_FRAME, base_frame):
                # Also remove from last_broadcast if it's stale
                self.cleanup_broadcasts_for_parent(base_frame)
                continue

            # If we get here, base_frame is present & fresh => attempt to broadcast
            # mount_link
            if 'mount_link' in offsets_dict:
                ok = self.attempt_broadcast(
                    parent_frame=base_frame,
                    child_frame='mount_link',
                    link_data=offsets_dict['mount_link']
                )
                if ok:
                    still_valid_broadcasts.add((base_frame, 'mount_link'))

            # approach_link
            if 'approach_link' in offsets_dict:
                ok = self.attempt_broadcast(
                    parent_frame=base_frame,
                    child_frame='approach_link',
                    link_data=offsets_dict['approach_link']
                )
                if ok:
                    still_valid_broadcasts.add((base_frame, 'approach_link'))

        # Optionally: Remove any broadcast pairs NOT in still_valid_broadcasts
        # so we can re-broadcast them if they reappear
        for bc_key in list(self.last_broadcasts.keys()):
            if bc_key not in still_valid_broadcasts:
                del self.last_broadcasts[bc_key]

    def cleanup_broadcasts_for_parent(self, parent_frame: str):
        """
        Remove from last_broadcasts any child_frame associated with this parent_frame.
        This ensures that if the parent frame reappears (or becomes fresh) later, we'll re-broadcast.
        """
        to_remove = []
        for (p, c) in self.last_broadcasts.keys():
            if p == parent_frame:
                to_remove.append((p, c))
        for item in to_remove:
            del self.last_broadcasts[item]

    def attempt_broadcast(self, parent_frame: str, child_frame: str, link_data: dict) -> bool:
        """
        Builds a transform and compares it to the last broadcast. Only broadcasts if changed.
        Returns True if we actually broadcast, False otherwise.
        """
        try:
            translation_tuple = (
                link_data['translation']['x'],
                link_data['translation']['y'],
                link_data['translation']['z'],
            )
            rotation_tuple = (
                link_data['rotation']['x'],
                link_data['rotation']['y'],
                link_data['rotation']['z'],
                link_data['rotation']['w'],
            )

            new_data = {
                'translation': translation_tuple,
                'rotation': rotation_tuple
            }

            key = (parent_frame, child_frame)
            old_data = self.last_broadcasts.get(key)

            # If not changed, skip
            if old_data == new_data:
                return False

            # Otherwise, broadcast
            transform_msg = TransformStamped()
            transform_msg.header.stamp = self.get_clock().now().to_msg()
            transform_msg.header.frame_id = parent_frame
            transform_msg.child_frame_id = child_frame

            transform_msg.transform.translation.x = translation_tuple[0]
            transform_msg.transform.translation.y = translation_tuple[1]
            transform_msg.transform.translation.z = translation_tuple[2]

            transform_msg.transform.rotation.x = rotation_tuple[0]
            transform_msg.transform.rotation.y = rotation_tuple[1]
            transform_msg.transform.rotation.z = rotation_tuple[2]
            transform_msg.transform.rotation.w = rotation_tuple[3]

            self.tf_broadcaster.sendTransform(transform_msg)

            self.last_broadcasts[key] = new_data
            self.get_logger().info(
                f"Broadcasted TF: '{parent_frame}' -> '{child_frame}'"
            )
            return True

        except KeyError as e:
            self.get_logger().error(f"Missing key in link data for '{parent_frame}': {e}")
            return False
        except Exception as e:
            self.get_logger().error(
                f"Unexpected error broadcasting transform for '{parent_frame}': {e}"
            )
            return False

    def transform_is_fresh(self, from_frame: str, to_frame: str) -> bool:
        """Checks if the transform from 'from_frame' to 'to_frame' is more recent than WATCHDOG_TIMEOUT."""
        try:
            t = self.tf_buffer.lookup_transform(
                from_frame,
                to_frame,
                rclpy.time.Time(),
                timeout=rclpy.duration.Duration(seconds=0.1)
            )
            transform_time = t.header.stamp.sec + t.header.stamp.nanosec * 1e-9
            now_time = self.get_clock().now().seconds_nanoseconds()[0] + \
                       self.get_clock().now().seconds_nanoseconds()[1] * 1e-9
            age = now_time - transform_time
            return age <= self.WATCHDOG_TIMEOUT

        except LookupException:
            return False
        except Exception as e:
            self.get_logger().error(f"Error checking freshness for '{to_frame}': {e}")
            return False

    def parse_all_frames_string(self, frames_str: str):
        """Parses Buffer.all_frames_as_string() to extract a set of frame names."""
        frame_names = set()
        for line in frames_str.splitlines():
            line = line.strip()
            match = re.match(r"Frame\s+(\S+)", line)
            if match:
                frame_name = match.group(1).rstrip(',')
                frame_names.add(frame_name)
        return frame_names

def main(args=None):
    rclpy.init(args=args)
    node = TFDistanceCalculator()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        node.get_logger().error(f"Unexpected error: {e}")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
