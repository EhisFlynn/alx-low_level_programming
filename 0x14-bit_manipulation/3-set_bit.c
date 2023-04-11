#include "main.h"

/**
 * set_bit - this will set the bit value to 1 at a given index
 * @n: decimal number
 * @index: index position that will be changed, starts from 0
 * Return: 1 if it suceeded, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 32)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
