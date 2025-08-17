@echo off
:start
:: Server name
set serverName=Antoria Server
set serverLocation="C:\Path\To\DayZServer"
set serverConfig=serverDZ.cfg
set serverPort=2302
set serverCPU=2
set mods=@Antoria;@Antoria_Addons

title %serverName% batch
cd %serverLocation%
echo (%time%) Starting %serverName% with mods %mods%...

start "DayZ Server" /min "DayZServer_x64.exe" -config=%serverConfig% -port=%serverPort% -cpuCount=%serverCPU% -dologs -adminlog -netlog -freezecheck -mod=%mods%

:: Restart server after 4 hours (14400 seconds)
timeout /t 14400 /nobreak
taskkill /im DayZServer_x64.exe /F

goto start