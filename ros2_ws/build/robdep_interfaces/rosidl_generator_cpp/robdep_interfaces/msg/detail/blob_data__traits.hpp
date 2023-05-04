// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__TRAITS_HPP_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__TRAITS_HPP_

#include "robdep_interfaces/msg/detail/blob_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robdep_interfaces::msg::BlobData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: x_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_point: ";
    value_to_yaml(msg.x_point, out);
    out << "\n";
  }

  // member: y_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_point: ";
    value_to_yaml(msg.y_point, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    value_to_yaml(msg.size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robdep_interfaces::msg::BlobData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robdep_interfaces::msg::BlobData>()
{
  return "robdep_interfaces::msg::BlobData";
}

template<>
inline const char * name<robdep_interfaces::msg::BlobData>()
{
  return "robdep_interfaces/msg/BlobData";
}

template<>
struct has_fixed_size<robdep_interfaces::msg::BlobData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robdep_interfaces::msg::BlobData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robdep_interfaces::msg::BlobData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__TRAITS_HPP_
