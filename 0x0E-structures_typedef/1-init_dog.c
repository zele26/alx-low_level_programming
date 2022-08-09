#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog object to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 * Return: It does not return anything, it swts the members with input data
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
