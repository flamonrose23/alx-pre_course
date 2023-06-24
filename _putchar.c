#include <unistd.h>

/**
 * _putchar - writing char c to stdout
 * @c : char to print
 *
 * Return: 1 on success
 * -1 returned on error and erno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
