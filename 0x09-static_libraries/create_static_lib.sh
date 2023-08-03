#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Remove the temporary .o files
rm *.o
