#include "main.h"

/**
 * clear_bit - settles the value of a identified bit to 0
 * @n: pointer to the number to switch
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for neglect
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
