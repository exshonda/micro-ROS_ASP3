// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from control_msgs:srv/QueryTrajectoryState.idl
// generated code does not contain a copyright notice
#include "control_msgs/srv/detail/query_trajectory_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
control_msgs__srv__QueryTrajectoryState_Request__init(control_msgs__srv__QueryTrajectoryState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    control_msgs__srv__QueryTrajectoryState_Request__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__srv__QueryTrajectoryState_Request__fini(control_msgs__srv__QueryTrajectoryState_Request * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
}

control_msgs__srv__QueryTrajectoryState_Request *
control_msgs__srv__QueryTrajectoryState_Request__create()
{
  control_msgs__srv__QueryTrajectoryState_Request * msg = (control_msgs__srv__QueryTrajectoryState_Request *)malloc(sizeof(control_msgs__srv__QueryTrajectoryState_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryTrajectoryState_Request));
  bool success = control_msgs__srv__QueryTrajectoryState_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryTrajectoryState_Request__destroy(control_msgs__srv__QueryTrajectoryState_Request * msg)
{
  if (msg) {
    control_msgs__srv__QueryTrajectoryState_Request__fini(msg);
  }
  free(msg);
}


bool
control_msgs__srv__QueryTrajectoryState_Request__Sequence__init(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__srv__QueryTrajectoryState_Request * data = NULL;
  if (size) {
    data = (control_msgs__srv__QueryTrajectoryState_Request *)calloc(size, sizeof(control_msgs__srv__QueryTrajectoryState_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryTrajectoryState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryTrajectoryState_Request__fini(&data[i - 1]);
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
control_msgs__srv__QueryTrajectoryState_Request__Sequence__fini(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__srv__QueryTrajectoryState_Request__fini(&array->data[i]);
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

control_msgs__srv__QueryTrajectoryState_Request__Sequence *
control_msgs__srv__QueryTrajectoryState_Request__Sequence__create(size_t size)
{
  control_msgs__srv__QueryTrajectoryState_Request__Sequence * array = (control_msgs__srv__QueryTrajectoryState_Request__Sequence *)malloc(sizeof(control_msgs__srv__QueryTrajectoryState_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryTrajectoryState_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryTrajectoryState_Request__Sequence__destroy(control_msgs__srv__QueryTrajectoryState_Request__Sequence * array)
{
  if (array) {
    control_msgs__srv__QueryTrajectoryState_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `message`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `velocity`
// Member `acceleration`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
control_msgs__srv__QueryTrajectoryState_Response__init(control_msgs__srv__QueryTrajectoryState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->name, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // velocity
  if (!rosidl_runtime_c__double__Sequence__init(&msg->velocity, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  // acceleration
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration, 0)) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
    return false;
  }
  return true;
}

void
control_msgs__srv__QueryTrajectoryState_Response__fini(control_msgs__srv__QueryTrajectoryState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // name
  rosidl_runtime_c__String__Sequence__fini(&msg->name);
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
  // velocity
  rosidl_runtime_c__double__Sequence__fini(&msg->velocity);
  // acceleration
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration);
}

control_msgs__srv__QueryTrajectoryState_Response *
control_msgs__srv__QueryTrajectoryState_Response__create()
{
  control_msgs__srv__QueryTrajectoryState_Response * msg = (control_msgs__srv__QueryTrajectoryState_Response *)malloc(sizeof(control_msgs__srv__QueryTrajectoryState_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(control_msgs__srv__QueryTrajectoryState_Response));
  bool success = control_msgs__srv__QueryTrajectoryState_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
control_msgs__srv__QueryTrajectoryState_Response__destroy(control_msgs__srv__QueryTrajectoryState_Response * msg)
{
  if (msg) {
    control_msgs__srv__QueryTrajectoryState_Response__fini(msg);
  }
  free(msg);
}


bool
control_msgs__srv__QueryTrajectoryState_Response__Sequence__init(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  control_msgs__srv__QueryTrajectoryState_Response * data = NULL;
  if (size) {
    data = (control_msgs__srv__QueryTrajectoryState_Response *)calloc(size, sizeof(control_msgs__srv__QueryTrajectoryState_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = control_msgs__srv__QueryTrajectoryState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        control_msgs__srv__QueryTrajectoryState_Response__fini(&data[i - 1]);
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
control_msgs__srv__QueryTrajectoryState_Response__Sequence__fini(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      control_msgs__srv__QueryTrajectoryState_Response__fini(&array->data[i]);
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

control_msgs__srv__QueryTrajectoryState_Response__Sequence *
control_msgs__srv__QueryTrajectoryState_Response__Sequence__create(size_t size)
{
  control_msgs__srv__QueryTrajectoryState_Response__Sequence * array = (control_msgs__srv__QueryTrajectoryState_Response__Sequence *)malloc(sizeof(control_msgs__srv__QueryTrajectoryState_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = control_msgs__srv__QueryTrajectoryState_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
control_msgs__srv__QueryTrajectoryState_Response__Sequence__destroy(control_msgs__srv__QueryTrajectoryState_Response__Sequence * array)
{
  if (array) {
    control_msgs__srv__QueryTrajectoryState_Response__Sequence__fini(array);
  }
  free(array);
}
