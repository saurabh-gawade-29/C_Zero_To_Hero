/*
Sometimes, you have to convert the value of one data type to another type.
This is known as type conversion.

There are two types of conversion in C:
Implicit Conversion (automatically)
Explicit Conversion (manually)
*/

#include <stdio.h>

int main()
{
    float num = 9;
    int x = 5;
    int y = 2;
    float sum = (float)x / y;
    printf("Explicit Typecast %.1f \n", sum);
    printf("Implicit typecast %f \n", num);
}