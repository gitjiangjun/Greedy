// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from village_interfaces:srv/TaskAssign.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "village_interfaces/srv/detail/task_assign__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskAssign_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) village_interfaces::srv::TaskAssign_Request(_init);
}

void TaskAssign_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<village_interfaces::srv::TaskAssign_Request *>(message_memory);
  typed_message->~TaskAssign_Request();
}

size_t size_function__TaskAssign_Request__tasks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskAssign_Request__tasks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskAssign_Request__tasks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__TaskAssign_Request__tasks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskAssign_Request_message_member_array[1] = {
  {
    "tasks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces::srv::TaskAssign_Request, tasks),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskAssign_Request__tasks,  // size() function pointer
    get_const_function__TaskAssign_Request__tasks,  // get_const(index) function pointer
    get_function__TaskAssign_Request__tasks,  // get(index) function pointer
    resize_function__TaskAssign_Request__tasks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskAssign_Request_message_members = {
  "village_interfaces::srv",  // message namespace
  "TaskAssign_Request",  // message name
  1,  // number of fields
  sizeof(village_interfaces::srv::TaskAssign_Request),
  TaskAssign_Request_message_member_array,  // message members
  TaskAssign_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskAssign_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskAssign_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskAssign_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace village_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interfaces::srv::TaskAssign_Request>()
{
  return &::village_interfaces::srv::rosidl_typesupport_introspection_cpp::TaskAssign_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, TaskAssign_Request)() {
  return &::village_interfaces::srv::rosidl_typesupport_introspection_cpp::TaskAssign_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "village_interfaces/srv/detail/task_assign__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskAssign_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) village_interfaces::srv::TaskAssign_Response(_init);
}

void TaskAssign_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<village_interfaces::srv::TaskAssign_Response *>(message_memory);
  typed_message->~TaskAssign_Response();
}

size_t size_function__TaskAssign_Response__task_result(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TaskAssign_Response__task_result(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__TaskAssign_Response__task_result(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__TaskAssign_Response__task_result(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskAssign_Response_message_member_array[1] = {
  {
    "task_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces::srv::TaskAssign_Response, task_result),  // bytes offset in struct
    nullptr,  // default value
    size_function__TaskAssign_Response__task_result,  // size() function pointer
    get_const_function__TaskAssign_Response__task_result,  // get_const(index) function pointer
    get_function__TaskAssign_Response__task_result,  // get(index) function pointer
    resize_function__TaskAssign_Response__task_result  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskAssign_Response_message_members = {
  "village_interfaces::srv",  // message namespace
  "TaskAssign_Response",  // message name
  1,  // number of fields
  sizeof(village_interfaces::srv::TaskAssign_Response),
  TaskAssign_Response_message_member_array,  // message members
  TaskAssign_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskAssign_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskAssign_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskAssign_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace village_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interfaces::srv::TaskAssign_Response>()
{
  return &::village_interfaces::srv::rosidl_typesupport_introspection_cpp::TaskAssign_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, TaskAssign_Response)() {
  return &::village_interfaces::srv::rosidl_typesupport_introspection_cpp::TaskAssign_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "village_interfaces/srv/detail/task_assign__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TaskAssign_service_members = {
  "village_interfaces::srv",  // service namespace
  "TaskAssign",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<village_interfaces::srv::TaskAssign>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TaskAssign_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskAssign_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace village_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<village_interfaces::srv::TaskAssign>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::village_interfaces::srv::rosidl_typesupport_introspection_cpp::TaskAssign_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::village_interfaces::srv::TaskAssign_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::village_interfaces::srv::TaskAssign_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, TaskAssign)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<village_interfaces::srv::TaskAssign>();
}

#ifdef __cplusplus
}
#endif
