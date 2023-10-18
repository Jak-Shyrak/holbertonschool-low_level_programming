#include "main.h"

/**
* print_sign - This program
*  prints the sign of a number
* @n: Description of parameter n
* Return: 1 if the number is positive, 0 if its zero and -1 if its negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
