#!/bin/bash:wq

gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -o liball.so *.o
LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
