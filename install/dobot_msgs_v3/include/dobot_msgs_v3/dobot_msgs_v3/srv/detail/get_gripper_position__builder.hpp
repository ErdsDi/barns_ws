// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs_v3:srv/GetGripperPosition.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__GET_GRIPPER_POSITION__BUILDER_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__GET_GRIPPER_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs_v3/srv/detail/get_gripper_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_GetGripperPosition_Request_index
{
public:
  Init_GetGripperPosition_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs_v3::srv::GetGripperPosition_Request index(::dobot_msgs_v3::srv::GetGripperPosition_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetGripperPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::GetGripperPosition_Request>()
{
  return dobot_msgs_v3::srv::builder::Init_GetGripperPosition_Request_index();
}

}  // namespace dobot_msgs_v3


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_GetGripperPosition_Response_position
{
public:
  Init_GetGripperPosition_Response_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs_v3::srv::GetGripperPosition_Response position(::dobot_msgs_v3::srv::GetGripperPosition_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::GetGripperPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::GetGripperPosition_Response>()
{
  return dobot_msgs_v3::srv::builder::Init_GetGripperPosition_Response_position();
}

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__GET_GRIPPER_POSITION__BUILDER_HPP_
