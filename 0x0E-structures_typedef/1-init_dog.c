#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a fn
 * @d: pointer
 * @name: struct dog name
 * @age: struct age
 * @owner: struct owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
