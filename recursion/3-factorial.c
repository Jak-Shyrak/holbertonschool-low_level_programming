#include "main.h"

/**
 * factorial - Calcule la factorielle d'un nombre.
 * @n: Le nombre pour lequel la factorielle doit être calculée.
 *
 * Return: La factorielle de n, ou -1 en cas d'erreur (si n < 0).
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Si n est négatif, retourne -1. */
	}

	if (n == 0 || n == 1)
	{
		return (1); /* Cas de base : factorielle de 0 ou 1 est 1. */
	}

	return (n * factorial(n - 1));
}
