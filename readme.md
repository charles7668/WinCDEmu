# WinCDEmu Build Instructions

- Checkout WinCDEmu (https://github.com/charles7668/WinCDEmu), BazisLib (https://github.com/charles7668/BazisLib) and STLPort-kernel (https://github.com/charles7668/stlport-kernel) to a common directory.
- Install WDK 7.x to C:\WinDDK\7600.16385.1
- Download/unpack [WTL81_12085](https://sourceforge.net/projects/wtl/files/WTL%208.1/WTL%208.1.12085/wtl81_12085.zip/download) to common directory
- Execute `RunVSWithEnvironemnt.bat`
- Build the kernel-mode release configurations and then the user-mode release configurations
- The binaries will be saved to AllModules
