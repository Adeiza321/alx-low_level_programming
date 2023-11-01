#include "main.h"
/**
 * _memset - This program will fill a block of memory with a specific value
 * @s: This is the starting address of the memory
 * @b: This is our desired value
 * @n: The number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */


char *_memset(char *s, char b, unsigned int n)


{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);

}


