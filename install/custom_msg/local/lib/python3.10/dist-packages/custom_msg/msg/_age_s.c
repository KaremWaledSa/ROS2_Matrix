// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msg:msg/Age.idl
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
#include "custom_msg/msg/detail/age__struct.h"
#include "custom_msg/msg/detail/age__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msg__msg__age__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[24];
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
    assert(strncmp("custom_msg.msg._age.Age", full_classname_dest, 23) == 0);
  }
  custom_msg__msg__Age * ros_message = _ros_message;
  {  // year
    PyObject * field = PyObject_GetAttrString(_pymsg, "year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->year = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // month
    PyObject * field = PyObject_GetAttrString(_pymsg, "month");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->month = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // day
    PyObject * field = PyObject_GetAttrString(_pymsg, "day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->day = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msg__msg__age__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Age */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msg.msg._age");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Age");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msg__msg__Age * ros_message = (custom_msg__msg__Age *)raw_ros_message;
  {  // year
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // month
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->month);
    {
      int rc = PyObject_SetAttrString(_pymessage, "month", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // day
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
