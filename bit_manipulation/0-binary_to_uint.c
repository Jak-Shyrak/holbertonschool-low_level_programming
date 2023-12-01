#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - deletes the node at
 *@b: pointer to a string of 0 and 1 chars
 * Return: 0 SUCCESS
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal);
}

