// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robdep_interfaces:msg/BlobList.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__STRUCT_HPP_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'data'
#include "robdep_interfaces/msg/detail/blob_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robdep_interfaces__msg__BlobList __attribute__((deprecated))
#else
# define DEPRECATED__robdep_interfaces__msg__BlobList __declspec(deprecated)
#endif

namespace robdep_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlobList_
{
  using Type = BlobList_<ContainerAllocator>;

  explicit BlobList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit BlobList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<robdep_interfaces::msg::BlobData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robdep_interfaces::msg::BlobData_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<robdep_interfaces::msg::BlobData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robdep_interfaces::msg::BlobData_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robdep_interfaces::msg::BlobList_<ContainerAllocator> *;
  using ConstRawPtr =
    const robdep_interfaces::msg::BlobList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robdep_interfaces::msg::BlobList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robdep_interfaces::msg::BlobList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robdep_interfaces__msg__BlobList
    std::shared_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robdep_interfaces__msg__BlobList
    std::shared_ptr<robdep_interfaces::msg::BlobList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlobList_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlobList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlobList_

// alias to use template instance with default allocator
using BlobList =
  robdep_interfaces::msg::BlobList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robdep_interfaces

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__STRUCT_HPP_
