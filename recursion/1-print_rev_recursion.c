#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Imprime une chaîne de caractères en ordre inverse.
 * @s: La chaîne de caractères à imprimer en ordre inverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Si nous atteignons la fin, nous nous arrêtons.*/
		return;

	_print_rev_recursion(s + 1); /* Appel récursif avec le caractère suivant.*/

	putchar(*s); /* Imprime le caractère actuel (à partir de la fin).*/
}
