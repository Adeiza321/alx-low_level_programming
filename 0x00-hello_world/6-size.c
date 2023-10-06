#include <stdio.h>

int main(void)

{
	int i;
	double d;
	char c;
	float f;

	printf("The size of an int is: %zu bytes \n", sizeof(i));
	printf("The size of an double is: %zu bytes \n", sizeof(d));
	printf("The size of an char is: %zu bytes \n", sizeof(c));
	printf("The size of an float is: %zu bytes \n", sizeof(f));

	return (0);
}
