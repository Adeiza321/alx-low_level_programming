#ifndef HEADER
#define HEADER


/**
 * struct dog - Giving dog attribbutes
 * @name: The name
 * @owner: The owner
 * @age: The age
 *
 * Description: They attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
