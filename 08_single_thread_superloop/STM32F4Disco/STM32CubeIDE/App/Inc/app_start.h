/**
  ******************************************************************************
  * @file    app_start.h
  * @brief   This file contains head of app start
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */

#ifndef __APP_START_H
#define __APP_START_H

#include  "bsp_ll.h"
#include  "systick_timer.h"
#include  "button_interrupt.h"

extern SYSTick_Timer_t  timer_1 , timer_2;
extern int app_start(void);

#endif /* __APP_START_H */
