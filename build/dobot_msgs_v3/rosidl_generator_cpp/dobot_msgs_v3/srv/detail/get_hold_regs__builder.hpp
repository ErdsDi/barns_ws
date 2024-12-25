// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs_v3:srv/GetHoldRegs.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__GET_HOLD_REGS__BUILDER_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__GET_HOLD_REGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs_v3/srv/detail/get_hold_regs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_GetHoldRegs_Request_val_type
{
public:
  explicit Init_GetHoldRegs_Request_val_type(::dobot_msgs_v3::srv::GetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs_v3::srv::GetHoldRegs_Request val_type(::dobot_msgs_v3::srv::GetHoldRegs_Request::_val_type_type arg)
  {
    msg_.val_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetHoldRegs_Request msg_;
};

class Init_GetHoldRegs_Request_count
{
public:
  explicit Init_GetHoldRegs_Request_count(::dobot_msgs_v3::srv::GetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  Init_GetHoldRegs_Request_val_type count(::dobot_msgs_v3::srv::GetHoldRegs_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_GetHoldRegs_Request_val_type(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetHoldRegs_Request msg_;
};

class Init_GetHoldRegs_Request_addr
{
public:
  explicit Init_GetHoldRegs_Request_addr(::dobot_msgs_v3::srv::GetHoldRegs_Request & msg)
  : msg_(msg)
  {}
  Init_GetHoldRegs_Request_count addr(::dobot_msgs_v3::srv::GetHoldRegs_Request::_addr_type arg)
  {
    msg_.addr = std::move(arg);
    return Init_GetHoldRegs_Request_count(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetHoldRegs_Request msg_;
};

class Init_GetHoldRegs_Request_index
{
public:
  Init_GetHoldRegs_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHoldRegs_Request_addr index(::dobot_msgs_v3::srv::GetHoldRegs_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_GetHoldRegs_Request_addr(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetHoldRegs_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::GetHoldRegs_Request>()
{
  return dobot_msgs_v3::srv::builder::Init_GetHoldRegs_Request_index();
}

}  // namespace dobot_msgs_v3


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_GetHoldRegs_Response_value
{
public:
  explicit Init_GetHoldRegs_Response_value(::dobot_msgs_v3::srv::GetHoldRegs_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs_v3::srv::GetHoldRegs_Response value(::dobot_msgs_v3::srv::GetHoldRegs_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetHoldRegs_Response msg_;
};

class Init_GetHoldRegs_Response_res
{
public:
  Init_GetHoldRegs_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetHoldRegs_Response_value res(::dobot_msgs_v3::srv::GetHoldRegs_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return Init_GetHoldRegs_Response_value(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetHoldRegs_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::GetHoldRegs_Response>()
{
  return dobot_msgs_v3::srv::builder::Init_GetHoldRegs_Response_res();
}

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__GET_HOLD_REGS__BUILDER_HPP_