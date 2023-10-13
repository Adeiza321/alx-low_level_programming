#include "main.h"
/**
 * _isdigit - Check if c is a digit
 * @c: The number to be checked
 * Return: 1 is the response if it is a digit or 0 if anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
