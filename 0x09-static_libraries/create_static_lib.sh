#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -C *.c
ar rc liball.a *.o
