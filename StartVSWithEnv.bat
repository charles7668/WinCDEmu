for %%i in ("..\BazisLib") do (
    set BZSLIB_PATH=%%~fi
)

echo BZSLIB_PATH=%BZSLIB_PATH%

for %%i in ("..\stlport-kernel") do (
    set STLPORT_PATH=%%~fi
)

echo STLPORT_PATH=%BZSLIB_PATH%
for %%i in ("..\WTL80_7161_Final") do (
    set WTL_PATH=%%~fi
)

echo WTL_PATH=%BZSLIB_PATH%

set WDK7PATH=C:\WinDDK\7600.16385.1
WinCDEmu.sln
