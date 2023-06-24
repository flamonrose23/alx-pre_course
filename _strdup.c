#include "main.h"

/**
 * _strdup - duplication string
 * @str: pointer
 * Return: pointer to array
 */

char *_strdup(char *str)
{
	char *n;
	int x;

	if (str == NULL)
		return (NULL);

	n = malloc(_strlen(str) + 1);

	if (new == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
	{
		n[x] = str[x];
		x++;
	}

	n[x] = '\0';

	return (n);
}
