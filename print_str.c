#include "simple_shell.h"

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
