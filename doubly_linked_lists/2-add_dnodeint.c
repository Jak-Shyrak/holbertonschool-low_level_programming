#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add node at the beguinning
 * @head: pointer to pointer
 * @n: string to be duplicate
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create a new node*/
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	/*calculate lenght of the new node*/
	new_node->n = n;

	/*Add the new node at the beguinning*/
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
