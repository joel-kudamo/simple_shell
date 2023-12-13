#include "simple_shell.h"

/**
 * main - parses input from the standard input and executes commands
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char **env)
{
	/* declare variables and pointers needed */
	char *prompt = "J&H(SHELL)-$ ";
	char *argv[15];
	int status;
	char *buffer = NULL;
	size_t bufferSize = 0;
	ssize_t getline_rv = 0;
	int child_PID, i = 0, j = 0;
	char *delimiter = " \n";

	while (1 && getline_rv != EOF)
	{
		int return_status = isatty(0);
		if (return_status)
			print_str(prompt);

		getline_rv = getline(&buffer, &bufferSize, stdin);

		if (getline_rv == -1)
		{
			print_str("Shell Exited...\n");
			free(buffer);
			exit(0);
		}

		while (buffer[i])
		{
			if (buffer[i] == '\n')
				buffer[i] = 0;
			i++;
		}

		argv[j] = strtok(buffer, delimiter);
		while (argv[j])
		{
			argv[++j] = strtok(NULL, delimiter);
		}

		child_PID = fork();
		if (child_PID < 0)
		{
			print_str("Forking Process Failed");
			free(buffer);
			exit(0);
		}
		else if (child_PID == 0)
		{
			int execute = execve(argv[0], argv, env);
			if (execute == -1)
				print_str("Command not found\n");
				free(buffer);
		}
		else
			wait(&status);
	}
	free(buffer);
	return (0);
}
