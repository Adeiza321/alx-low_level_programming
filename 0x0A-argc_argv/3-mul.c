#include <stdio.h>
#include "main.h"
/**
 * _atoi - This would convert stings to an integer
 * @s: The strings to be converted
 * Return: The int converted from strings
 */

int _atoi(char *s)
{
	int j, k, m, len, n, digit;

	j = 0;
	k = 0;
	m = 0;
	len = 0;
	n = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (j < len && n == 0)
	{
		if (s[j] == '-')
			++k;
		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (k % 2)
				digit = -digit;
			m = m * 10 + digit;
			n = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			m = 0;
		}
		j++;
	}
	if (n == 0)
		return (0);
	return (m);
}

/**
 * main - entry multiplies two numbers
 * @argc: The number of argument
 * @argv: The array of arguments to be multiplied
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])

{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

