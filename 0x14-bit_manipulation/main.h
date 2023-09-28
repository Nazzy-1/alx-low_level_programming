#ifndef _MAIN_H_
#define _MAIN_H_

#define MAX_PATH_SIZE 1024
#define _POSIX_C_SOURCE 200809L

/* HEADERS */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>


/* PROTOTYPES */
void exec(const char *command);
void prompt(void);
void one(const char *command);
void two(const char *command);
char *copy(char *env);
unsigned int binary_to_uint(const char *binary);
int _putchar(char c);
void print_binary(unsigned long int n);

#endif
