#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: The number of array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

