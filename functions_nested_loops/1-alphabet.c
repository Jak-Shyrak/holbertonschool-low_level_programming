#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * @letter: Description of parameter x
 *
 * Description:  function that prints the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
