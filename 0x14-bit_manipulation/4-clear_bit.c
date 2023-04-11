#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets bit value to 0 at a given index
 * @n: pointer to the decimal number to modify
 * @index: index position to modufy
 * Return: 1 if it suceeds or, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 32)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
