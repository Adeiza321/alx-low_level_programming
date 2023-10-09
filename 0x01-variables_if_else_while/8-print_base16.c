#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: (0) always
 */
int main(void)
{
	int d = 48;
	int h = 97;

	while (d <= 57)
	{
		putchar(d);
		d++;
	}
	while (h <= 102)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);

}
