// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice
#include "robdep_interfaces/msg/detail/blob_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
robdep_interfaces__msg__BlobData__init(robdep_interfaces__msg__BlobData * msg)
{
  if (!msg) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    robdep_interfaces__msg__BlobData__fini(msg);
    return false;
  }
  // x_point
  // y_point
  // size
  return true;
}

void
robdep_interfaces__msg__BlobData__fini(robdep_interfaces__msg__BlobData * msg)
{
  if (!msg) {
    return;
  }
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // x_point
  // y_point
  // size
}

bool
robdep_interfaces__msg__BlobData__are_equal(const robdep_interfaces__msg__BlobData * lhs, const robdep_interfaces__msg__BlobData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // x_point
  if (lhs->x_point != rhs->x_point) {
    return false;
  }
  // y_point
  if (lhs->y_point != rhs->y_point) {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  return true;
}

bool
robdep_interfaces__msg__BlobData__copy(
  const robdep_interfaces__msg__BlobData * input,
  robdep_interfaces__msg__BlobData * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // x_point
  output->x_point = input->x_point;
  // y_point
  output->y_point = input->y_point;
  // size
  output->size = input->size;
  return true;
}

robdep_interfaces__msg__BlobData *
robdep_interfaces__msg__BlobData__create()
{
  robdep_interfaces__msg__BlobData * msg = (robdep_interfaces__msg__BlobData *)malloc(sizeof(robdep_interfaces__msg__BlobData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robdep_interfaces__msg__BlobData));
  bool success = robdep_interfaces__msg__BlobData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robdep_interfaces__msg__BlobData__destroy(robdep_interfaces__msg__BlobData * msg)
{
  if (msg) {
    robdep_interfaces__msg__BlobData__fini(msg);
  }
  free(msg);
}


bool
robdep_interfaces__msg__BlobData__Sequence__init(robdep_interfaces__msg__BlobData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robdep_interfaces__msg__BlobData * data = NULL;
  if (size) {
    data = (robdep_interfaces__msg__BlobData *)calloc(size, sizeof(robdep_interfaces__msg__BlobData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robdep_interfaces__msg__BlobData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robdep_interfaces__msg__BlobData__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robdep_interfaces__msg__BlobData__Sequence__fini(robdep_interfaces__msg__BlobData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robdep_interfaces__msg__BlobData__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robdep_interfaces__msg__BlobData__Sequence *
robdep_interfaces__msg__BlobData__Sequence__create(size_t size)
{
  robdep_interfaces__msg__BlobData__Sequence * array = (robdep_interfaces__msg__BlobData__Sequence *)malloc(sizeof(robdep_interfaces__msg__BlobData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robdep_interfaces__msg__BlobData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robdep_interfaces__msg__BlobData__Sequence__destroy(robdep_interfaces__msg__BlobData__Sequence * array)
{
  if (array) {
    robdep_interfaces__msg__BlobData__Sequence__fini(array);
  }
  free(array);
}

bool
robdep_interfaces__msg__BlobData__Sequence__are_equal(const robdep_interfaces__msg__BlobData__Sequence * lhs, const robdep_interfaces__msg__BlobData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robdep_interfaces__msg__BlobData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robdep_interfaces__msg__BlobData__Sequence__copy(
  const robdep_interfaces__msg__BlobData__Sequence * input,
  robdep_interfaces__msg__BlobData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robdep_interfaces__msg__BlobData);
    robdep_interfaces__msg__BlobData * data =
      (robdep_interfaces__msg__BlobData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robdep_interfaces__msg__BlobData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robdep_interfaces__msg__BlobData__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robdep_interfaces__msg__BlobData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
