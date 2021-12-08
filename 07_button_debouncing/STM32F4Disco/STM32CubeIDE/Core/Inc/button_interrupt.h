/**
  ******************************************************************************
  * @file    button_interrupt.h
  * @brief   This file contains head of button_interrupt
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */

#ifndef __BUTTON_INTERRUPT_H
#define __BUTTON_INTERRUPT_H

#include "stm32f4_discovery.h"
#include  "systick_timer.h"

extern
volatile uint32_t user_button_state , user_button_changed;
extern  SYSTick_Timer_t  button_debounce_timer;

#ifdef __cplusplus
 extern "C" {
#endif
extern void init_button_state(void);
extern void button_debouce_followup_process(void);
#ifdef __cplusplus
}
#endif

#endif /* __BUTTON_INTERRUPT_H */
