#include "main.h"

/**
* main - This program
* prints the alphabet, in lowercase, followed by a new line.
*/
void print_alphabet(void)/*Pick a random number.*/
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
