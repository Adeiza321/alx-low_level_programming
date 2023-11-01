#!/bin/bash
gcc -wall -pendantic -Werror -Wextra -c *.c
sr -rc liball.a *.o
ranlib liball.a
