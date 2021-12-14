# Input detection in an ISR, work with FreeRTOS

>In this demo implement a button detection in an EXIT ISR, and then through volatile variable , to work the rest of reaction in Thread context . This is a method similar to bare-metal . For more RTOS style , it may release a semaphore as a way to pass event trigger from an ISR to a Task (aka Thread) context.
>
>Move non-critical program execution into lower priority context is a key to make a real-time system , as that makes processor/CPU to be available to higher priority of coming event .
