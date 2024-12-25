// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dobot_msgs_v3:srv/AccJ.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MSGS_V3__SRV__DETAIL__ACC_J__STRUCT_HPP_
#define DOBOT_MSGS_V3__SRV__DETAIL__ACC_J__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__dobot_msgs_v3__srv__AccJ_Request __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs_v3__srv__AccJ_Request __declspec(deprecated)
#endif

namespace dobot_msgs_v3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AccJ_Request_
{
  using Type = AccJ_Request_<ContainerAllocator>;

  explicit AccJ_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0l;
    }
  }

  explicit AccJ_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0l;
    }
  }

  // field types and members
  using _r_type =
    int32_t;
  _r_type r;

  // setters for named parameter idiom
  Type & set__r(
    const int32_t & _arg)
  {
    this->r = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs_v3__srv__AccJ_Request
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs_v3__srv__AccJ_Request
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccJ_Request_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccJ_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccJ_Request_

// alias to use template instance with default allocator
using AccJ_Request =
  dobot_msgs_v3::srv::AccJ_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs_v3


#ifndef _WIN32
# define DEPRECATED__dobot_msgs_v3__srv__AccJ_Response __attribute__((deprecated))
#else
# define DEPRECATED__dobot_msgs_v3__srv__AccJ_Response __declspec(deprecated)
#endif

namespace dobot_msgs_v3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AccJ_Response_
{
  using Type = AccJ_Response_<ContainerAllocator>;

  explicit AccJ_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res = 0l;
    }
  }

  explicit AccJ_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dobot_msgs_v3__srv__AccJ_Response
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dobot_msgs_v3__srv__AccJ_Response
    std::shared_ptr<dobot_msgs_v3::srv::AccJ_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccJ_Response_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccJ_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccJ_Response_

// alias to use template instance with default allocator
using AccJ_Response =
  dobot_msgs_v3::srv::AccJ_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace dobot_msgs_v3
{

namespace srv
{

struct AccJ
{
  using Request = dobot_msgs_v3::srv::AccJ_Request;
  using Response = dobot_msgs_v3::srv::AccJ_Response;
};

}  // namespace srv

}  // namespace dobot_msgs_v3

#endif  // DOBOT_MSGS_V3__SRV__DETAIL__ACC_J__STRUCT_HPP_