#include "main.h"

/**
 * _puts - printing string
 * @str: char
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
}
