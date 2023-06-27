#include "main.h"

/**
 * _realloc - reallocating memory
 * @ptr: void variable pointer
 * @old_size: integer
 * @new_size: integer
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new;
	unsigned int x;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

		}

	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (x = 0; x < old_size; x++)
	{
		new[x] = ((char *)ptr)[x];
	}

	free(ptr);
	return (new);
}

/**
 * splits - creating tokens
 * @line: char
 * @delim: char
 * Return: double pointer
 */

char **splits(char *line, char *delim)
{
	char **pptoken;
	int buf = 1024, x = 0;

	pptoken = malloc(sizeof(char *) * buf);
	if (!pptoken)
		exit(99);
	
	pptoken[x] = strtok(line, delim);
	x++;
	while (1)
	{
		pptoken[i] = strtok(NULL, delim);
		if (x >= buf)
		{
			buf += buf;
			pptoken = _realloc(pptoken, buf, buf * (sizeof(char *)));
			if (!pptoken)
				exit(98);
		}
		if (pptoken[x] == NULL)
			break;
		x++;
	}
	return (pptoken);
}
