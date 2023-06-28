#include "main.h"

/**
 * append_path - adding path to command
 * @path: path of command
 * @command: user who enter commands
 *
 * Return: On success buffer containing command with path
 * On failure NULL
 */

char *append_path(char *path, char*command)
{
	char *buf;
	size_t x = 0, y = 0;

	if (command == 0)
		command = "";

	if (path == 0)
		path = "";

	buf = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));
	if (!buf)
		return (NULL);

	while (path[x])
	{
		buf[x] = path[x];
		x++;
	}

	if (path[x - 1] != '/')
	{
		buf[x] = '/';
		x++;
	}
	while (command[y])
	{
		buf[x + y] = command[y];
		y++;
	}
	buf[x + y] = '\0';
	return (buf);
}
