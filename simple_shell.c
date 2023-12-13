#include "simple_shell.h"

/**
 * main - parses input from the standard input and executes commands
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[15])
{
	/* declare variables and pointers needed */
	char *prompt = ("J&H(SHELL)-$ ");
	char *buffer = NULL;
	size_t bufferSize = 0;
	ssize_t getline_rv = 0;
	pid_t child_PID;
	char **envp = NULL;
	int return_status, status;
	int execute, i, j;
	char *delimiter = " \n";

	while (1 && getline_rv != EOF)
	{
		(return_status) = isatty(STDIN_FILENO);
		if (return_status) /* check if in interactive mode */
			print_str(prompt); /* print prompt */

		getline_rv = getline(&buffer, &bufferSize, stdin); /* get input from stdin */

		if (getline_rv == EOF) /* exit shell if the value returned is -1 */
		{
			print_str("\n");
			free(buffer);
			exit(0);
		}

		i = 0;
		while (buffer[i])
		{
			if (buffer[i] == '\n')
				buffer[i] = 0;
			i++;
		}

		j = 0;
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
			execute = execve(argv[0], argv, envp);
			if (execute == -1)
				print_str("Command not found\n");
		}
		else
			wait(&status);
	}
	free(buffer);
	return (0);
}
