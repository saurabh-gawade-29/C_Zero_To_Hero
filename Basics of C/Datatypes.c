Result Size : 668 x 588
#include <stdio.h>
​ int main()
{
    // Create variables
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    return 0;
}

//! Char - Datatype
/*
The char data type is used to store a single character.
The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:
*/
#include <stdio.h>
int main()
{
    char myGrade = 'A';
    printf("%c", myGrade);
    return 0;
}
/*
Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters. Note that these values are not surrounded by quotes (''), as they are numbers:
*/
#include <stdio.h>
int main()
{
    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c", c);
    return 0;
}

//! Notes on Characters
#include <stdio.h>
int main()
{
    char myText = 'Hello';
    printf("%c", myText);
    return 0;
}

// Output: o

//! But Why ?
// !If you try to store more than a single character, it will only print the last character:
// Don't use the char type for storing multiple characters, as it may produce errors.

// TODO: How to Resolve this?
#include <stdio.h>

int main()
{
    char myText[] = "Hello";
    printf("%s", myText);
    return 0;
}

//! C Numeric Data Types
/*
Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.
 */

//! INT

#include <stdio.h>
​ int main()
{
    int myNum = 1000;
    printf("%d", myNum);
    return 0;
}

// !FLOAT
#include <stdio.h>
int main()
{
    float myNum = 5.75;
    printf("%f", myNum);
    return 0;
}

// !DOUBLE
#include <stdio.h>
int main()
{
    double myNum = 19.99;
    printf("%lf", myNum);
    return 0;
}
/*
!float vs. double
The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).
*/

//! Precision
// *Set Decimal Precision
/*
You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:
*/

#include <stdio.h>
int main()
{
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum);
    printf("%lf", myDoubleNum);
    return 0;
}

/*
If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:
*/
#include <stdio.h>
int main()
{
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits
    return 0;
}

//! Size of Datatype
/*
The memory size refers to how much space a type occupies in the computer's memory.
To actually get the size (in bytes) of a data type or variable, use the sizeof operator:
*/
#include <stdio.h>
int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
}