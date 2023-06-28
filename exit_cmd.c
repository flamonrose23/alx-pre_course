#include "main.h"

/**
 * exit_cmd - handling exit commad
 * @command: tokenized command
 * @line: input read
 *
 * Return: no return
 */

void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
