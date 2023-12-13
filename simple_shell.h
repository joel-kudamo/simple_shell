#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H


/* << Standard C Library Header Files >> */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>

/* << Custom Function Prototypes >> */
int _putchar(char c);
int print_str(char *str);

#endif
