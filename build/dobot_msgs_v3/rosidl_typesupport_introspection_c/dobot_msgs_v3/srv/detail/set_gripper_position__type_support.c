// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot_msgs_v3:srv/SetGripperPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot_msgs_v3/srv/detail/set_gripper_position__rosidl_typesupport_introspection_c.h"
#include "dobot_msgs_v3/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot_msgs_v3/srv/detail/set_gripper_position__functions.h"
#include "dobot_msgs_v3/srv/detail/set_gripper_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_msgs_v3__srv__SetGripperPosition_Request__init(message_memory);
}

void dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_fini_function(void * message_memory)
{
  dobot_msgs_v3__srv__SetGripperPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_member_array[4] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs_v3__srv__SetGripperPosition_Request, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs_v3__srv__SetGripperPosition_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs_v3__srv__SetGripperPosition_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs_v3__srv__SetGripperPosition_Request, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_members = {
  "dobot_msgs_v3__srv",  // message namespace
  "SetGripperPosition_Request",  // message name
  4,  // number of fields
  sizeof(dobot_msgs_v3__srv__SetGripperPosition_Request),
  dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_member_array,  // message members
  dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_type_support_handle = {
  0,
  &dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_msgs_v3
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition_Request)() {
  if (!dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_type_support_handle.typesupport_identifier) {
    dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_msgs_v3__srv__SetGripperPosition_Request__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_msgs_v3/srv/detail/set_gripper_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_msgs_v3/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/set_gripper_position__functions.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/set_gripper_position__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_msgs_v3__srv__SetGripperPosition_Response__init(message_memory);
}

void dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_fini_function(void * message_memory)
{
  dobot_msgs_v3__srv__SetGripperPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_member_array[2] = {
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs_v3__srv__SetGripperPosition_Response, res),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_msgs_v3__srv__SetGripperPosition_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_members = {
  "dobot_msgs_v3__srv",  // message namespace
  "SetGripperPosition_Response",  // message name
  2,  // number of fields
  sizeof(dobot_msgs_v3__srv__SetGripperPosition_Response),
  dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_member_array,  // message members
  dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_type_support_handle = {
  0,
  &dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_msgs_v3
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition_Response)() {
  if (!dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_type_support_handle.typesupport_identifier) {
    dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_msgs_v3__srv__SetGripperPosition_Response__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_msgs_v3/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/set_gripper_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_members = {
  "dobot_msgs_v3__srv",  // service namespace
  "SetGripperPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_Request_message_type_support_handle,
  NULL  // response message
  // dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_type_support_handle = {
  0,
  &dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_msgs_v3
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition)() {
  if (!dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_type_support_handle.typesupport_identifier) {
    dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_msgs_v3, srv, SetGripperPosition_Response)()->data;
  }

  return &dobot_msgs_v3__srv__detail__set_gripper_position__rosidl_typesupport_introspection_c__SetGripperPosition_service_type_support_handle;
}
