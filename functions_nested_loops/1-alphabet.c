#include "../main/main.h"

/**
* print_alphabet - This program
* prints _putchar, followed by a new line.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
