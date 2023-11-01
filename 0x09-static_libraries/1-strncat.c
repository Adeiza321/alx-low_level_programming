#include "main.h"

/**
 * _strncat - This will concatenate two strings using n bytes from src
 *
 * @dest: The Value entered
 * @src: The Value entered
 * @n: The value entered
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);

}


