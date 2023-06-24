#include "main.h"

/**
 * main - function principal
 * @argc: integer
 * @argv: character
 * @environ: global variable
 * Return: 0
 */

int main(int argc, char **argv, char **environ)
{
	char *line = NULL;
	char *delim = "\t \b\n";
	char *command;
	char **token;
	(void)argc;

	token = find_path(environ);

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		line = read_line();
		argv = splits(line, delim);
		command = args_path(argv, token);
		if (command == NULL)
			execute(argv);
		free(line);
		free(argv);
		free(command);
	}
	return (0);
}
