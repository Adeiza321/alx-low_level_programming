#include <stdio.h>
/**
 * main - this is main description
 *
 * Return: (0) Always Success
 */

int main(void)
{
	int s = 97;
	int c = 65;

	while (s <= 122)
	{
		putchar(s);
		s++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
