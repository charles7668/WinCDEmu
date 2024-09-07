# WinCDEmu Build Instructions

1. Checkout the following repositories to a common directory:
   - [WinCDEmu](https://github.com/charles7668/WinCDEmu)
   - [BazisLib](https://github.com/charles7668/BazisLib)
   - [STLPort-kernel](https://github.com/charles7668/stlport-kernel)
2. Download and install [Visual Studio 2022 or newer](https://visualstudio.microsoft.com/).

3. Download and install [Windows Driver Kit (WDK) 10.0.26100](https://learn.microsoft.com/en-us/windows-hardware/drivers/download-the-wdk).

4. Download and unpack [WTL 8.1 (WTL81_12085)](https://sourceforge.net/projects/wtl/files/WTL%208.1/WTL%208.1.12085/wtl81_12085.zip/download) to the common directory.

5. Execute `RunVSWithEnvironment.bat` from the root of the project.

6. Build the **kernel-mode release configurations** and then the **user-mode release configurations**.

7. The binaries will be saved to the `AllModules` directory.
