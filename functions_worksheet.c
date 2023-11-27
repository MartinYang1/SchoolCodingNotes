#include <stdio.h>

// Exercise 1:
// Create a function called 'print_square' that takes an integer parameter 'side' and prints a square of asterisks (*) of the given side length.
// For example, if side=4, the output should be:
// ****
// ****
// ****
// ****

void print_square(int side) {
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Exercise 2:
// Write a function called 'calculate_power' that takes two parameters, 'base' and 'exponent', and returns the result of base^exponent.
// Use a loop to perform the calculation.

int calculate_power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Exercise 3:
// Create a function called 'print_triangle' that takes an integer parameter 'height' and prints a right-angled triangle of asterisks (*).
// For example, if height=4, the output should be:
// *
// **
// ***
// ****

void print_triangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printf("Hello, I'm outside func()\n");

    // Exercise 1:
    printf("\nExercise 1:\n");
    print_square(4);

    // Exercise 2:
    printf("\nExercise 2:\n");
    printf("Result: %d\n", calculate_power(2, 3));
    printf("Result: %d\n", calculate_power(5, 2));

    // Exercise 3:
    printf("\nExercise 3:\n");
    print_triangle(4);

    return 0;
}
