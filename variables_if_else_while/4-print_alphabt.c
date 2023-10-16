#include <stdio.h>

/**
* main - This program
* print the alphabet
* in lowercase but he
* don't print e and q
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 && a != 113)
		putchar(a);
	}
	putchar('\n');

	return (0);
}
