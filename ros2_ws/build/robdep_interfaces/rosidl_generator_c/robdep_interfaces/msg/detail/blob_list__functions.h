// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robdep_interfaces:msg/BlobList.idl
// generated code does not contain a copyright notice

#ifndef ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__FUNCTIONS_H_
#define ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robdep_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robdep_interfaces/msg/detail/blob_list__struct.h"

/// Initialize msg/BlobList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robdep_interfaces__msg__BlobList
 * )) before or use
 * robdep_interfaces__msg__BlobList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
bool
robdep_interfaces__msg__BlobList__init(robdep_interfaces__msg__BlobList * msg);

/// Finalize msg/BlobList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
void
robdep_interfaces__msg__BlobList__fini(robdep_interfaces__msg__BlobList * msg);

/// Create msg/BlobList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robdep_interfaces__msg__BlobList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
robdep_interfaces__msg__BlobList *
robdep_interfaces__msg__BlobList__create();

/// Destroy msg/BlobList message.
/**
 * It calls
 * robdep_interfaces__msg__BlobList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
void
robdep_interfaces__msg__BlobList__destroy(robdep_interfaces__msg__BlobList * msg);

/// Check for msg/BlobList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
bool
robdep_interfaces__msg__BlobList__are_equal(const robdep_interfaces__msg__BlobList * lhs, const robdep_interfaces__msg__BlobList * rhs);

/// Copy a msg/BlobList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
bool
robdep_interfaces__msg__BlobList__copy(
  const robdep_interfaces__msg__BlobList * input,
  robdep_interfaces__msg__BlobList * output);

/// Initialize array of msg/BlobList messages.
/**
 * It allocates the memory for the number of elements and calls
 * robdep_interfaces__msg__BlobList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
bool
robdep_interfaces__msg__BlobList__Sequence__init(robdep_interfaces__msg__BlobList__Sequence * array, size_t size);

/// Finalize array of msg/BlobList messages.
/**
 * It calls
 * robdep_interfaces__msg__BlobList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
void
robdep_interfaces__msg__BlobList__Sequence__fini(robdep_interfaces__msg__BlobList__Sequence * array);

/// Create array of msg/BlobList messages.
/**
 * It allocates the memory for the array and calls
 * robdep_interfaces__msg__BlobList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
robdep_interfaces__msg__BlobList__Sequence *
robdep_interfaces__msg__BlobList__Sequence__create(size_t size);

/// Destroy array of msg/BlobList messages.
/**
 * It calls
 * robdep_interfaces__msg__BlobList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
void
robdep_interfaces__msg__BlobList__Sequence__destroy(robdep_interfaces__msg__BlobList__Sequence * array);

/// Check for msg/BlobList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
bool
robdep_interfaces__msg__BlobList__Sequence__are_equal(const robdep_interfaces__msg__BlobList__Sequence * lhs, const robdep_interfaces__msg__BlobList__Sequence * rhs);

/// Copy an array of msg/BlobList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robdep_interfaces
bool
robdep_interfaces__msg__BlobList__Sequence__copy(
  const robdep_interfaces__msg__BlobList__Sequence * input,
  robdep_interfaces__msg__BlobList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBDEP_INTERFACES__MSG__DETAIL__BLOB_LIST__FUNCTIONS_H_
