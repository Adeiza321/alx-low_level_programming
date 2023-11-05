#include "main.h"
#include <stdlib.h>

/**
 * Create_array - creates an array of size and assign char c
 *
 * @size: size of array
 * @c: char to assign
 *
 * Description: create array of size size and assign char c
 *
 * Return: pointer to array , Null if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);

}
