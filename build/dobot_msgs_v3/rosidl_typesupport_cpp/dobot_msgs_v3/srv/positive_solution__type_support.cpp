// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dobot_msgs_v3:srv/PositiveSolution.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dobot_msgs_v3/srv/detail/positive_solution__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs_v3
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PositiveSolution_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PositiveSolution_Request_type_support_ids_t;

static const _PositiveSolution_Request_type_support_ids_t _PositiveSolution_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PositiveSolution_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PositiveSolution_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PositiveSolution_Request_type_support_symbol_names_t _PositiveSolution_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, PositiveSolution_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs_v3, srv, PositiveSolution_Request)),
  }
};

typedef struct _PositiveSolution_Request_type_support_data_t
{
  void * data[2];
} _PositiveSolution_Request_type_support_data_t;

static _PositiveSolution_Request_type_support_data_t _PositiveSolution_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PositiveSolution_Request_message_typesupport_map = {
  2,
  "dobot_msgs_v3",
  &_PositiveSolution_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PositiveSolution_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PositiveSolution_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PositiveSolution_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PositiveSolution_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs_v3::srv::PositiveSolution_Request>()
{
  return &::dobot_msgs_v3::srv::rosidl_typesupport_cpp::PositiveSolution_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs_v3, srv, PositiveSolution_Request)() {
  return get_message_type_support_handle<dobot_msgs_v3::srv::PositiveSolution_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/positive_solution__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs_v3
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PositiveSolution_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PositiveSolution_Response_type_support_ids_t;

static const _PositiveSolution_Response_type_support_ids_t _PositiveSolution_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PositiveSolution_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PositiveSolution_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PositiveSolution_Response_type_support_symbol_names_t _PositiveSolution_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, PositiveSolution_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs_v3, srv, PositiveSolution_Response)),
  }
};

typedef struct _PositiveSolution_Response_type_support_data_t
{
  void * data[2];
} _PositiveSolution_Response_type_support_data_t;

static _PositiveSolution_Response_type_support_data_t _PositiveSolution_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PositiveSolution_Response_message_typesupport_map = {
  2,
  "dobot_msgs_v3",
  &_PositiveSolution_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PositiveSolution_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PositiveSolution_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PositiveSolution_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PositiveSolution_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_msgs_v3::srv::PositiveSolution_Response>()
{
  return &::dobot_msgs_v3::srv::rosidl_typesupport_cpp::PositiveSolution_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs_v3, srv, PositiveSolution_Response)() {
  return get_message_type_support_handle<dobot_msgs_v3::srv::PositiveSolution_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_msgs_v3/srv/detail/positive_solution__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_msgs_v3
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PositiveSolution_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PositiveSolution_type_support_ids_t;

static const _PositiveSolution_type_support_ids_t _PositiveSolution_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PositiveSolution_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PositiveSolution_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PositiveSolution_type_support_symbol_names_t _PositiveSolution_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_msgs_v3, srv, PositiveSolution)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_msgs_v3, srv, PositiveSolution)),
  }
};

typedef struct _PositiveSolution_type_support_data_t
{
  void * data[2];
} _PositiveSolution_type_support_data_t;

static _PositiveSolution_type_support_data_t _PositiveSolution_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PositiveSolution_service_typesupport_map = {
  2,
  "dobot_msgs_v3",
  &_PositiveSolution_service_typesupport_ids.typesupport_identifier[0],
  &_PositiveSolution_service_typesupport_symbol_names.symbol_name[0],
  &_PositiveSolution_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PositiveSolution_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PositiveSolution_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_msgs_v3

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_msgs_v3::srv::PositiveSolution>()
{
  return &::dobot_msgs_v3::srv::rosidl_typesupport_cpp::PositiveSolution_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_msgs_v3, srv, PositiveSolution)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dobot_msgs_v3::srv::PositiveSolution>();
}

#ifdef __cplusplus
}
#endif
