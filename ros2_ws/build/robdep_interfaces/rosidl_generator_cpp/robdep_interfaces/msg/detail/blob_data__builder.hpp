// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__BUILDER_HPP_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__BUILDER_HPP_

#include "robdep_interfaces/msg/detail/blob_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robdep_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlobData_size
{
public:
  explicit Init_BlobData_size(::robdep_interfaces::msg::BlobData & msg)
  : msg_(msg)
  {}
  ::robdep_interfaces::msg::BlobData size(::robdep_interfaces::msg::BlobData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robdep_interfaces::msg::BlobData msg_;
};

class Init_BlobData_y_point
{
public:
  explicit Init_BlobData_y_point(::robdep_interfaces::msg::BlobData & msg)
  : msg_(msg)
  {}
  Init_BlobData_size y_point(::robdep_interfaces::msg::BlobData::_y_point_type arg)
  {
    msg_.y_point = std::move(arg);
    return Init_BlobData_size(msg_);
  }

private:
  ::robdep_interfaces::msg::BlobData msg_;
};

class Init_BlobData_x_point
{
public:
  explicit Init_BlobData_x_point(::robdep_interfaces::msg::BlobData & msg)
  : msg_(msg)
  {}
  Init_BlobData_y_point x_point(::robdep_interfaces::msg::BlobData::_x_point_type arg)
  {
    msg_.x_point = std::move(arg);
    return Init_BlobData_y_point(msg_);
  }

private:
  ::robdep_interfaces::msg::BlobData msg_;
};

class Init_BlobData_color
{
public:
  Init_BlobData_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlobData_x_point color(::robdep_interfaces::msg::BlobData::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_BlobData_x_point(msg_);
  }

private:
  ::robdep_interfaces::msg::BlobData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robdep_interfaces::msg::BlobData>()
{
  return robdep_interfaces::msg::builder::Init_BlobData_color();
}

}  // namespace robdep_interfaces

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__BUILDER_HPP_
