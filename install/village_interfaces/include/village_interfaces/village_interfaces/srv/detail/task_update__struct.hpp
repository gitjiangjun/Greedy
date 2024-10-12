// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from village_interfaces:srv/TaskUpdate.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__TASK_UPDATE__STRUCT_HPP_
#define VILLAGE_INTERFACES__SRV__DETAIL__TASK_UPDATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__village_interfaces__srv__TaskUpdate_Request __attribute__((deprecated))
#else
# define DEPRECATED__village_interfaces__srv__TaskUpdate_Request __declspec(deprecated)
#endif

namespace village_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskUpdate_Request_
{
  using Type = TaskUpdate_Request_<ContainerAllocator>;

  explicit TaskUpdate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TaskUpdate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tasks_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _tasks_type tasks;

  // setters for named parameter idiom
  Type & set__tasks(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->tasks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__village_interfaces__srv__TaskUpdate_Request
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__village_interfaces__srv__TaskUpdate_Request
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskUpdate_Request_ & other) const
  {
    if (this->tasks != other.tasks) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskUpdate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskUpdate_Request_

// alias to use template instance with default allocator
using TaskUpdate_Request =
  village_interfaces::srv::TaskUpdate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace village_interfaces


#ifndef _WIN32
# define DEPRECATED__village_interfaces__srv__TaskUpdate_Response __attribute__((deprecated))
#else
# define DEPRECATED__village_interfaces__srv__TaskUpdate_Response __declspec(deprecated)
#endif

namespace village_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TaskUpdate_Response_
{
  using Type = TaskUpdate_Response_<ContainerAllocator>;

  explicit TaskUpdate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit TaskUpdate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__village_interfaces__srv__TaskUpdate_Response
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__village_interfaces__srv__TaskUpdate_Response
    std::shared_ptr<village_interfaces::srv::TaskUpdate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskUpdate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskUpdate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskUpdate_Response_

// alias to use template instance with default allocator
using TaskUpdate_Response =
  village_interfaces::srv::TaskUpdate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace village_interfaces

namespace village_interfaces
{

namespace srv
{

struct TaskUpdate
{
  using Request = village_interfaces::srv::TaskUpdate_Request;
  using Response = village_interfaces::srv::TaskUpdate_Response;
};

}  // namespace srv

}  // namespace village_interfaces

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__TASK_UPDATE__STRUCT_HPP_
