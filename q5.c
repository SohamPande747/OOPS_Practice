#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    a = a^b;
    b = a^b;
    a = a^b;
    
    printf("First number is: %d\n", a);
    printf("Second Number is: %d\n", b);
}