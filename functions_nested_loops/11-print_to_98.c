#include <stdio.h>
#include "../main/main.h"

/**
* print_to_98 - This program
* prints all natural numbers from n to 98,
* followed by a new line
* @n: Description of parameter n
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

