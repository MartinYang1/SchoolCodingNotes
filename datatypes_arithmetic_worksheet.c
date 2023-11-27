#include <stdio.h>

int main() {
    // Exercise 1:
    // Write a program that takes an integer input and converts it to a double.
    // Print both the original integer and the converted double.
    int originalInteger;
    
    printf("Exercise 1: Enter an integer: ");
    scanf("%d", &originalInteger);

    double convertedDouble = (double)originalInteger;

    printf("Original Integer: %d\n", originalInteger);
    printf("Converted Double: %.2lf\n\n", convertedDouble);

    // Exercise 2:
    // Write a program that takes a double input and converts it to an integer.
    // Print both the original double and the converted integer.
    double originalDouble;

    printf("Exercise 2: Enter a double: ");
    scanf("%lf", &originalDouble);

    int convertedInteger = (int)originalDouble;

    printf("Original Double: %.2lf\n", originalDouble);
    printf("Converted Integer: %d\n\n", convertedInteger);

    // Exercise 3:
    // Write a program that takes a character input and converts it to its ASCII value.
    // Print both the original character and its ASCII value.
    char originalChar;

    printf("Exercise 3: Enter a character: ");
    scanf(" %c", &originalChar);  // Note the space before %c to consume the newline character.

    int asciiValue = (int)originalChar;

    printf("Original Character: %c\n", originalChar);
    printf("ASCII Value: %d\n", asciiValue);

    return 0;
}
