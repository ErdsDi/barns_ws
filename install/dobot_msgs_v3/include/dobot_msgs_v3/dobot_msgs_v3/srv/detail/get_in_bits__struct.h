// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_msgs_v3:srv/GetInBits.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__GET_IN_BITS__STRUCT_H_
#define DOBOT_MSGS_V3__SRV__DETAIL__GET_IN_BITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetInBits in the package dobot_msgs_v3.
typedef struct dobot_msgs_v3__srv__GetInBits_Request
{
  int32_t index;
  int32_t addr;
  int32_t count;
} dobot_msgs_v3__srv__GetInBits_Request;

// Struct for a sequence of dobot_msgs_v3__srv__GetInBits_Request.
typedef struct dobot_msgs_v3__srv__GetInBits_Request__Sequence
{
  dobot_msgs_v3__srv__GetInBits_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs_v3__srv__GetInBits_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetInBits in the package dobot_msgs_v3.
typedef struct dobot_msgs_v3__srv__GetInBits_Response
{
  int32_t res;
  rosidl_runtime_c__String value;
} dobot_msgs_v3__srv__GetInBits_Response;

// Struct for a sequence of dobot_msgs_v3__srv__GetInBits_Response.
typedef struct dobot_msgs_v3__srv__GetInBits_Response__Sequence
{
  dobot_msgs_v3__srv__GetInBits_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_msgs_v3__srv__GetInBits_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__GET_IN_BITS__STRUCT_H_
