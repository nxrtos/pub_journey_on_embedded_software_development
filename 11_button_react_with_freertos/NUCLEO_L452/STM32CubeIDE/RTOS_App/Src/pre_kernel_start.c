/**
  ******************************************************************************
  * @file           : pre_kernel_start.c
  * @brief          : rtos init procedure before kernel start
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include  "cmsis_os2.h"
#include  "bsp_ll.h"
#include  "bsp_slog.h"

#include  "pre_kernel_start.h"
/**
  * @brief  The application entry point.
  * @retval void
  */
int pre_kernel_procedure(void)
{
  osThreadNew(led_toggle_task, NULL, &led_toggle_task_attributes);
  return 0;
}
