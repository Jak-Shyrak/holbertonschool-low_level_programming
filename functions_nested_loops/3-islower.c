
#include "../main/main.h"

/**
* _islower - This program
*  checks for lowercase character
* @c: Description of parameter c
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
