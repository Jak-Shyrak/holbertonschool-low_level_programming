#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copy a string from src to dest, limited to n characters.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of characters to copy from src.
 * Return: A pointer to the resulting string dest.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }

    return 0;
}


