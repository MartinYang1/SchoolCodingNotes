#include <stdio.h>
#include <math.h>

// Exercise 1:
// Write a program that calculates the area of a rectangle.
// The user should input the length and width, and the program should print the calculated area.

int main() {
    double length, width;

    printf("Exercise 1: Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    double area = length * width;

    printf("Area of the rectangle: %.2lf\n", area);

    // Exercise 2:
    // Write a program that converts Celsius to Fahrenheit.
    // The user should input a temperature in Celsius, and the program should print the equivalent temperature in Fahrenheit.
    // Use the formula: Fahrenheit = (Celsius * 9/5) + 32.

    double celsius;

    printf("\nExercise 2: Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = (celsius * 9 / 5) + 32;

    printf("Equivalent temperature in Fahrenheit: %.2lf\n", fahrenheit);

    // Exercise 3:
    // Write a program that calculates the volume of a sphere.
    // The user should input the radius, and the program should print the calculated volume.
    // Use the formula: Volume = (4/3) * π * r^3.

    double radius;

    printf("\nExercise 3: Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    printf("Volume of the sphere: %.2lf\n", volume);

    return 0;
}
