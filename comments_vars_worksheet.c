#include <stdio.h>

// Exercise 1:
// Which of the following is the best variable name in C?
// movement_speed, movementSpeed, MovementSpeed, MOVEMENT_SPEED?

// Exercise 2:
// Initialize a number n to whatever value you wish and print it

// Exercise 3:
// Declare two integer variables, 'a' and 'b', and initialize them with values 10 and 20, respectively.
// Swap the values of 'a' and 'b' without using a third variable. (think outside the box!)

int main() {
    // Exercise 1
    // movement_speed is the best variable name because C, like C++, follows snake case naming convention.
    // MOVEMENT_SPEED should be used if the variable is a constant the entire time
    
    // Exercise 2
    int n = 50;
    printf("Number is %d", n);

    // Exercise 3
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Exercise 1: After swapping, a = %d and b = %d\n", a, b);
}
