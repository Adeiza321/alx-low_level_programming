#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: (0)
 */
int main(void)
{
	int r = 122;

	while (r >= 97)
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
