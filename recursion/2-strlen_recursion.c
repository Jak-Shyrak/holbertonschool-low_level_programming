#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères.
 * @s: La chaîne de caractères.
 *
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/* Si nous atteignons la fin , sa longueur est de 0.*/
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
