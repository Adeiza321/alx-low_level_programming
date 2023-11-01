#include "main.h"
#include <stdio.h>
/**
 * main - This prints out the name of the programs
 * @agrc: The count of number of argument passed
 * @agrv: The array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
