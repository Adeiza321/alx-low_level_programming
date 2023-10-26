#include "main.h"
#include "string.h"
/**
 * _strlen_recursion - getting the string length
 * @s: The string
 *
 * Return: Always 0;
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
