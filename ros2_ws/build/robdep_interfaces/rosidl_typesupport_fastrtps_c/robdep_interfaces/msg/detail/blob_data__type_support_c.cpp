// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice
#include "robdep_interfaces/msg/detail/blob_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robdep_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robdep_interfaces/msg/detail/blob_data__struct.h"
#include "robdep_interfaces/msg/detail/blob_data__functions.h"
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

#include "rosidl_runtime_c/string.h"  // color
#include "rosidl_runtime_c/string_functions.h"  // color

// forward declare type support functions


using _BlobData__ros_msg_type = robdep_interfaces__msg__BlobData;

static bool _BlobData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BlobData__ros_msg_type * ros_message = static_cast<const _BlobData__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    const rosidl_runtime_c__String * str = &ros_message->color;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: x_point
  {
    cdr << ros_message->x_point;
  }

  // Field name: y_point
  {
    cdr << ros_message->y_point;
  }

  // Field name: size
  {
    cdr << ros_message->size;
  }

  return true;
}

static bool _BlobData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BlobData__ros_msg_type * ros_message = static_cast<_BlobData__ros_msg_type *>(untyped_ros_message);
  // Field name: color
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color.data) {
      rosidl_runtime_c__String__init(&ros_message->color);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color'\n");
      return false;
    }
  }

  // Field name: x_point
  {
    cdr >> ros_message->x_point;
  }

  // Field name: y_point
  {
    cdr >> ros_message->y_point;
  }

  // Field name: size
  {
    cdr >> ros_message->size;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robdep_interfaces
size_t get_serialized_size_robdep_interfaces__msg__BlobData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BlobData__ros_msg_type * ros_message = static_cast<const _BlobData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color.size + 1);
  // field.name x_point
  {
    size_t item_size = sizeof(ros_message->x_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_point
  {
    size_t item_size = sizeof(ros_message->y_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name size
  {
    size_t item_size = sizeof(ros_message->size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BlobData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robdep_interfaces__msg__BlobData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robdep_interfaces
size_t max_serialized_size_robdep_interfaces__msg__BlobData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: color
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: x_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BlobData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_robdep_interfaces__msg__BlobData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BlobData = {
  "robdep_interfaces::msg",
  "BlobData",
  _BlobData__cdr_serialize,
  _BlobData__cdr_deserialize,
  _BlobData__get_serialized_size,
  _BlobData__max_serialized_size
};

static rosidl_message_type_support_t _BlobData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BlobData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robdep_interfaces, msg, BlobData)() {
  return &_BlobData__type_support;
}

#if defined(__cplusplus)
}
#endif
