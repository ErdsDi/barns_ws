// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_msgs_v3:srv/SetPayload.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__SET_PAYLOAD__BUILDER_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__SET_PAYLOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_msgs_v3/srv/detail/set_payload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_SetPayload_Request_inertia
{
public:
  explicit Init_SetPayload_Request_inertia(::dobot_msgs_v3::srv::SetPayload_Request & msg)
  : msg_(msg)
  {}
  ::dobot_msgs_v3::srv::SetPayload_Request inertia(::dobot_msgs_v3::srv::SetPayload_Request::_inertia_type arg)
  {
    msg_.inertia = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetPayload_Request msg_;
};

class Init_SetPayload_Request_weight
{
public:
  Init_SetPayload_Request_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPayload_Request_inertia weight(::dobot_msgs_v3::srv::SetPayload_Request::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return Init_SetPayload_Request_inertia(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetPayload_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::SetPayload_Request>()
{
  return dobot_msgs_v3::srv::builder::Init_SetPayload_Request_weight();
}

}  // namespace dobot_msgs_v3


namespace dobot_msgs_v3
{

namespace srv
{

namespace builder
{

class Init_SetPayload_Response_res
{
public:
  Init_SetPayload_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_msgs_v3::srv::SetPayload_Response res(::dobot_msgs_v3::srv::SetPayload_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_msgs_v3::srv::SetPayload_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_msgs_v3::srv::SetPayload_Response>()
{
  return dobot_msgs_v3::srv::builder::Init_SetPayload_Response_res();
}

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__SET_PAYLOAD__BUILDER_HPP_
