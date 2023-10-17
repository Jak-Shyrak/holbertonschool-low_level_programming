#include "main.h"

/**
* main - This program checks
* for lowercase character
* Return: 0
*/
int _islower(int c) /*Description*/
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
