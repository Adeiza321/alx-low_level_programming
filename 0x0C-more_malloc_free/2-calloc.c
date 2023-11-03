#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: Number of bloc memory
 * @size: size of the data (int)
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb,  unsigned int size)
{
	char *p;
	size_t r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (r = 0; r < (nmemb * size); r++)
		p[r] = 0;
	return (p);
}
