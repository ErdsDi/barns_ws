// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs_v3:srv/SetGripperPosition.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__SET_GRIPPER_POSITION__BUILDER_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__SET_GRIPPER_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs_v3/srv/detail/set_gripper_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_SetGripperPosition_Request_force
{
public:
  explicit Init_SetGripperPosition_Request_force(::dobot_msgs_v3::srv::SetGripperPosition_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs_v3::srv::SetGripperPosition_Request force(::dobot_msgs_v3::srv::SetGripperPosition_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetGripperPosition_Request msg_;
};

class Init_SetGripperPosition_Request_speed
{
public:
  explicit Init_SetGripperPosition_Request_speed(::dobot_msgs_v3::srv::SetGripperPosition_Request & msg)
  : msg_(msg)
  {}
  Init_SetGripperPosition_Request_force speed(::dobot_msgs_v3::srv::SetGripperPosition_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_SetGripperPosition_Request_force(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetGripperPosition_Request msg_;
};

class Init_SetGripperPosition_Request_position
{
public:
  explicit Init_SetGripperPosition_Request_position(::dobot_msgs_v3::srv::SetGripperPosition_Request & msg)
  : msg_(msg)
  {}
  Init_SetGripperPosition_Request_speed position(::dobot_msgs_v3::srv::SetGripperPosition_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SetGripperPosition_Request_speed(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetGripperPosition_Request msg_;
};

class Init_SetGripperPosition_Request_index
{
public:
  Init_SetGripperPosition_Request_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperPosition_Request_position index(::dobot_msgs_v3::srv::SetGripperPosition_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_SetGripperPosition_Request_position(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetGripperPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::SetGripperPosition_Request>()
{
  return dobot_msgs_v3::srv::builder::Init_SetGripperPosition_Request_index();
}

}  // namespace dobot_msgs_v3


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_SetGripperPosition_Response_message
{
public:
  explicit Init_SetGripperPosition_Response_message(::dobot_msgs_v3::srv::SetGripperPosition_Response & msg)
  : msg_(msg)
  {}
  ::dobot_msgs_v3::srv::SetGripperPosition_Response message(::dobot_msgs_v3::srv::SetGripperPosition_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetGripperPosition_Response msg_;
};

class Init_SetGripperPosition_Response_res
{
public:
  Init_SetGripperPosition_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperPosition_Response_message res(::dobot_msgs_v3::srv::SetGripperPosition_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return Init_SetGripperPosition_Response_message(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetGripperPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::SetGripperPosition_Response>()
{
  return dobot_msgs_v3::srv::builder::Init_SetGripperPosition_Response_res();
}

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__SET_GRIPPER_POSITION__BUILDER_HPP_
