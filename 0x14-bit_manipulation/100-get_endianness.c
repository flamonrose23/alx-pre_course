#include "main.h"

/**
 * get_endianness - checking if a machine is endianness
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
