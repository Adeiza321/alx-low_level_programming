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

/**
 * dog_t - new namw for struct dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
