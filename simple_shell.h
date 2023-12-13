#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H


/* << Standard C Library Header Files >> */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/* << Custom Function Prototypes >> */
int _putchar(char c);
int print_str(char *str);
int _strlen(char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strdup(const char *str);

/* == string to integer operations == */
int _atoi(char *);

#endif
