#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -L. -fPIC *.c -shared -o liball.so
