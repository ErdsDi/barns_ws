// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs_v3:srv/ClearError.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__CLEAR_ERROR__TRAITS_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__CLEAR_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs_v3/srv/detail/clear_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_msgs_v3
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearError_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearError_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearError_Request & msg, bool use_flow_style = false)
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
  const dobot_msgs_v3::srv::ClearError_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs_v3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs_v3::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs_v3::srv::ClearError_Request & msg)
{
  return dobot_msgs_v3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs_v3::srv::ClearError_Request>()
{
  return "dobot_msgs_v3::srv::ClearError_Request";
}

template<>
inline const char * name<dobot_msgs_v3::srv::ClearError_Request>()
{
  return "dobot_msgs_v3/srv/ClearError_Request";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::ClearError_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::ClearError_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs_v3::srv::ClearError_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs_v3
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearError_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearError_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearError_Response & msg, bool use_flow_style = false)
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
  const dobot_msgs_v3::srv::ClearError_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs_v3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs_v3::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs_v3::srv::ClearError_Response & msg)
{
  return dobot_msgs_v3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs_v3::srv::ClearError_Response>()
{
  return "dobot_msgs_v3::srv::ClearError_Response";
}

template<>
inline const char * name<dobot_msgs_v3::srv::ClearError_Response>()
{
  return "dobot_msgs_v3/srv/ClearError_Response";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::ClearError_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::ClearError_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_msgs_v3::srv::ClearError_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs_v3::srv::ClearError>()
{
  return "dobot_msgs_v3::srv::ClearError";
}

template<>
inline const char * name<dobot_msgs_v3::srv::ClearError>()
{
  return "dobot_msgs_v3/srv/ClearError";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::ClearError>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs_v3::srv::ClearError_Request>::value &&
    has_fixed_size<dobot_msgs_v3::srv::ClearError_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::ClearError>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs_v3::srv::ClearError_Request>::value &&
    has_bounded_size<dobot_msgs_v3::srv::ClearError_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs_v3::srv::ClearError>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs_v3::srv::ClearError_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs_v3::srv::ClearError_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__CLEAR_ERROR__TRAITS_HPP_
