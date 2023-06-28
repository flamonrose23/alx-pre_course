#include "main.h"

/**
 * test_path - checking if path is valid
 * @path: tokenized path
 * @command: user who enter command
 *
 * Return: path appended with command on success
 * on failure NULL
 */

char *test_path(char **path, char *command)
{
	int x = 0;
	char *output;

	while (path[x])
	{
		output = append_path(path[x], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		x++;
	}
	return (NULL);
}
