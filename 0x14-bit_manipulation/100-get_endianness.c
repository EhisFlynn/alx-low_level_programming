#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if endian is big, or 1 if endian is small
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}

