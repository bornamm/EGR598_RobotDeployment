// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robdep_interfaces:msg/BlobData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robdep_interfaces/msg/detail/blob_data__struct.h"
#include "robdep_interfaces/msg/detail/blob_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robdep_interfaces__msg__blob_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robdep_interfaces.msg._blob_data.BlobData", full_classname_dest, 41) == 0);
  }
  robdep_interfaces__msg__BlobData * ros_message = _ros_message;
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->color, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // x_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_point");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_point = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_point");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_point = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // size
    PyObject * field = PyObject_GetAttrString(_pymsg, "size");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->size = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robdep_interfaces__msg__blob_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BlobData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robdep_interfaces.msg._blob_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BlobData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robdep_interfaces__msg__BlobData * ros_message = (robdep_interfaces__msg__BlobData *)raw_ros_message;
  {  // color
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->color.data,
      strlen(ros_message->color.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_point
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_point
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // size
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
