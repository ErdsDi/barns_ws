// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dobot_msgs_v3:srv/RelJointMovJ.idl
// generated code does not contain a copyright notice
#include "dobot_msgs_v3/srv/detail/rel_joint_mov_j__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dobot_msgs_v3/srv/detail/rel_joint_mov_j__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dobot_msgs_v3
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
cdr_serialize(
  const dobot_msgs_v3::srv::RelJointMovJ_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: offset1
  cdr << ros_message.offset1;
  // Member: offset2
  cdr << ros_message.offset2;
  // Member: offset3
  cdr << ros_message.offset3;
  // Member: offset4
  cdr << ros_message.offset4;
  // Member: offset5
  cdr << ros_message.offset5;
  // Member: offset6
  cdr << ros_message.offset6;
  // Member: param_value
  {
    cdr << ros_message.param_value;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dobot_msgs_v3::srv::RelJointMovJ_Request & ros_message)
{
  // Member: offset1
  cdr >> ros_message.offset1;

  // Member: offset2
  cdr >> ros_message.offset2;

  // Member: offset3
  cdr >> ros_message.offset3;

  // Member: offset4
  cdr >> ros_message.offset4;

  // Member: offset5
  cdr >> ros_message.offset5;

  // Member: offset6
  cdr >> ros_message.offset6;

  // Member: param_value
  {
    cdr >> ros_message.param_value;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
get_serialized_size(
  const dobot_msgs_v3::srv::RelJointMovJ_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: offset1
  {
    size_t item_size = sizeof(ros_message.offset1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset2
  {
    size_t item_size = sizeof(ros_message.offset2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset3
  {
    size_t item_size = sizeof(ros_message.offset3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset4
  {
    size_t item_size = sizeof(ros_message.offset4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset5
  {
    size_t item_size = sizeof(ros_message.offset5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offset6
  {
    size_t item_size = sizeof(ros_message.offset6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: param_value
  {
    size_t array_size = ros_message.param_value.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.param_value[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
max_serialized_size_RelJointMovJ_Request(
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


  // Member: offset1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: offset2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: offset3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: offset4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: offset5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: offset6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: param_value
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
    using DataType = dobot_msgs_v3::srv::RelJointMovJ_Request;
    is_plain =
      (
      offsetof(DataType, param_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RelJointMovJ_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dobot_msgs_v3::srv::RelJointMovJ_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RelJointMovJ_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dobot_msgs_v3::srv::RelJointMovJ_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RelJointMovJ_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dobot_msgs_v3::srv::RelJointMovJ_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RelJointMovJ_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RelJointMovJ_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RelJointMovJ_Request__callbacks = {
  "dobot_msgs_v3::srv",
  "RelJointMovJ_Request",
  _RelJointMovJ_Request__cdr_serialize,
  _RelJointMovJ_Request__cdr_deserialize,
  _RelJointMovJ_Request__get_serialized_size,
  _RelJointMovJ_Request__max_serialized_size
};

static rosidl_message_type_support_t _RelJointMovJ_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RelJointMovJ_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dobot_msgs_v3
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs_v3::srv::RelJointMovJ_Request>()
{
  return &dobot_msgs_v3::srv::typesupport_fastrtps_cpp::_RelJointMovJ_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, RelJointMovJ_Request)() {
  return &dobot_msgs_v3::srv::typesupport_fastrtps_cpp::_RelJointMovJ_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dobot_msgs_v3
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
cdr_serialize(
  const dobot_msgs_v3::srv::RelJointMovJ_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: res
  cdr << ros_message.res;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dobot_msgs_v3::srv::RelJointMovJ_Response & ros_message)
{
  // Member: res
  cdr >> ros_message.res;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
get_serialized_size(
  const dobot_msgs_v3::srv::RelJointMovJ_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: res
  {
    size_t item_size = sizeof(ros_message.res);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dobot_msgs_v3
max_serialized_size_RelJointMovJ_Response(
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


  // Member: res
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
    using DataType = dobot_msgs_v3::srv::RelJointMovJ_Response;
    is_plain =
      (
      offsetof(DataType, res) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RelJointMovJ_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dobot_msgs_v3::srv::RelJointMovJ_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RelJointMovJ_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dobot_msgs_v3::srv::RelJointMovJ_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RelJointMovJ_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dobot_msgs_v3::srv::RelJointMovJ_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RelJointMovJ_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RelJointMovJ_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RelJointMovJ_Response__callbacks = {
  "dobot_msgs_v3::srv",
  "RelJointMovJ_Response",
  _RelJointMovJ_Response__cdr_serialize,
  _RelJointMovJ_Response__cdr_deserialize,
  _RelJointMovJ_Response__get_serialized_size,
  _RelJointMovJ_Response__max_serialized_size
};

static rosidl_message_type_support_t _RelJointMovJ_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RelJointMovJ_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dobot_msgs_v3
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs_v3::srv::RelJointMovJ_Response>()
{
  return &dobot_msgs_v3::srv::typesupport_fastrtps_cpp::_RelJointMovJ_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, RelJointMovJ_Response)() {
  return &dobot_msgs_v3::srv::typesupport_fastrtps_cpp::_RelJointMovJ_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace dobot_msgs_v3
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RelJointMovJ__callbacks = {
  "dobot_msgs_v3::srv",
  "RelJointMovJ",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, RelJointMovJ_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, RelJointMovJ_Response)(),
};

static rosidl_service_type_support_t _RelJointMovJ__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RelJointMovJ__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dobot_msgs_v3
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_msgs_v3::srv::RelJointMovJ>()
{
  return &dobot_msgs_v3::srv::typesupport_fastrtps_cpp::_RelJointMovJ__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, RelJointMovJ)() {
  return &dobot_msgs_v3::srv::typesupport_fastrtps_cpp::_RelJointMovJ__handle;
}

#ifdef __cplusplus
}
#endif
