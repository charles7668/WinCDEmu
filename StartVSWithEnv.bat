for %%i in ("..\BazisLib") do (
    set BZSLIB_PATH=%%~fi
)

echo BZSLIB_PATH=%BZSLIB_PATH%

for %%i in ("..\wtl81_12085") do (
    set WTL_PATH=%%~fi
)

echo WTL_PATH=%BZSLIB_PATH%

for %%i in ("..\stlport-kernel") do (
    set STL_PORT=%%~fi
)

echo STL_PORT=%STL_PORT%

set WDKPATH=C:\Program Files (x86)\Windows Kits\10\Include\10.0.26100.0\
set WDK_LIB_PATH=C:\Program Files (x86)\Windows Kits\10\Lib\10.0.26100.0\

WinCDEmu.sln
