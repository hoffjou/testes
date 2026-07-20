@echo off
chcp 65001 > nul

echo Compilando o jogo...

gcc main.c -o main.exe -lwinmm

if %errorlevel% eq 0 (
    echo.
    echo Compilação concluída com SUCESSO!
    echo.


) else (
    echo [ERRO] ocorreu um problra na compilação.

)

echo.
pause
