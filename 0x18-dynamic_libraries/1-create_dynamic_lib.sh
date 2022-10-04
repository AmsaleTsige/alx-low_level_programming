#!/bin/bash
gcc -L -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
