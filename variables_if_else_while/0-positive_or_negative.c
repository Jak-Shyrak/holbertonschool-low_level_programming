#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Pick a random number.
if the number is positive print n is positive
if the number is negative print n is negative
if the number equal to 0 print n is zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}