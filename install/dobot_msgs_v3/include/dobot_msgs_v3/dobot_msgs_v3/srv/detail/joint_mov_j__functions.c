// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_msgs_v3:srv/JointMovJ.idl
// generated code does not contain a copyright notice
#include "dobot_msgs_v3/srv/detail/joint_mov_j__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `param_value`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot_msgs_v3__srv__JointMovJ_Request__init(dobot_msgs_v3__srv__JointMovJ_Request * msg)
{
  if (!msg) {
    return false;
  }
  // j1
  // j2
  // j3
  // j4
  // j5
  // j6
  // param_value
  if (!rosidl_runtime_c__String__Sequence__init(&msg->param_value, 0)) {
    dobot_msgs_v3__srv__JointMovJ_Request__fini(msg);
    return false;
  }
  return true;
}

void
dobot_msgs_v3__srv__JointMovJ_Request__fini(dobot_msgs_v3__srv__JointMovJ_Request * msg)
{
  if (!msg) {
    return;
  }
  // j1
  // j2
  // j3
  // j4
  // j5
  // j6
  // param_value
  rosidl_runtime_c__String__Sequence__fini(&msg->param_value);
}

bool
dobot_msgs_v3__srv__JointMovJ_Request__are_equal(const dobot_msgs_v3__srv__JointMovJ_Request * lhs, const dobot_msgs_v3__srv__JointMovJ_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // j1
  if (lhs->j1 != rhs->j1) {
    return false;
  }
  // j2
  if (lhs->j2 != rhs->j2) {
    return false;
  }
  // j3
  if (lhs->j3 != rhs->j3) {
    return false;
  }
  // j4
  if (lhs->j4 != rhs->j4) {
    return false;
  }
  // j5
  if (lhs->j5 != rhs->j5) {
    return false;
  }
  // j6
  if (lhs->j6 != rhs->j6) {
    return false;
  }
  // param_value
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->param_value), &(rhs->param_value)))
  {
    return false;
  }
  return true;
}

bool
dobot_msgs_v3__srv__JointMovJ_Request__copy(
  const dobot_msgs_v3__srv__JointMovJ_Request * input,
  dobot_msgs_v3__srv__JointMovJ_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // j1
  output->j1 = input->j1;
  // j2
  output->j2 = input->j2;
  // j3
  output->j3 = input->j3;
  // j4
  output->j4 = input->j4;
  // j5
  output->j5 = input->j5;
  // j6
  output->j6 = input->j6;
  // param_value
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->param_value), &(output->param_value)))
  {
    return false;
  }
  return true;
}

dobot_msgs_v3__srv__JointMovJ_Request *
dobot_msgs_v3__srv__JointMovJ_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__JointMovJ_Request * msg = (dobot_msgs_v3__srv__JointMovJ_Request *)allocator.allocate(sizeof(dobot_msgs_v3__srv__JointMovJ_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs_v3__srv__JointMovJ_Request));
  bool success = dobot_msgs_v3__srv__JointMovJ_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs_v3__srv__JointMovJ_Request__destroy(dobot_msgs_v3__srv__JointMovJ_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs_v3__srv__JointMovJ_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs_v3__srv__JointMovJ_Request__Sequence__init(dobot_msgs_v3__srv__JointMovJ_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__JointMovJ_Request * data = NULL;

  if (size) {
    data = (dobot_msgs_v3__srv__JointMovJ_Request *)allocator.zero_allocate(size, sizeof(dobot_msgs_v3__srv__JointMovJ_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs_v3__srv__JointMovJ_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs_v3__srv__JointMovJ_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_msgs_v3__srv__JointMovJ_Request__Sequence__fini(dobot_msgs_v3__srv__JointMovJ_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_msgs_v3__srv__JointMovJ_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_msgs_v3__srv__JointMovJ_Request__Sequence *
dobot_msgs_v3__srv__JointMovJ_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__JointMovJ_Request__Sequence * array = (dobot_msgs_v3__srv__JointMovJ_Request__Sequence *)allocator.allocate(sizeof(dobot_msgs_v3__srv__JointMovJ_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs_v3__srv__JointMovJ_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs_v3__srv__JointMovJ_Request__Sequence__destroy(dobot_msgs_v3__srv__JointMovJ_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs_v3__srv__JointMovJ_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs_v3__srv__JointMovJ_Request__Sequence__are_equal(const dobot_msgs_v3__srv__JointMovJ_Request__Sequence * lhs, const dobot_msgs_v3__srv__JointMovJ_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs_v3__srv__JointMovJ_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs_v3__srv__JointMovJ_Request__Sequence__copy(
  const dobot_msgs_v3__srv__JointMovJ_Request__Sequence * input,
  dobot_msgs_v3__srv__JointMovJ_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs_v3__srv__JointMovJ_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs_v3__srv__JointMovJ_Request * data =
      (dobot_msgs_v3__srv__JointMovJ_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs_v3__srv__JointMovJ_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs_v3__srv__JointMovJ_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs_v3__srv__JointMovJ_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dobot_msgs_v3__srv__JointMovJ_Response__init(dobot_msgs_v3__srv__JointMovJ_Response * msg)
{
  if (!msg) {
    return false;
  }
  // res
  return true;
}

void
dobot_msgs_v3__srv__JointMovJ_Response__fini(dobot_msgs_v3__srv__JointMovJ_Response * msg)
{
  if (!msg) {
    return;
  }
  // res
}

bool
dobot_msgs_v3__srv__JointMovJ_Response__are_equal(const dobot_msgs_v3__srv__JointMovJ_Response * lhs, const dobot_msgs_v3__srv__JointMovJ_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // res
  if (lhs->res != rhs->res) {
    return false;
  }
  return true;
}

bool
dobot_msgs_v3__srv__JointMovJ_Response__copy(
  const dobot_msgs_v3__srv__JointMovJ_Response * input,
  dobot_msgs_v3__srv__JointMovJ_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // res
  output->res = input->res;
  return true;
}

dobot_msgs_v3__srv__JointMovJ_Response *
dobot_msgs_v3__srv__JointMovJ_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__JointMovJ_Response * msg = (dobot_msgs_v3__srv__JointMovJ_Response *)allocator.allocate(sizeof(dobot_msgs_v3__srv__JointMovJ_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_msgs_v3__srv__JointMovJ_Response));
  bool success = dobot_msgs_v3__srv__JointMovJ_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_msgs_v3__srv__JointMovJ_Response__destroy(dobot_msgs_v3__srv__JointMovJ_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_msgs_v3__srv__JointMovJ_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_msgs_v3__srv__JointMovJ_Response__Sequence__init(dobot_msgs_v3__srv__JointMovJ_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__JointMovJ_Response * data = NULL;

  if (size) {
    data = (dobot_msgs_v3__srv__JointMovJ_Response *)allocator.zero_allocate(size, sizeof(dobot_msgs_v3__srv__JointMovJ_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_msgs_v3__srv__JointMovJ_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_msgs_v3__srv__JointMovJ_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_msgs_v3__srv__JointMovJ_Response__Sequence__fini(dobot_msgs_v3__srv__JointMovJ_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_msgs_v3__srv__JointMovJ_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_msgs_v3__srv__JointMovJ_Response__Sequence *
dobot_msgs_v3__srv__JointMovJ_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_msgs_v3__srv__JointMovJ_Response__Sequence * array = (dobot_msgs_v3__srv__JointMovJ_Response__Sequence *)allocator.allocate(sizeof(dobot_msgs_v3__srv__JointMovJ_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_msgs_v3__srv__JointMovJ_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_msgs_v3__srv__JointMovJ_Response__Sequence__destroy(dobot_msgs_v3__srv__JointMovJ_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_msgs_v3__srv__JointMovJ_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_msgs_v3__srv__JointMovJ_Response__Sequence__are_equal(const dobot_msgs_v3__srv__JointMovJ_Response__Sequence * lhs, const dobot_msgs_v3__srv__JointMovJ_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_msgs_v3__srv__JointMovJ_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_msgs_v3__srv__JointMovJ_Response__Sequence__copy(
  const dobot_msgs_v3__srv__JointMovJ_Response__Sequence * input,
  dobot_msgs_v3__srv__JointMovJ_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_msgs_v3__srv__JointMovJ_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_msgs_v3__srv__JointMovJ_Response * data =
      (dobot_msgs_v3__srv__JointMovJ_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_msgs_v3__srv__JointMovJ_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_msgs_v3__srv__JointMovJ_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_msgs_v3__srv__JointMovJ_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
