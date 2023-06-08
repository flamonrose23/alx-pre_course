#include "main.h"
#include <stdlib.h>

/**
 * _putchar - writing char c to stdout
 * @c: char to print
 *
 * Return: on success 1
 * on error, -1 returned and erno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
