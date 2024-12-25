// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs_v3:srv/ModbusClose.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__MODBUS_CLOSE__BUILDER_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__MODBUS_CLOSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs_v3/srv/detail/modbus_close__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_ModbusClose_Request_index
{
public:
  Init_ModbusClose_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs_v3::srv::ModbusClose_Request index(::dobot_msgs_v3::srv::ModbusClose_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::ModbusClose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::ModbusClose_Request>()
{
  return dobot_msgs_v3::srv::builder::Init_ModbusClose_Request_index();
}

}  // namespace dobot_msgs_v3


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_ModbusClose_Response_res
{
public:
  Init_ModbusClose_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs_v3::srv::ModbusClose_Response res(::dobot_msgs_v3::srv::ModbusClose_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::ModbusClose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::ModbusClose_Response>()
{
  return dobot_msgs_v3::srv::builder::Init_ModbusClose_Response_res();
}

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__MODBUS_CLOSE__BUILDER_HPP_