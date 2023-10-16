#include "main.h"

/**
 * swap_int - swap two integers a and b
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Return: Always return (0)
 */
void swap_int(int *a, int *b)

{
	int temp = *a;
	int temp2 = *b;
	*a = temp2;
	*b = temp;
}
