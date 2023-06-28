#include "main.h"

/**
 * find_path - finding path from global envir
 * Return: if path not found NULL
 * if path is found path
 */

char *find_path(void)
{
	int m;
	char **env = environ, *path = NULL;
	
	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && m < 5)
			{
				path++;
				m++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}
