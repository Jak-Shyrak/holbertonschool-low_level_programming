#include <stdio.h>

/**
* main - This program
* print the alphabet
* in lowercase
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
