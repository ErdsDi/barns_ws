// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs_v3:srv/SetCollisionLevel.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__SET_COLLISION_LEVEL__STRUCT_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__SET_COLLISION_LEVEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Request __declspec(deprecated)
#endif

namespace dobot_msgs_v3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCollisionLevel_Request_
{
  using Type = SetCollisionLevel_Request_<ContainerAllocator>;

  explicit SetCollisionLevel_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0l;
    }
  }

  explicit SetCollisionLevel_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0l;
    }
  }

  // field types and members
  using _level_type =
    int32_t;
  _level_type level;

  // setters for named parameter idiom
  Type & set__level(
    const int32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Request
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Request
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCollisionLevel_Request_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCollisionLevel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCollisionLevel_Request_

// alias to use template instance with default allocator
using SetCollisionLevel_Request =
  dobot_msgs_v3::srv::SetCollisionLevel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs_v3


#ifndef _WIN32
# define DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Response __declspec(deprecated)
#endif

namespace dobot_msgs_v3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetCollisionLevel_Response_
{
  using Type = SetCollisionLevel_Response_<ContainerAllocator>;

  explicit SetCollisionLevel_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit SetCollisionLevel_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  // field types and members
  using _res_type =
    int32_t;
  _res_type res;

  // setters for named parameter idiom
  Type & set__res(
    const int32_t & _arg)
  {
    this->res = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Response
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs_v3__srv__SetCollisionLevel_Response
    std::shared_ptr<dobot_msgs_v3::srv::SetCollisionLevel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetCollisionLevel_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetCollisionLevel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetCollisionLevel_Response_

// alias to use template instance with default allocator
using SetCollisionLevel_Response =
  dobot_msgs_v3::srv::SetCollisionLevel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace dobot_msgs_v3
{

namespace srv
{

struct SetCollisionLevel
{
  using Request = dobot_msgs_v3::srv::SetCollisionLevel_Request;
  using Response = dobot_msgs_v3::srv::SetCollisionLevel_Response;
};

}  // namespace srv

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__SET_COLLISION_LEVEL__STRUCT_HPP_
