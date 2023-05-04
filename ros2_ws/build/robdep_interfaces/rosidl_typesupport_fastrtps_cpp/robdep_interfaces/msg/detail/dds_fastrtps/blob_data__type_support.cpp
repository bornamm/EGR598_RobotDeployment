// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice
#include "robdep_interfaces/msg/detail/blob_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "robdep_interfaces/msg/detail/blob_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace robdep_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robdep_interfaces
cdr_serialize(
  const robdep_interfaces::msg::BlobData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: color
  cdr << ros_message.color;
  // Member: x_point
  cdr << ros_message.x_point;
  // Member: y_point
  cdr << ros_message.y_point;
  // Member: size
  cdr << ros_message.size;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robdep_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robdep_interfaces::msg::BlobData & ros_message)
{
  // Member: color
  cdr >> ros_message.color;

  // Member: x_point
  cdr >> ros_message.x_point;

  // Member: y_point
  cdr >> ros_message.y_point;

  // Member: size
  cdr >> ros_message.size;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robdep_interfaces
get_serialized_size(
  const robdep_interfaces::msg::BlobData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.color.size() + 1);
  // Member: x_point
  {
    size_t item_size = sizeof(ros_message.x_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_point
  {
    size_t item_size = sizeof(ros_message.y_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: size
  {
    size_t item_size = sizeof(ros_message.size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robdep_interfaces
max_serialized_size_BlobData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: color
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: x_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BlobData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const robdep_interfaces::msg::BlobData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BlobData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<robdep_interfaces::msg::BlobData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BlobData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const robdep_interfaces::msg::BlobData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BlobData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BlobData(full_bounded, 0);
}

static message_type_support_callbacks_t _BlobData__callbacks = {
  "robdep_interfaces::msg",
  "BlobData",
  _BlobData__cdr_serialize,
  _BlobData__cdr_deserialize,
  _BlobData__get_serialized_size,
  _BlobData__max_serialized_size
};

static rosidl_message_type_support_t _BlobData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BlobData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robdep_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_robdep_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<robdep_interfaces::msg::BlobData>()
{
  return &robdep_interfaces::msg::typesupport_fastrtps_cpp::_BlobData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robdep_interfaces, msg, BlobData)() {
  return &robdep_interfaces::msg::typesupport_fastrtps_cpp::_BlobData__handle;
}

#ifdef __cplusplus
}
#endif
