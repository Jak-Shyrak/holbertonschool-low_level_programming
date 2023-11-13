#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - initialize struct dog.
  * @dog: nom de la structure
  * @name: nom du chien
  * @age: age du chien
  * @owner: nom du propriétaire
  */
void init_dog(struct dog *dog, char *name, float age, char *owner)
{
	dog->name = name;
	dog->age = age;
	dog->owner = owner;	
}
