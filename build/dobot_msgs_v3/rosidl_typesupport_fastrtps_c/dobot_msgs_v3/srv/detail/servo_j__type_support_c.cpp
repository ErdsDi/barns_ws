// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dobot_msgs_v3:srv/ServoJ.idl
// generated code does not contain a copyright notice
#include "dobot_msgs_v3/srv/detail/servo_j__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dobot_msgs_v3/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_msgs_v3/srv/detail/servo_j__struct.h"
#include "dobot_msgs_v3/srv/detail/servo_j__functions.h"
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

#include "rosidl_runtime_c/string.h"  // param_value
#include "rosidl_runtime_c/string_functions.h"  // param_value

// forward declare type support functions


using _ServoJ_Request__ros_msg_type = dobot_msgs_v3__srv__ServoJ_Request;

static bool _ServoJ_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoJ_Request__ros_msg_type * ros_message = static_cast<const _ServoJ_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: j1
  {
    cdr << ros_message->j1;
  }

  // Field name: j2
  {
    cdr << ros_message->j2;
  }

  // Field name: j3
  {
    cdr << ros_message->j3;
  }

  // Field name: j4
  {
    cdr << ros_message->j4;
  }

  // Field name: j5
  {
    cdr << ros_message->j5;
  }

  // Field name: j6
  {
    cdr << ros_message->j6;
  }

  // Field name: t
  {
    cdr << ros_message->t;
  }

  // Field name: param_value
  {
    size_t size = ros_message->param_value.size;
    auto array_ptr = ros_message->param_value.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _ServoJ_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoJ_Request__ros_msg_type * ros_message = static_cast<_ServoJ_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: j1
  {
    cdr >> ros_message->j1;
  }

  // Field name: j2
  {
    cdr >> ros_message->j2;
  }

  // Field name: j3
  {
    cdr >> ros_message->j3;
  }

  // Field name: j4
  {
    cdr >> ros_message->j4;
  }

  // Field name: j5
  {
    cdr >> ros_message->j5;
  }

  // Field name: j6
  {
    cdr >> ros_message->j6;
  }

  // Field name: t
  {
    cdr >> ros_message->t;
  }

  // Field name: param_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->param_value.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->param_value);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->param_value, size)) {
      fprintf(stderr, "failed to create array for field 'param_value'");
      return false;
    }
    auto array_ptr = ros_message->param_value.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'param_value'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t get_serialized_size_dobot_msgs_v3__srv__ServoJ_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoJ_Request__ros_msg_type * ros_message = static_cast<const _ServoJ_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name j1
  {
    size_t item_size = sizeof(ros_message->j1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j2
  {
    size_t item_size = sizeof(ros_message->j2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j3
  {
    size_t item_size = sizeof(ros_message->j3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j4
  {
    size_t item_size = sizeof(ros_message->j4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j5
  {
    size_t item_size = sizeof(ros_message->j5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name j6
  {
    size_t item_size = sizeof(ros_message->j6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name t
  {
    size_t item_size = sizeof(ros_message->t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name param_value
  {
    size_t array_size = ros_message->param_value.size;
    auto array_ptr = ros_message->param_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoJ_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_msgs_v3__srv__ServoJ_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t max_serialized_size_dobot_msgs_v3__srv__ServoJ_Request(
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

  // member: j1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: j6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: param_value
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_msgs_v3__srv__ServoJ_Request;
    is_plain =
      (
      offsetof(DataType, param_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ServoJ_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_msgs_v3__srv__ServoJ_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServoJ_Request = {
  "dobot_msgs_v3::srv",
  "ServoJ_Request",
  _ServoJ_Request__cdr_serialize,
  _ServoJ_Request__cdr_deserialize,
  _ServoJ_Request__get_serialized_size,
  _ServoJ_Request__max_serialized_size
};

static rosidl_message_type_support_t _ServoJ_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoJ_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, ServoJ_Request)() {
  return &_ServoJ_Request__type_support;
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
// #include "dobot_msgs_v3/srv/detail/servo_j__struct.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/servo_j__functions.h"
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


using _ServoJ_Response__ros_msg_type = dobot_msgs_v3__srv__ServoJ_Response;

static bool _ServoJ_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoJ_Response__ros_msg_type * ros_message = static_cast<const _ServoJ_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr << ros_message->res;
  }

  return true;
}

static bool _ServoJ_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoJ_Response__ros_msg_type * ros_message = static_cast<_ServoJ_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: res
  {
    cdr >> ros_message->res;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t get_serialized_size_dobot_msgs_v3__srv__ServoJ_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoJ_Response__ros_msg_type * ros_message = static_cast<const _ServoJ_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ServoJ_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_msgs_v3__srv__ServoJ_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_msgs_v3
size_t max_serialized_size_dobot_msgs_v3__srv__ServoJ_Response(
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
    using DataType = dobot_msgs_v3__srv__ServoJ_Response;
    is_plain =
      (
      offsetof(DataType, res) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ServoJ_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_msgs_v3__srv__ServoJ_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServoJ_Response = {
  "dobot_msgs_v3::srv",
  "ServoJ_Response",
  _ServoJ_Response__cdr_serialize,
  _ServoJ_Response__cdr_deserialize,
  _ServoJ_Response__get_serialized_size,
  _ServoJ_Response__max_serialized_size
};

static rosidl_message_type_support_t _ServoJ_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoJ_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, ServoJ_Response)() {
  return &_ServoJ_Response__type_support;
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
#include "dobot_msgs_v3/srv/servo_j.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ServoJ__callbacks = {
  "dobot_msgs_v3::srv",
  "ServoJ",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, ServoJ_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, ServoJ_Response)(),
};

static rosidl_service_type_support_t ServoJ__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ServoJ__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_msgs_v3, srv, ServoJ)() {
  return &ServoJ__handle;
}

#if defined(__cplusplus)
}
#endif