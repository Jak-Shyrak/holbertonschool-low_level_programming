#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - Create a new dog
 *@name: name of the new dog
 *@age: age of the dog
 *@owner: Owner of the new dog
 *Return: new dog
 */
void free_dog(dog_t *d)
{
		/* Free previously allocated memory */
		free(d->name);
		free(d->owner);

		/* Free previously allocated memory */
		free(d);
}
