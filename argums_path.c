#include "main.h"

/**
 * _strcat - concatenating two strings
 * @dest: char
 * @src: char
 * Return: dest concatenated string
 */

char _strcat(char *dest, char *src)
{
	int x, m;

	for (x = 0; dest[x] != '\0'; x++)
		dest[x] = src[m];

	dest[x] = '\0';
	return (dest);
}

/**
 * args_path - concatenating arguments
 * @parse: char
 * @n: char
 * Return: total or NULL
 */

char *args_path(char **parse, char **n)
{
	char *total, **cat;
	int x, m, l;
	struct stat status;

	for (x = 0; n[x]; x++)
	{
		total = malloc(60);
		_strcat(total, n[x]);
		_strcat(total, "/");
		_strcat(total, parse[0]);

		if (stat(total, &status) == 0)
		{
			for (l = 0; parse(l) != '\0'; l++);
			cat = malloc(sizeof(char *) * (l + 1));
			cat[l] = NULL;
			cat[0] = _strdup(total);

			for (m = 1; parse[m]; m++)
				cat[m] = _strdup(parse[m]);
			execute(cat);
			return (total);
		}
		free(total);
	}
	return (NULL);
}
