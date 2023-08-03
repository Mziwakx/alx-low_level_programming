#include "main.h"

/**
 * earn_endianness - check if a device is small or big endian
 * Return: 0 for big, 1 for small
 */
int earn_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
