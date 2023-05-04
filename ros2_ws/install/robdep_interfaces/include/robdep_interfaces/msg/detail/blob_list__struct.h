// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robdep_interfaces:msg/BlobList.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__STRUCT_H_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "robdep_interfaces/msg/detail/blob_data__struct.h"

// Struct defined in msg/BlobList in the package robdep_interfaces.
typedef struct robdep_interfaces__msg__BlobList
{
  robdep_interfaces__msg__BlobData__Sequence data;
} robdep_interfaces__msg__BlobList;

// Struct for a sequence of robdep_interfaces__msg__BlobList.
typedef struct robdep_interfaces__msg__BlobList__Sequence
{
  robdep_interfaces__msg__BlobList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robdep_interfaces__msg__BlobList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__STRUCT_H_
