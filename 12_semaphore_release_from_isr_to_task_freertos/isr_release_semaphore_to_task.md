# Input detection in an ISR, then release semaphore to signal Task, an example of  FreeRTOS

>In this demo implement a button detection in an external line ISR, and then through RTOS API release a semaphore , to work with Task program waiting for the semaphore . 
>
>Move non-critical program execution into lower priority context is a key to make a real-time system , as that makes processor/CPU to be available to higher priority of coming event .
