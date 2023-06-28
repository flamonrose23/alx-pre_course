#include "main.h"

/**
 * free_buffers - freesing buffers
 * @buf: buffer to be freed
 *
 * Return: no return
*/

void free_buffers(char **buf)
{
	int x = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[x])
	{
		free(buf[x]);
		x++;
	}
	free(buf);
}
