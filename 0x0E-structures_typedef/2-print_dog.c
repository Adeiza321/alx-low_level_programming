#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct declared
 *
 * @d: the dog d of type struc
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
			printf("Name: (ni1)\n");

		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);

	}
}
