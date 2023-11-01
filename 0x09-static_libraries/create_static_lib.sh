#!/bin/bash
gcc -wall -pedantic -Werror -Wextra -c *.c
sr -rc liball.a *.o
ranlib liball.a
