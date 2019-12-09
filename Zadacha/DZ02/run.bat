@rm -rf build/*
@mkdir -p build
@echo Warnings:
@gcc src\main.c -o build\main.exe -Wall
@echo =========================================
@.\build\main.exe
