//! C Constants
/*
If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
This will declare the variable as "constant", which means unchangeable and read-only:
*/
#include <stdio.h>
int main()
{
    const int myNum = 15; // myNum will always be 15
    myNum = 10;
    printf(myNum, "myNum") // error: assignment of read-only variable 'myNum'
}
