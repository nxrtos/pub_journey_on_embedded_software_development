/**
  ******************************************************************************
  * @file           : button_man_task.h
  * @brief          : thread body
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */

#ifndef __BUTTON_MAN_TASK_H
#define __BUTTON_MAN_TASK_H

#include  "cmsis_os2.h"
#include  "bsp_ll.h"
#include  "bsp_slog.h"

extern const osThreadAttr_t button_man_task_attributes ;

extern osSemaphoreId_t sema_button;
extern void but_man_task(void *argument);

#endif  // __BUTTON_MAN_TASK_H
