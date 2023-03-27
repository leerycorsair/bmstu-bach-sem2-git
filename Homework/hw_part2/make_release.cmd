@ECHO OFF

gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c -D NDEBUG main.c
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c -D NDEBUG arrio.c
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c -D NDEBUG numhandling.c
gcc -std=c99 -Wall -Wpedantic -Wextra -Werror -g3 -Wfloat-equal -Wvla -c -D NDEBUG arrhandling.c
gcc -o app.exe main.o arrio.o numhandling.o arrhandling.o

DEL main.o arrio.o numhandling.o arrhandling.o