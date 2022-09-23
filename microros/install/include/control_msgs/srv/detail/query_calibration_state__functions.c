// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:srv/QueryCalibrationState.idl
// generated code does not contain a copyright notice
#include "control_msgs/srv/detail/query_calibration_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
control_msgs__srv__QueryCalibrationState_Request__init(control_msgs__srv__QueryCalibrationState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
control_msgs__srv__QueryCalibrationState_Request__fini(control_msgs__srv__QueryCalibrationState_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

control_msgs__srv__QueryCalibrationState_Request *
control_msgs__srv__QueryCalibrationState_Request__create()
{
  control_msgs__srv__QueryCalibrationState_Request * msg = (control_msgs__srv__QueryCalibrationState_Request *)malloc(sizeof(control_msgs__srv__QueryCalibrationState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryCalibrationState_Request));
  bool success = control_msgs__srv__QueryCalibrationState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryCalibrationState_Request__destroy(control_msgs__srv__QueryCalibrationState_Request * msg)
{
  if (msg) {
    control_msgs__srv__QueryCalibrationState_Request__fini(msg);
  }
  free(msg);
}


bool
control_msgs__srv__QueryCalibrationState_Request__Sequence__init(control_msgs__srv__QueryCalibrationState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__srv__QueryCalibrationState_Request * data = NULL;
  if (size) {
    data = (control_msgs__srv__QueryCalibrationState_Request *)calloc(size, sizeof(control_msgs__srv__QueryCalibrationState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryCalibrationState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryCalibrationState_Request__fini(&data[i - 1]);
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
control_msgs__srv__QueryCalibrationState_Request__Sequence__fini(control_msgs__srv__QueryCalibrationState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__srv__QueryCalibrationState_Request__fini(&array->data[i]);
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

control_msgs__srv__QueryCalibrationState_Request__Sequence *
control_msgs__srv__QueryCalibrationState_Request__Sequence__create(size_t size)
{
  control_msgs__srv__QueryCalibrationState_Request__Sequence * array = (control_msgs__srv__QueryCalibrationState_Request__Sequence *)malloc(sizeof(control_msgs__srv__QueryCalibrationState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryCalibrationState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryCalibrationState_Request__Sequence__destroy(control_msgs__srv__QueryCalibrationState_Request__Sequence * array)
{
  if (array) {
    control_msgs__srv__QueryCalibrationState_Request__Sequence__fini(array);
  }
  free(array);
}


bool
control_msgs__srv__QueryCalibrationState_Response__init(control_msgs__srv__QueryCalibrationState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_calibrated
  return true;
}

void
control_msgs__srv__QueryCalibrationState_Response__fini(control_msgs__srv__QueryCalibrationState_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_calibrated
}

control_msgs__srv__QueryCalibrationState_Response *
control_msgs__srv__QueryCalibrationState_Response__create()
{
  control_msgs__srv__QueryCalibrationState_Response * msg = (control_msgs__srv__QueryCalibrationState_Response *)malloc(sizeof(control_msgs__srv__QueryCalibrationState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryCalibrationState_Response));
  bool success = control_msgs__srv__QueryCalibrationState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryCalibrationState_Response__destroy(control_msgs__srv__QueryCalibrationState_Response * msg)
{
  if (msg) {
    control_msgs__srv__QueryCalibrationState_Response__fini(msg);
  }
  free(msg);
}


bool
control_msgs__srv__QueryCalibrationState_Response__Sequence__init(control_msgs__srv__QueryCalibrationState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__srv__QueryCalibrationState_Response * data = NULL;
  if (size) {
    data = (control_msgs__srv__QueryCalibrationState_Response *)calloc(size, sizeof(control_msgs__srv__QueryCalibrationState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryCalibrationState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryCalibrationState_Response__fini(&data[i - 1]);
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
control_msgs__srv__QueryCalibrationState_Response__Sequence__fini(control_msgs__srv__QueryCalibrationState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__srv__QueryCalibrationState_Response__fini(&array->data[i]);
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

control_msgs__srv__QueryCalibrationState_Response__Sequence *
control_msgs__srv__QueryCalibrationState_Response__Sequence__create(size_t size)
{
  control_msgs__srv__QueryCalibrationState_Response__Sequence * array = (control_msgs__srv__QueryCalibrationState_Response__Sequence *)malloc(sizeof(control_msgs__srv__QueryCalibrationState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryCalibrationState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryCalibrationState_Response__Sequence__destroy(control_msgs__srv__QueryCalibrationState_Response__Sequence * array)
{
  if (array) {
    control_msgs__srv__QueryCalibrationState_Response__Sequence__fini(array);
  }
  free(array);
}
