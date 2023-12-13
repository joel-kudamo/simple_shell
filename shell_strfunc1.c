# include "simple_shell.h"




/**
 * _strncat - concatenates two strings
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes to append
 * Return: Returns pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && n > 0; j++, j--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}


/**
 * _strncpy - copies n bytes of a string
 * @dest: destination of string
 * @src: source of string
 * @n: number of bytes to copy
 * Return: always (0)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	for (; n > c; c++)
		dest[c] = '\0';

	return (dest);
}


/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: Returns (0)
 */
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}


/**
 * _strcat -  concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * Return: Returns (0)
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
		a++;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

