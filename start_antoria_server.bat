@echo off
:: ==========================
:: Adjustable DayZ Server Launcher
:: ==========================

:: --- Configurable variables ---
set serverName=Antoria Server
set serverLocation="C:\Path\To\DayZServer"
set serverConfig=serverDZ.cfg
set serverPort=2302
set serverCPU=2
set checkInterval=60      :: Alive check interval in seconds
set maxUptime=14400       :: Maximum runtime before restart (in seconds)
set uptime=0
set mods=@Antoria;@Antoria_Addons


title %serverName% batch
cd %serverLocation%

:main
echo (%time%) Starting %serverName% with mods %mods%...
start "DayZ Server" /min "DayZServer_x64.exe" -config=%serverConfig% -port=%serverPort% -cpuCount=%serverCPU% -dologs -adminlog -netlog -freezecheck -mod=%mods%

:aliveCheck
:: Check if server is running
tasklist /FI "IMAGENAME eq DayZServer_x64.exe" | find /I "DayZServer_x64.exe" >nul
if errorlevel 1 (
    echo (%time%) %serverName% has stopped! Restarting...
    goto restart
)

:: Wait before next check
timeout /t %checkInterval% /nobreak >nul
set /a uptime+=%checkInterval%

:: Restart if maximum uptime reached
if %uptime% GEQ %maxUptime% (
    echo (%time%) %serverName% reached max uptime. Restarting...
    goto restart
)

goto aliveCheck

:restart
:: Kill server process if still running
taskkill /im DayZServer_x64.exe /F >nul 2>&1
set uptime=0
goto main
