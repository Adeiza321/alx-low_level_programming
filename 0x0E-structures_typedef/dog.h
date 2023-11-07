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


typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
