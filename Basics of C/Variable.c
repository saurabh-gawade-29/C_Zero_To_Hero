/*
Variables are containers for storing data values, like numbers and characters.
In C, there are different types of variables (defined with different keywords), for example:
int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
 */

// Todo:Create a variable called myNum of type int and assign the value 15 to it:
#include <stdio.h>
int main()
{
    int myNum = 15;
    return 0;
}

//! Format Specifiers
/*
Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
A format specifier starts with a percentage sign %, followed by a character.
For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:
*/
#include <stdio.h>
int main()
{
    int myNum = 15;
    printf("%d", myNum);
    return 0;
}
// To print other types, use %c for char and %f for float

//! If you assign a new value to an existing variable, it will overwrite the previous value:
#include <stdio.h>

int main()
{
    int myNum = 15; // myNum is 15
    myNum = 10;     // Now myNum is 10

    printf("%d", myNum);
    return 0;
}

//! Add Variables Together
Result Size : 668 x 588
#include <stdio.h>
​ int main()
{
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);
    return 0;
}

//! Declare Multiple Variables
#include <stdio.h>
int main()
{
    int x = 5, y = 6, z = 50;
    printf("%d", x + y + z);
    return 0;
}

//! You can also assign the same value to multiple variables of the same type:
#include <stdio.h>

int main()
{
    int x, y, z;
    x = y = z = 50;
    printf("%d", x + y + z);
    return 0;
}

//! C Variable Names
/*
All C variables must be identified with unique names.
These unique names are called identifiers.
Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).
Note: It is recommended to use descriptive names in order to create understandable and maintainable code:
*/

//! Naming Convention
/*
The general rules for naming variables are:
Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names
*/

//! Real-Life Example
#include <stdio.h>
int main()
{
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);

    return 0;
}