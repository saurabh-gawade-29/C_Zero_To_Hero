//! C Constants
/*
If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
This will declare the variable as "constant", which means unchangeable and read-only:
*/
#include <stdio.h>
int main()
{
    const int myNum = 15; // myNum will always be 15
    // myNum = 10;
    const float pi = 3.14;
    const float gravity = 9.81;
    printf("%d", myNum); // This will print 10
    return 0;
}
