// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs_v3:srv/GetGripperPosition.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__GET_GRIPPER_POSITION__TRAITS_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__GET_GRIPPER_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs_v3/srv/detail/get_gripper_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_msgs_v3
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGripperPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGripperPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGripperPosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs_v3::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs_v3::srv::GetGripperPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs_v3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs_v3::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs_v3::srv::GetGripperPosition_Request & msg)
{
  return dobot_msgs_v3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs_v3::srv::GetGripperPosition_Request>()
{
  return "dobot_msgs_v3::srv::GetGripperPosition_Request";
}

template<>
inline const char * name<dobot_msgs_v3::srv::GetGripperPosition_Request>()
{
  return "dobot_msgs_v3/srv/GetGripperPosition_Request";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::GetGripperPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::GetGripperPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs_v3::srv::GetGripperPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs_v3
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetGripperPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetGripperPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetGripperPosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_generator_traits
{

[[deprecated("use dobot_msgs_v3::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_msgs_v3::srv::GetGripperPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs_v3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs_v3::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs_v3::srv::GetGripperPosition_Response & msg)
{
  return dobot_msgs_v3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs_v3::srv::GetGripperPosition_Response>()
{
  return "dobot_msgs_v3::srv::GetGripperPosition_Response";
}

template<>
inline const char * name<dobot_msgs_v3::srv::GetGripperPosition_Response>()
{
  return "dobot_msgs_v3/srv/GetGripperPosition_Response";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::GetGripperPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::GetGripperPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs_v3::srv::GetGripperPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs_v3::srv::GetGripperPosition>()
{
  return "dobot_msgs_v3::srv::GetGripperPosition";
}

template<>
inline const char * name<dobot_msgs_v3::srv::GetGripperPosition>()
{
  return "dobot_msgs_v3/srv/GetGripperPosition";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::GetGripperPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs_v3::srv::GetGripperPosition_Request>::value &&
    has_fixed_size<dobot_msgs_v3::srv::GetGripperPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::GetGripperPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs_v3::srv::GetGripperPosition_Request>::value &&
    has_bounded_size<dobot_msgs_v3::srv::GetGripperPosition_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs_v3::srv::GetGripperPosition>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs_v3::srv::GetGripperPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs_v3::srv::GetGripperPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__GET_GRIPPER_POSITION__TRAITS_HPP_
