# include "simple_shell.h"


/**
 * _strncmp-  compares two strings
 * @s1: input string to be compared
 * @s2: input string to be compared
 * @n: maximum number of characters to compare
 * Return: Returns (0) if strings are equal n otherwise (1)
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t c;

	for (c = 0; (s1[c] != '\0' || s2[c] != '\0') && c < n; c++)
	{
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	}
	return (0);
}


/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string
 * Return: always (0)
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}


/**
 * _strlen- returns the length of a string
 * @s: a string variable
 * Return: Returns (0)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}


/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 * Return: Returns a pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *atm;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	atm = malloc(sizeof(char) * (length + 1));
	if (!atm)
		return (NULL);
	for (length++; length--;)
		atm[length] = *--str;
	return (atm);
}

