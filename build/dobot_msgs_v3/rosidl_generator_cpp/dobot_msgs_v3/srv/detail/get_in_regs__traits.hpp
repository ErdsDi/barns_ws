// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_msgs_v3:srv/GetInRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__GET_IN_REGS__TRAITS_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__GET_IN_REGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_msgs_v3/srv/detail/get_in_regs__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_msgs_v3
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInRegs_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << ", ";
  }

  // member: addr
  {
    out << "addr: ";
    rosidl_generator_traits::value_to_yaml(msg.addr, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: val_type
  {
    if (msg.val_type.size() == 0) {
      out << "val_type: []";
    } else {
      out << "val_type: [";
      size_t pending_items = msg.val_type.size();
      for (auto item : msg.val_type) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInRegs_Request & msg,
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

  // member: addr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "addr: ";
    rosidl_generator_traits::value_to_yaml(msg.addr, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: val_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.val_type.size() == 0) {
      out << "val_type: []\n";
    } else {
      out << "val_type:\n";
      for (auto item : msg.val_type) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInRegs_Request & msg, bool use_flow_style = false)
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
  const dobot_msgs_v3::srv::GetInRegs_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs_v3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs_v3::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs_v3::srv::GetInRegs_Request & msg)
{
  return dobot_msgs_v3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs_v3::srv::GetInRegs_Request>()
{
  return "dobot_msgs_v3::srv::GetInRegs_Request";
}

template<>
inline const char * name<dobot_msgs_v3::srv::GetInRegs_Request>()
{
  return "dobot_msgs_v3/srv/GetInRegs_Request";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::GetInRegs_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::GetInRegs_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_msgs_v3::srv::GetInRegs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_msgs_v3
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInRegs_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    out << "res: ";
    rosidl_generator_traits::value_to_yaml(msg.res, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInRegs_Response & msg,
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

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInRegs_Response & msg, bool use_flow_style = false)
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
  const dobot_msgs_v3::srv::GetInRegs_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_msgs_v3::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_msgs_v3::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_msgs_v3::srv::GetInRegs_Response & msg)
{
  return dobot_msgs_v3::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_msgs_v3::srv::GetInRegs_Response>()
{
  return "dobot_msgs_v3::srv::GetInRegs_Response";
}

template<>
inline const char * name<dobot_msgs_v3::srv::GetInRegs_Response>()
{
  return "dobot_msgs_v3/srv/GetInRegs_Response";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::GetInRegs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::GetInRegs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_msgs_v3::srv::GetInRegs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_msgs_v3::srv::GetInRegs>()
{
  return "dobot_msgs_v3::srv::GetInRegs";
}

template<>
inline const char * name<dobot_msgs_v3::srv::GetInRegs>()
{
  return "dobot_msgs_v3/srv/GetInRegs";
}

template<>
struct has_fixed_size<dobot_msgs_v3::srv::GetInRegs>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_msgs_v3::srv::GetInRegs_Request>::value &&
    has_fixed_size<dobot_msgs_v3::srv::GetInRegs_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_msgs_v3::srv::GetInRegs>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_msgs_v3::srv::GetInRegs_Request>::value &&
    has_bounded_size<dobot_msgs_v3::srv::GetInRegs_Response>::value
  >
{
};

template<>
struct is_service<dobot_msgs_v3::srv::GetInRegs>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_msgs_v3::srv::GetInRegs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_msgs_v3::srv::GetInRegs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__GET_IN_REGS__TRAITS_HPP_