#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: Always (0)
 */

void print_most_numbers(void)

{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
	if ((n == '2') || (n == '4'))
	continue;

	_putchar(n);

	}
	_putchar('\n');
}