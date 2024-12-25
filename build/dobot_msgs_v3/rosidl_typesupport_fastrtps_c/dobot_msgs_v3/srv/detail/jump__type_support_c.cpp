// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dobot_msgs_v3:srv/Jump.idl
// generated code does not contain a copyright notice
#include "dobot_msgs_v3/srv/detail/jump__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dobot_msgs_v3/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_msgs_v3/srv/detail/jump__struct.h"
#include "dobot_msgs_v3/srv/detail/jump__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Jump_Request__ros_msg_type = dobot_msgs_v3__srv__Jump_Request;

static bool _Jump_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Jump_Request__ros_msg_type * ros_message = static_cast<const _Jump_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: offset1
  {
    cdr << ros_message->offset1;
  }

  // Field name: offset2
  {
    cdr << ros_message->offset2;
  }

  // Field name: offset3
  {
    cdr << ros_message->offset3;
  }

  // Field name: offset4
  {
    cdr << ros_message->offset4;
  }

  // Field name: offset5
  {
    cdr << ros_message->offset5;
  }

  // Field name: offset6
  {
    cdr << ros_message->offset6;
  }

  return true;
}

static bool _Jump_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Jump_Request__ros_msg_type * ros_message = static_cast<_Jump_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: offset1
  {
    cdr >> ros_message->offset1;
  }

  // Field name: offset2
  {
    cdr >> ros_message->offset2;
  }

  // Field name: offset3
  {
    cdr >> ros_message->offset3;
  }

  // Field name: offset4
  {
    cdr >> ros_message->offset4;
  }

  // Field name: offset5
  {
    cdr >> ros_message->offset5;
  }

  // Field name: offset6
  {
    cdr >> ros_message->offset6;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t get_serialized_size_dobot_msgs_v3__srv__Jump_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Jump_Request__ros_msg_type * ros_message = static_cast<const _Jump_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name offset1
  {
    size_t item_size = sizeof(ros_message->offset1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset2
  {
    size_t item_size = sizeof(ros_message->offset2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset3
  {
    size_t item_size = sizeof(ros_message->offset3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset4
  {
    size_t item_size = sizeof(ros_message->offset4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset5
  {
    size_t item_size = sizeof(ros_message->offset5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset6
  {
    size_t item_size = sizeof(ros_message->offset6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Jump_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_msgs_v3__srv__Jump_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t max_serialized_size_dobot_msgs_v3__srv__Jump_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: offset1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_msgs_v3__srv__Jump_Request;
    is_plain =
      (
      offsetof(DataType, offset6) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Jump_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_msgs_v3__srv__Jump_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Jump_Request = {
  "dobot_msgs_v3::srv",
  "Jump_Request",
  _Jump_Request__cdr_serialize,
  _Jump_Request__cdr_deserialize,
  _Jump_Request__get_serialized_size,
  _Jump_Request__max_serialized_size
};

static rosidl_message_type_support_t _Jump_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Jump_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, Jump_Request)() {
  return &_Jump_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_msgs_v3/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/jump__struct.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/jump__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Jump_Response__ros_msg_type = dobot_msgs_v3__srv__Jump_Response;

static bool _Jump_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Jump_Response__ros_msg_type * ros_message = static_cast<const _Jump_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr << ros_message->res;
  }

  return true;
}

static bool _Jump_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Jump_Response__ros_msg_type * ros_message = static_cast<_Jump_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr >> ros_message->res;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t get_serialized_size_dobot_msgs_v3__srv__Jump_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Jump_Response__ros_msg_type * ros_message = static_cast<const _Jump_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name res
  {
    size_t item_size = sizeof(ros_message->res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Jump_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_msgs_v3__srv__Jump_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t max_serialized_size_dobot_msgs_v3__srv__Jump_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: res
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_msgs_v3__srv__Jump_Response;
    is_plain =
      (
      offsetof(DataType, res) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Jump_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_msgs_v3__srv__Jump_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Jump_Response = {
  "dobot_msgs_v3::srv",
  "Jump_Response",
  _Jump_Response__cdr_serialize,
  _Jump_Response__cdr_deserialize,
  _Jump_Response__get_serialized_size,
  _Jump_Response__max_serialized_size
};

static rosidl_message_type_support_t _Jump_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Jump_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, Jump_Response)() {
  return &_Jump_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dobot_msgs_v3/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_msgs_v3/srv/jump.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Jump__callbacks = {
  "dobot_msgs_v3::srv",
  "Jump",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, Jump_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, Jump_Response)(),
};

static rosidl_service_type_support_t Jump__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Jump__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, Jump)() {
  return &Jump__handle;
}

#if defined(__cplusplus)
}
#endif
