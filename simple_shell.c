#include "simple_shell.h"

/**
 * main - parses input from the standard input and executes commands
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused))
, char *argv[] __attribute__((unused)))
{
	/* declare variables and pointers needed */
	char *prompt = "J&H(SHELL)-$ ";
	char *buffer = NULL;
	size_t bufferSize = 0;
	ssize_t getline_rv = 0;

	while (1 && getline_rv != EOF)
	{
		print_str(prompt);

		getline_rv = getline(&buffer, &bufferSize, stdin);

		if (getline_rv == -1)
		{
			print_str("Shell Exited...");
			print_str("\n");
			free(buffer);
			return (-1);
		}

		print_str(buffer);
	}
	free(buffer);
	return (0);
}
