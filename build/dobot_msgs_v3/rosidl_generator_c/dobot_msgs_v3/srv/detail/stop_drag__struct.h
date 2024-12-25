// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs_v3:srv/StopDrag.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__STOP_DRAG__STRUCT_H_
#define DOBOT_MSGS_V3__SRV__DETAIL__STOP_DRAG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StopDrag in the package dobot_msgs_v3.
typedef struct dobot_msgs_v3__srv__StopDrag_Request
{
  uint8_t structure_needs_at_least_one_member;
} dobot_msgs_v3__srv__StopDrag_Request;

// Struct for a sequence of dobot_msgs_v3__srv__StopDrag_Request.
typedef struct dobot_msgs_v3__srv__StopDrag_Request__Sequence
{
  dobot_msgs_v3__srv__StopDrag_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs_v3__srv__StopDrag_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/StopDrag in the package dobot_msgs_v3.
typedef struct dobot_msgs_v3__srv__StopDrag_Response
{
  int32_t res;
} dobot_msgs_v3__srv__StopDrag_Response;

// Struct for a sequence of dobot_msgs_v3__srv__StopDrag_Response.
typedef struct dobot_msgs_v3__srv__StopDrag_Response__Sequence
{
  dobot_msgs_v3__srv__StopDrag_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs_v3__srv__StopDrag_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__STOP_DRAG__STRUCT_H_