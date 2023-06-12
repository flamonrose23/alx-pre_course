#include "main.h"

/**
 * append_text_to_file - appending text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to add to the end of the file
 *
 * Return: If it fails or filename is NULL - -1
 * If file doesn’t exist the user lacks write permissions - -1
 * Otherwise -1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
