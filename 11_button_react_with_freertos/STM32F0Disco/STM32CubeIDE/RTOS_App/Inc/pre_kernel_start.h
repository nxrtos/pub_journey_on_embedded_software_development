/**
  ******************************************************************************
  * @file           : pre_kernel_start.h
  * @brief          : rtos init procedure before kernel start
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */

#ifndef __PRE_KERNEL_START_H
#define __PRE_KERNEL_START_H


/* Includes ------------------------------------------------------------------*/
#include  "cmsis_os2.h"
#include  "bsp_ll.h"
#include  "bsp_slog.h"
#include  "led_toggle_task.h"

extern  int pre_kernel_procedure(void);

#endif	// __PRE_KERNEL_START_H
