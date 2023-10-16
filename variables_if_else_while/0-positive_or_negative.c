#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)/*Pick a random number.*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n); /*print n is positive*/
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n); /* print n is negative*/
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n); /*print n is zero*/
	}
	return (0);
}