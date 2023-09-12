#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initiallizes thevariable of type struct dog
 * @dog: point to the dog
 * @name: name of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;

}
