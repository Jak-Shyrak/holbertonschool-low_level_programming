#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 *@a: pointer to the array 'a'
 *@n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	/*Defining a start and an end pointer to navigate through the array*/
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start; /*Switches elements pointed by start and end*/
		*start = *end;
		*end = temp;
		start++; /*Moving start and end pointers*/
		end--;
	}
}
