rm -rf build/*
mkdir -p build
echo Warnings:
gcc src/main.c -o build/main.a -Wall -lm -lm
echo =========================================
./build/main.a
