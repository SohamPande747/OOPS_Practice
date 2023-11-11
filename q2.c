#include <stdio.h>

int main()
{
	float f1,f2;

	printf("Enter first number :");
	scanf("%f", &f1);
	printf("Enter second number: ");
	scanf("%f", &f2);
	float result = f1*f2;
	printf("The multiplication is: %f\n", result);
	return 0;
}
