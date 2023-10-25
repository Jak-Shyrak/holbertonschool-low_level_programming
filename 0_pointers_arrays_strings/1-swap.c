#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer
 * @b: pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
