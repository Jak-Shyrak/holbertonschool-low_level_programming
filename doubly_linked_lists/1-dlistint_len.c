#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - count numbers of list
 * @h: pointer to element of list
 * Return: number of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	/*Traversing the linked list*/
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
