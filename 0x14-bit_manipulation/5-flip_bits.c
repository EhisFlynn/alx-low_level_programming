#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert numbers
 * @n: initial number
 * @m: the next number to convert to
 * Return: number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}

