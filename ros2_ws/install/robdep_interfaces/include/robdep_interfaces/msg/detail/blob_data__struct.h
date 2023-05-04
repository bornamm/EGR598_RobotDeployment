// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__STRUCT_H_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/BlobData in the package robdep_interfaces.
typedef struct robdep_interfaces__msg__BlobData
{
  rosidl_runtime_c__String color;
  double x_point;
  double y_point;
  double size;
} robdep_interfaces__msg__BlobData;

// Struct for a sequence of robdep_interfaces__msg__BlobData.
typedef struct robdep_interfaces__msg__BlobData__Sequence
{
  robdep_interfaces__msg__BlobData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robdep_interfaces__msg__BlobData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_DATA__STRUCT_H_
