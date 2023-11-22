// There are lots of data types in C

// Integers
// A whole number that's positive or negative
// Unsigned int can be negative or positive
// Signed int has to be positive
// Adding long or short in a variable declaration changes the size of the variable (shown in table below)

// Type	Size (bytes)	Format Specifier
// int	at least 2, usually 4	%d, %i
// char	1	%c
// float	4	%f
// double	8	%lf
// short int	2 usually	%hd
// unsigned int	at least 2, usually 4	%u
// long int	at least 4, usually 8	%ld, %li
// long long int	at least 8	%lld, %lli
// unsigned long int	at least 4	%lu
// unsigned long long int	at least 8	%llu
// signed char	1	%c
// unsigned char	1	%c
// long double	at least 10, usually 12 or 16	%Lf

// Real numbers
// Floats - 4 bytes
// Doubles - 8 bytes

// Strings
// In C, there is no string type, only a char type
// Char has size of 1 byte and stores one character
// A string is initialized with a char array

// Example
// #include <cstdio>
// int main() {
//     char fruit[] = "banana";
//     printf(fruit);
//     return 0;
// }

// Boolean
// In C, there is no built-in boolean type. Compiler uses ints (0 and 1s)
// To use a bool type, #include <stdbool.h>
// Example
#include <stdbool.h>
#include <cstdio>
int main() {
    bool ate_today = true;
    printf("%d", ate_today);
    return 0;
}

// Casting
// In C, casting is useful when converting between different types and when there might be a loss of precision
// Implicit casting is done automatically by the compiler. We're talking about explicit casting
// Examples
double doubleNumber = 3.14;
int integerNumber = (int)doubleNumber; // Explicit casting from double to int

char character = 'A';
int asciiValue = (int)character; // Explicit casting from char to int

// C Arithmetic Operators
//  + Addition (x + y)
//  - Subtraction (x - y)
//  * Multiplication (x * y)
//  / Division (x / y)
//  % Modulus (x % y)
//  ** Exponentiation (x ** y)

// Assignment Operator
// I.e. int a = b;
// Operator assigns an object to a variable, so the variable is referencing that object

// Comparison Operators
//  == equals (x == y)
//  != not equals (x != y)
//  > greater than (x > y)
//  < less than (x < y)
//  >= greater than, equal to (x >= y)
//  <= less than, equal to (x <= y)
//  Will return true or false
