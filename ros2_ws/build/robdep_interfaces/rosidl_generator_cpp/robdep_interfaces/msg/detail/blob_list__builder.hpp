// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robdep_interfaces:msg/BlobList.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__BUILDER_HPP_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__BUILDER_HPP_

#include "robdep_interfaces/msg/detail/blob_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robdep_interfaces
{

namespace msg
{

namespace builder
{

class Init_BlobList_data
{
public:
  Init_BlobList_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robdep_interfaces::msg::BlobList data(::robdep_interfaces::msg::BlobList::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robdep_interfaces::msg::BlobList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robdep_interfaces::msg::BlobList>()
{
  return robdep_interfaces::msg::builder::Init_BlobList_data();
}

}  // namespace robdep_interfaces

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__BUILDER_HPP_
