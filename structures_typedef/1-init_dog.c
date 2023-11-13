#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize struct dog.
  * @d: nom de la structure
  * @name: nom du chien
  * @age: age du chien
  * @owner: nom du propriétaire
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
