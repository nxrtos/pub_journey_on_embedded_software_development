# Setting up the software development environment for embedded system

Here we talk about the software development environment for embedded system .  

Most embedded systems are developed on a host system , commonly be a generic purpose of computer system , such as PC running Windows and/or Linux , Mac machine running MacOS , Unix workstation running a Unix variant , and at the end the generated program code will execute on the
“target” , aka the embedded system platform . The whole tool set often to be referred as cross-compiler tool-chain . 

The tool-chains are large different as they are highly related to the target hardware platform . As mentioned early , this tutorial focused on micro-controller based embedded system , for which the popular tool-chain to see a open-source compilers such as GCC (Gnu Compiler Collection) with other binary processing software packages and hardware debugging and downloading tools to work with certain hardware devices . Jtag dongle is one of commonly seen hardware device to download and/or debug firmware on embedded system , SWD is a popular interface to Arm debugger .  Some semiconductor vendors provide an IDE (Integrated Development Environments) by integrate many 3rd party tool packages , to support their own MCU productions .  Many of them are Eclipse plugins with cross-compile GCC and debugger utilities . 

Below will discuss STM32CubeIDE from [STMicroelectronics](https://www.st.com/content/st_com/en.html) .  STM32CubeIDE can be installed on Windows . Linux and MacOS , easily to work with many Discovery boards and Nucleo boards from STMicroelectronics . Many of Discovery boards and Nucleo boards are cost about $20 or less , make them perfect for beginner and hobby player .   

There are lot of other IDEs from different semiconductor vendors , such NXP , TI etc. And there are many of IDEs and tool-chains from independent commercial software company , like IAR . When time permit , more tool-chains will be introduced in details . 

For now  let go on 

[install STM32CubeIDE]: install_STM32CubeIDE/install_STM32CubeIDE.md

