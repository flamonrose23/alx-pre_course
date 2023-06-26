#include "main.h"

/**
 * execute - executing commands
 * @parse: char array of pointers
 * Return: always 0
 */

int execute(char **parse)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execve(parse[0], parse, NULL) == -1)
		{
			perror(parse[0]);
			exit(1);
		}
	}
	else if (pid > 0)
	{
		wait(&status);
	}
	else
		perror("Error:");

	return (0);
}
