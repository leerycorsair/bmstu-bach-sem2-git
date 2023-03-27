@ECHO OFF
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c test_numhandling.c
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c numhandling.c
gcc -o app.exe test_numhandling.o numhandling.o

.\app.exe

DEL app.exe test_numhandling.o numhandling.o