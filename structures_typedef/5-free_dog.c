#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *free_dog - frees dogs
 *@name: name of the new dog
 *@age: age of the dog
 *@owner: Owner of the new dog
 */
void free_dog(dog_t *d)
{
		/* Free previously allocated memory */
		free(d->name);
		free(d->owner);

		/* Free previously allocated memory */
		free(d);
}
