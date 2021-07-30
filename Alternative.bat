timeout /t 0
@echo off
color 1f
tasklist
echo -------------------------
echo taskkill /f /t /im Program.exe
echo exit
echo -------------------------
:comm
set /p thecommand=Komut:
%thecommand%
goto :comm

