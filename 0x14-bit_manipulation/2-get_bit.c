#include "main.h"
#include <stdio.h>
/**
 * get_bit - to get value of a bit at a given index
 * @n: the number to evaluate
 * @index: the index which starts from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 32)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
