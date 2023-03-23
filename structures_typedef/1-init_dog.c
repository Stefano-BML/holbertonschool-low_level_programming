#include <stdlib.h>
#include "dog.h"

/**
* init_dog - my dog
* @d: pointer
* @name: name dog
* @age: age dog
* @owner: owner dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
