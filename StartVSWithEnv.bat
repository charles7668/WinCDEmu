for %%i in ("..\BazisLib") do (
    set BZSLIB_PATH=%%~fi
)

echo BZSLIB_PATH=%BZSLIB_PATH%

for %%i in ("..\wtl81_12085") do (
    set WTL_PATH=%%~fi
)

echo WTL_PATH=%BZSLIB_PATH%

set WDK7PATH=C:\WinDDK\7600.16385.1
WinCDEmu.sln
