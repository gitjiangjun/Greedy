// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from village_interfaces:srv/TaskAssign.idl
// generated code does not contain a copyright notice
#include "village_interfaces/srv/detail/task_assign__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "village_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "village_interfaces/srv/detail/task_assign__struct.h"
#include "village_interfaces/srv/detail/task_assign__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // tasks
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // tasks

// forward declare type support functions


using _TaskAssign_Request__ros_msg_type = village_interfaces__srv__TaskAssign_Request;

static bool _TaskAssign_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TaskAssign_Request__ros_msg_type * ros_message = static_cast<const _TaskAssign_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tasks
  {
    size_t size = ros_message->tasks.size;
    auto array_ptr = ros_message->tasks.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TaskAssign_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TaskAssign_Request__ros_msg_type * ros_message = static_cast<_TaskAssign_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tasks
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tasks.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->tasks);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->tasks, size)) {
      return "failed to create array for field 'tasks'";
    }
    auto array_ptr = ros_message->tasks.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t get_serialized_size_village_interfaces__srv__TaskAssign_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskAssign_Request__ros_msg_type * ros_message = static_cast<const _TaskAssign_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tasks
  {
    size_t array_size = ros_message->tasks.size;
    auto array_ptr = ros_message->tasks.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TaskAssign_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_village_interfaces__srv__TaskAssign_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t max_serialized_size_village_interfaces__srv__TaskAssign_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tasks
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TaskAssign_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_village_interfaces__srv__TaskAssign_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TaskAssign_Request = {
  "village_interfaces::srv",
  "TaskAssign_Request",
  _TaskAssign_Request__cdr_serialize,
  _TaskAssign_Request__cdr_deserialize,
  _TaskAssign_Request__get_serialized_size,
  _TaskAssign_Request__max_serialized_size
};

static rosidl_message_type_support_t _TaskAssign_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskAssign_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, TaskAssign_Request)() {
  return &_TaskAssign_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "village_interfaces/srv/detail/task_assign__struct.h"
// already included above
// #include "village_interfaces/srv/detail/task_assign__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // task_result
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // task_result

// forward declare type support functions


using _TaskAssign_Response__ros_msg_type = village_interfaces__srv__TaskAssign_Response;

static bool _TaskAssign_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TaskAssign_Response__ros_msg_type * ros_message = static_cast<const _TaskAssign_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: task_result
  {
    size_t size = ros_message->task_result.size;
    auto array_ptr = ros_message->task_result.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TaskAssign_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TaskAssign_Response__ros_msg_type * ros_message = static_cast<_TaskAssign_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: task_result
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->task_result.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->task_result);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->task_result, size)) {
      return "failed to create array for field 'task_result'";
    }
    auto array_ptr = ros_message->task_result.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t get_serialized_size_village_interfaces__srv__TaskAssign_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskAssign_Response__ros_msg_type * ros_message = static_cast<const _TaskAssign_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name task_result
  {
    size_t array_size = ros_message->task_result.size;
    auto array_ptr = ros_message->task_result.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TaskAssign_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_village_interfaces__srv__TaskAssign_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_village_interfaces
size_t max_serialized_size_village_interfaces__srv__TaskAssign_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: task_result
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TaskAssign_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_village_interfaces__srv__TaskAssign_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TaskAssign_Response = {
  "village_interfaces::srv",
  "TaskAssign_Response",
  _TaskAssign_Response__cdr_serialize,
  _TaskAssign_Response__cdr_deserialize,
  _TaskAssign_Response__get_serialized_size,
  _TaskAssign_Response__max_serialized_size
};

static rosidl_message_type_support_t _TaskAssign_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskAssign_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, TaskAssign_Response)() {
  return &_TaskAssign_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "village_interfaces/srv/task_assign.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TaskAssign__callbacks = {
  "village_interfaces::srv",
  "TaskAssign",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, TaskAssign_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, TaskAssign_Response)(),
};

static rosidl_service_type_support_t TaskAssign__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TaskAssign__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, village_interfaces, srv, TaskAssign)() {
  return &TaskAssign__handle;
}

#if defined(__cplusplus)
}
#endif