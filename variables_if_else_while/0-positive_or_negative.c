#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*Pick a random number.*/

##
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n); /*if the number is positive print n is positive*/
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n); /*if the number is negative print n is negative*/
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n); /*if the number equal to 0 print n is zero*/
	}
	return (0);
}