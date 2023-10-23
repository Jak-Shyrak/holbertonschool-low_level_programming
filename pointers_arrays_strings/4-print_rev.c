#include "main.h"
#include <stdio.h>
/**
 * print_rev - print strings in reverse.
 * @s: String pointer.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (--n; n >= 0; n--)
		putchar(s[n]);
	putchar('\n');
}
