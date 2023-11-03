#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: The minimum entry
 * @max: The maximum entry
 *
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int j, k;
	int *a;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	a = malloc(sizeof(int) * k);

	if (a == NULL)
		return (NULL);
	for (j = 0; j < k ; j++)
	{

		a[j] = min;
		min++;
	}
	return (a);
}
