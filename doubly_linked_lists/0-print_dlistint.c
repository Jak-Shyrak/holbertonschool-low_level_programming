#include "lists.h"

/**
 * print_dlistint - affiche tous les éléments d'une liste dlistint_t
 * @h: pointeur vers le début de la liste
 * Return: le nombre de nœuds
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0; /* Variable pour compter le nombre de nœuds dans la liste */

    /* Parcourt la liste tant que le pointeur actuel n'est pas NULL */
    while (h != NULL)
    {
        printf("%d\n", h->n); /* Affiche la valeur du nœud actuel */
        h = h->next; /* Avance vers le nœud suivant */
        count++; /* Incrémente le compteur de nœuds */
    }

    return count; /* Retourne le nombre total de nœuds dans la liste */
}
