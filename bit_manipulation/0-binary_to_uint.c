#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - deletes the node at
 *@b: pointer to a string of 0 and 1 chars
 * Return: 0 SUCCESS
 */
unsigned int binary_to_uint(const char *b){

	if (b == NULL)
		return (0);

    // Variable pour accumuler la valeur convertie
    unsigned int result = 0;

	for (int i = 0; b[i] != '\0'; i++) {
		if (b[i] != '0' && b[i] != '1') {
			return 0;
		}
	}


}