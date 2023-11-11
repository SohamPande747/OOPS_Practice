#include <stdio.h>

int main()
{
	int n;
	float f;
	double d;
	char c;

	printf("Size of int is: %lu\n", sizeof(n));
	printf("Size of char is: %lu\n", sizeof(c));
	printf("Size of float is: %lu\n", sizeof(f));
	printf("Size of double is: %lu\n", sizeof(d));

	return 0;
}
