#include "main.h"

/**
 * char *_strcpy - This copies the string pointed to by src
 * @dest: Where the string will be cipied to
 * @src: where the string will be copie from
 * Return: The string value
 */

char *_strcpy(char *dest, char *src)

{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}


