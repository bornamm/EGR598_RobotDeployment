// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__STRUCT_HPP_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robdep_interfaces__msg__BlobData __attribute__((deprecated))
#else
# define DEPRECATED__robdep_interfaces__msg__BlobData __declspec(deprecated)
#endif

namespace robdep_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlobData_
{
  using Type = BlobData_<ContainerAllocator>;

  explicit BlobData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->x_point = 0.0;
      this->y_point = 0.0;
      this->size = 0.0;
    }
  }

  explicit BlobData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->x_point = 0.0;
      this->y_point = 0.0;
      this->size = 0.0;
    }
  }

  // field types and members
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _x_point_type =
    double;
  _x_point_type x_point;
  using _y_point_type =
    double;
  _y_point_type y_point;
  using _size_type =
    double;
  _size_type size;

  // setters for named parameter idiom
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__x_point(
    const double & _arg)
  {
    this->x_point = _arg;
    return *this;
  }
  Type & set__y_point(
    const double & _arg)
  {
    this->y_point = _arg;
    return *this;
  }
  Type & set__size(
    const double & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robdep_interfaces::msg::BlobData_<ContainerAllocator> *;
  using ConstRawPtr =
    const robdep_interfaces::msg::BlobData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robdep_interfaces::msg::BlobData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robdep_interfaces::msg::BlobData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robdep_interfaces__msg__BlobData
    std::shared_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robdep_interfaces__msg__BlobData
    std::shared_ptr<robdep_interfaces::msg::BlobData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlobData_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->x_point != other.x_point) {
      return false;
    }
    if (this->y_point != other.y_point) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlobData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlobData_

// alias to use template instance with default allocator
using BlobData =
  robdep_interfaces::msg::BlobData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robdep_interfaces

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__STRUCT_HPP_
