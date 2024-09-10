# WinCDEmu

## Index

- [WinCDEmu](#wincdemu)
  - [Index](#index)
  - [WinCDEmu Build Instructions](#wincdemu-build-instructions)
  - [How To Install Kernel Driver Without Certification](#how-to-install-kernel-driver-without-certification)
  - [Register `WinCDEmuContextMenu.dll`](#register-wincdemucontextmenudll)

## WinCDEmu Build Instructions

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

## How To Install Kernel Driver Without Certification

1. **Copy the Driver File**:

   - Copy the driver file to the test computer.

2. **Enable Test Signing Mode**:

   - Open Command Prompt as an administrator and run the following command to enable test signing mode:

   ```cmd
   bcdedit /set testsigning on
   ```

3. **Reboot the Computer**:

   - Reboot the computer to apply the changes.

4. **Install the Driver Using pnputil**:

   - After the reboot, use the following command to install the driver:

   ```cmd
   pnputil /add-driver {your-driver-path} /install
   ```

   Replace `{your-driver-path}` with the full path to your driver file.

5. **Add Legacy Device in Device Manager**:
   - Open **Device Manager**.
   - Select **Action > Add legacy hardware**.
   - In the wizard, choose **Install the hardware that I manually select from a list**.
   - Find **Storage controllers** and select the target driver to complete the installation.

## Register `WinCDEmuContextMenu.dll`

1. Using `regsvr32 {path-to-your-WinCDEmuContgextMenu.dll}`
