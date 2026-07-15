#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter a num1: ");
    scanf("%d", &a);

    printf("Enter a num2: ");
    scanf("%d", &b);

    printf("The sum of %d and %d is: %d\n", a, b, a + b);

    return 0;
}