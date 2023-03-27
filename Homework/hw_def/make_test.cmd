@ECHO OFF
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c test_arrhandling.c
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c arrhandling.c
gcc -o app.exe arrhandling.o test_arrhandling.o

.\app.exe

DEL app.exe test_arrhandling.o arrhandling.o 