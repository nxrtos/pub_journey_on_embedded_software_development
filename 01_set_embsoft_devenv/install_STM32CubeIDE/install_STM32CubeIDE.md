# Install STM32CubeIDE



### Description

 STM32CubeIDE is an all-in-one multi-OS development tool, which is part of the STM32Cube software ecosystem. 

 STM32CubeIDE is an advanced C/C++ development platform with peripheral  configuration, code generation, code compilation, and debug features for STM32 microcontrollers and microprocessors. It is based on the Eclipse®/CDT™ framework and GCC toolchain for the development, and GDB for the  debugging. It allows the integration of the hundreds of existing plugins that complete the features of the Eclipse® IDE.
  STM32CubeIDE integrates STM32 configuration and project creation  functionalities from STM32CubeMX to offer all-in-one tool experience and save installation and development time. After the selection of an empty STM32 MCU or MPU, or preconfigured microcontroller or microprocessor  from the selection of a board or the selection of an example, the  project is created and initialization code generated. At any time during the development, the user can return to the initialization and  configuration of the peripherals or middleware and regenerate the  initialization code with no impact on the user code.
 STM32CubeIDE  includes build and stack analyzers that provide the user with useful  information about project status and memory requirements.
  STM32CubeIDE also includes standard and advanced debugging features  including views of CPU core registers, memories, and peripheral  registers, as well as live variable watch, Serial Wire Viewer interface, or fault analyzer. 

## Get Software Packages 



|      | Part Number      | General Description                  | Latest version | Download                                                     | All versions |
| ---- | ---------------- | ------------------------------------ | -------------- | ------------------------------------------------------------ | ------------ |
|      | STM32CubeIDE-DEB | STM32CubeIDE Debian Linux Installer  |                | https://www.st.com/content/ccc/resource/technical/software/sw_development_suite/group0/49/6d/3d/62/eb/0d/42/4b/stm32cubeide_deb/files/st-stm32cubeide_1.8.0_11526_20211125_0815_amd64.deb_bundle.sh.zip/jcr:content/translations/en.st-stm32cubeide_1.8.0_11526_20211125_0815_amd64.deb_bundle.sh.zip |              |
|      | STM32CubeIDE-Lnx | STM32CubeIDE Generic Linux Installer |                | https://www.st.com/content/ccc/resource/technical/software/sw_development_suite/group0/dc/49/8b/46/40/16/4e/20/stm32cubeide_lnx/files/st-stm32cubeide_1.8.0_11526_20211125_0815_amd64.sh.zip/jcr:content/translations/en.st-stm32cubeide_1.8.0_11526_20211125_0815_amd64.sh.zip |              |
|      | STM32CubeIDE-Mac | STM32CubeIDE macOS Installer         |                | https://www.st.com/content/ccc/resource/technical/software/sw_development_suite/group0/da/fb/13/97/c5/54/4b/57/stm32cubeide_mac/files/st-stm32cubeide_1.8.0_11526_20211125_0815_x86_64.dmg.zip/jcr:content/translations/en.st-stm32cubeide_1.8.0_11526_20211125_0815_x86_64.dmg.zip |              |
|      | STM32CubeIDE-RPM | STM32CubeIDE RPM Linux Installer     |                | https://www.st.com/content/ccc/resource/technical/software/sw_development_suite/group0/1b/d6/ed/d0/70/b1/47/1b/stm32cubeide_rpm/files/st-stm32cubeide_1.8.0_11526_20211125_0815_amd64.rpm_bundle.sh.zip/jcr:content/translations/en.st-stm32cubeide_1.8.0_11526_20211125_0815_amd64.rpm_bundle.sh.zip |              |
|      | STM32CubeIDE-Win | STM32CubeIDE Windows Installer       |                | https://www.st.com/content/ccc/resource/technical/software/sw_development_suite/group0/c5/4c/16/67/3f/90/45/ae/stm32cubeide_win/files/st-stm32cubeide_1.8.0_11526_20211126_0815_x86_64.exe.zip/jcr:content/translations/en.st-stm32cubeide_1.8.0_11526_20211126_0815_x86_64.exe.zip |              |



## STM32CubeIDE installation (Linux ® )

The installation is done through a product installer. Linux ® root privileges are required to complete the
installation.
The installer comes in different bundles to suit the various Linux ® distributions. The bundles are named according to:
		st-stm32cubeide_VERSION_ARCHITECTURE.PACKAGE
where:
•	VERSION is the actual product version and build date
	Example: 1.0.0_2026_20190221_1309
•	ARCHITECTURE is the architecture of the target host computer to run STM32CubeIDE
	Example: amd64
•	PACKAGE is the Linux ® package type to be installed. The supported packages are:
	– rpm_bundle.sh for Fedora ® /CentOS
	– deb_bundle.sh for Ubuntu ®
	– .sh for generic Linux ®
Proceed as follows:
1.	Navigate to the location of the installer file with a command console on the host computer.
2.	Enter the following command in the console window:
sudo sh ./st-stm32cubeide_VERSION_ARCHITECHURE.PACKAGE
where VERSION, ARCHITECTURE and PACKAGE must be entered after the selected Linux ® package.
3.	Follow the further instructions provided through the console window.

### Manual installation (.rpm/.deb)

For RPM-based distributions (Red Hat ® , CentOS ™ , SUSE ® , Fedora ® ):

```
sudo rpm -Uhv segger-jlink-udev-rules-xxxx-linux-noarch.rpm st-stlink-
udev-rules-xxxx-linux-noarch.rpm st-stlink-server-xxxx-linux-amd64.rpm st-
stm32cubeide_xxxx_amd64.rpm
```

For Debian-based distributions (Debian ® , Ubuntu ® ):

```
sudo apt-get install ./segger-jlink-udev-rules-xxxx-linux-all.deb ./st-stlink-udev-rules-xxxx-linux-all.deb ./st-stlink-server-xxxx-linux-amd64.deb ./st-tm32cubeide_xxxx_amd64.deb
```



### STM32CubeIDE installation guide

The complete version of _STM32CubeIDE installation guide_ can be found in link below

[STM32CubeIDE installation guide]: https://www.st.com/content/ccc/resource/technical/document/user_manual/group1/31/8b/03/27/25/c5/4d/ae/DM00603964/files/DM00603964.pdf/jcr:content/translations/en.DM00603964.pdf	"STM32CubeIDE installation guide"

