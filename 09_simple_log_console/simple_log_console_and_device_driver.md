# Simple Log Console , a glance to device deriver on Embedded System

>In this demo , simply use an UART transmit to push log information out .
>
>For STM32XX-Discovery board , most likely pick USART2 to be the log console , and need an USB-serial to connect to PA2 (the USART2_TX , most of the case) , and GND .
>
>On a Linux host , use screen on terminal 
>
>```shell
>$ screen  /dev/ttyUSB0  115200
>```
>
>For Nucleo board , USART2 usually has connected to on-board debugging circuitry and could directly  access by 
>
>```shell
>$ screen /dev/ttyACM0  115200
>```
>
>No extra USB-serial needed .
>
>Whenever possible , the UART has been configured to 115200 , NP , 1_STOP
>
>At this moment , the simple log send string over UART on blocking style , which will guarantee the data has been sent out when return from function call , but also could be time consuming , especially for lengthy data .  Leave optimization to future tutorial demo . For now , it only give the idea that how a device driver work on embedded software developing .
