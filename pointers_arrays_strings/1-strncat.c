#include "main.h"

/**
 * _strncat - Concatenate two strings, taking at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append to dest.
 * @n: The maximum number of bytes from src to append to dest.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	/* Find the end of the destination string */
	for (a = 0; dest[a] != '\0'; a++)
		;

	/* Concatenate up to n bytes from the source string */
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}

	/* Add a null terminator to the end of the resulting string */
	dest[a + b] = '\0';

	return (dest);
}
