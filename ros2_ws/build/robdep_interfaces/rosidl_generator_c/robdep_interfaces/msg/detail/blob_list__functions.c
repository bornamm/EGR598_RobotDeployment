// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robdep_interfaces:msg/BlobList.idl
// generated code does not contain a copyright notice
#include "robdep_interfaces/msg/detail/blob_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "robdep_interfaces/msg/detail/blob_data__functions.h"

bool
robdep_interfaces__msg__BlobList__init(robdep_interfaces__msg__BlobList * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!robdep_interfaces__msg__BlobData__Sequence__init(&msg->data, 0)) {
    robdep_interfaces__msg__BlobList__fini(msg);
    return false;
  }
  return true;
}

void
robdep_interfaces__msg__BlobList__fini(robdep_interfaces__msg__BlobList * msg)
{
  if (!msg) {
    return;
  }
  // data
  robdep_interfaces__msg__BlobData__Sequence__fini(&msg->data);
}

bool
robdep_interfaces__msg__BlobList__are_equal(const robdep_interfaces__msg__BlobList * lhs, const robdep_interfaces__msg__BlobList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!robdep_interfaces__msg__BlobData__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
robdep_interfaces__msg__BlobList__copy(
  const robdep_interfaces__msg__BlobList * input,
  robdep_interfaces__msg__BlobList * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!robdep_interfaces__msg__BlobData__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

robdep_interfaces__msg__BlobList *
robdep_interfaces__msg__BlobList__create()
{
  robdep_interfaces__msg__BlobList * msg = (robdep_interfaces__msg__BlobList *)malloc(sizeof(robdep_interfaces__msg__BlobList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robdep_interfaces__msg__BlobList));
  bool success = robdep_interfaces__msg__BlobList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robdep_interfaces__msg__BlobList__destroy(robdep_interfaces__msg__BlobList * msg)
{
  if (msg) {
    robdep_interfaces__msg__BlobList__fini(msg);
  }
  free(msg);
}


bool
robdep_interfaces__msg__BlobList__Sequence__init(robdep_interfaces__msg__BlobList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robdep_interfaces__msg__BlobList * data = NULL;
  if (size) {
    data = (robdep_interfaces__msg__BlobList *)calloc(size, sizeof(robdep_interfaces__msg__BlobList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robdep_interfaces__msg__BlobList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robdep_interfaces__msg__BlobList__fini(&data[i - 1]);
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
robdep_interfaces__msg__BlobList__Sequence__fini(robdep_interfaces__msg__BlobList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robdep_interfaces__msg__BlobList__fini(&array->data[i]);
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

robdep_interfaces__msg__BlobList__Sequence *
robdep_interfaces__msg__BlobList__Sequence__create(size_t size)
{
  robdep_interfaces__msg__BlobList__Sequence * array = (robdep_interfaces__msg__BlobList__Sequence *)malloc(sizeof(robdep_interfaces__msg__BlobList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robdep_interfaces__msg__BlobList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robdep_interfaces__msg__BlobList__Sequence__destroy(robdep_interfaces__msg__BlobList__Sequence * array)
{
  if (array) {
    robdep_interfaces__msg__BlobList__Sequence__fini(array);
  }
  free(array);
}

bool
robdep_interfaces__msg__BlobList__Sequence__are_equal(const robdep_interfaces__msg__BlobList__Sequence * lhs, const robdep_interfaces__msg__BlobList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robdep_interfaces__msg__BlobList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robdep_interfaces__msg__BlobList__Sequence__copy(
  const robdep_interfaces__msg__BlobList__Sequence * input,
  robdep_interfaces__msg__BlobList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robdep_interfaces__msg__BlobList);
    robdep_interfaces__msg__BlobList * data =
      (robdep_interfaces__msg__BlobList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robdep_interfaces__msg__BlobList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          robdep_interfaces__msg__BlobList__fini(&data[i]);
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
    if (!robdep_interfaces__msg__BlobList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
