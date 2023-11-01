#include "main.h"
/**
 * _strlen -This function returns the length of a string
 * @s:Value of  string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

