/**
  ******************************************************************************
  * @file           : led_toggle_task.h
  * @brief          : thread body
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */

#ifndef __LED_TOGGLE_TASK_H
#define __LED_TOGGLE_TASK_H

/* Includes ------------------------------------------------------------------*/
#include  "cmsis_os2.h"
#include  "bsp_ll.h"
#include  "bsp_slog.h"

extern  volatile unsigned  int  led_pattern_n;
extern  const osThreadAttr_t led_toggle_task_attributes;

extern  void led_toggle_task(void *argument);
#endif  //__LED_TOGGLE_TASK_H
