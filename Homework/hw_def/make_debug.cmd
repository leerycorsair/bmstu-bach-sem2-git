@ECHO OFF
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c main.c
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c arrhandling.c
gcc -o app.exe main.o arrhandling.o

DEL main.o arrhandling.o