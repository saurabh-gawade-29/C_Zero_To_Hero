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
    // implicit conversion
    printf("%f\n", num);   // 9 -> 9.000000
    // explicit conversion
    printf("%f\n", (float) x / y); // 5/2 -> 2

    // Conversion -> 5 -> 5.000000
    // 5 -> 5.00000000000000....15
    // A -> possible
}