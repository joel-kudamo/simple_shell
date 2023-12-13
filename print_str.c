#include "simple_shell.h"

/**
 * _putchar - prints a character to the standard output
 *
 * @c: character to be printed
 *
 * Return: Success (1) else -1 (on error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - prints a string
 *
 * @str: string to be printed
 *
 * Return: number of characters printed
 */

int print_str(char *str)
{
	int i, count;

	i = 0;
	count = 0;
	while (str[i])
	{
		count += _putchar(str[i++]);
	}
	return (count);
}
