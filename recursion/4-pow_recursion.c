#include "main.h"

/**
 * _pow_recursion - Calcule la valeur de x élevé à la puissance de y.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: La valeur de x^y, ou -1 si y est négatif.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Si y est négatif, retourne -1. */
	}

	if (y == 0)
	{
		return (1); /* Si y est égal à 0, retourne 1. */
	}

	return (x * _pow_recursion(x, y - 1));/* Appel récursif pour calculer x^y. */
}
