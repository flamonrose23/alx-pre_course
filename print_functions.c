#include "main.h"

/**
 * _putchar - writing char to stdout
 * @c: char to print
 *
 * Return: 1 on success
 * -1 returned on error and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - printing string
 * @s: string to be printed
 *
 * Return: number of char printed
 */

int print_s(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x++;
	}

	return (x);
}
