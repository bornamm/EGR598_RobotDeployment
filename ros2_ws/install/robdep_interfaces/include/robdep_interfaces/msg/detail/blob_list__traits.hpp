// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robdep_interfaces:msg/BlobList.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__TRAITS_HPP_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__TRAITS_HPP_

#include "robdep_interfaces/msg/detail/blob_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "robdep_interfaces/msg/detail/blob_data__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robdep_interfaces::msg::BlobList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robdep_interfaces::msg::BlobList & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robdep_interfaces::msg::BlobList>()
{
  return "robdep_interfaces::msg::BlobList";
}

template<>
inline const char * name<robdep_interfaces::msg::BlobList>()
{
  return "robdep_interfaces/msg/BlobList";
}

template<>
struct has_fixed_size<robdep_interfaces::msg::BlobList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robdep_interfaces::msg::BlobList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robdep_interfaces::msg::BlobList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__TRAITS_HPP_
