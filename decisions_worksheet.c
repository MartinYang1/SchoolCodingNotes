#include <stdio.h>

int main() {
    // Exercise 1:
    // Write a program that checks if a given number is even or odd.
    // The user should input an integer, and the program should print whether the number is even or odd.

    int number;

    printf("Exercise 1: Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Exercise 2:
    // Write a program that determines if a given year is a leap year.
    // The user should input a year, and the program should print whether the year is a leap year or not.
    // A leap year is divisible by 4, but not divisible by 100 unless it is divisible by 400.

    int year;

    printf("\nExercise 2: Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("The year is a leap year.\n");
    } else {
        printf("The year is not a leap year.\n");
    }

    // Exercise 3:
    // Write a program that determines if a given character is a vowel or a consonant.
    // The user should input a character, and the program should print whether the character is a vowel or a consonant.
    // Assume the input is a single uppercase letter.

    char character;

    printf("\nExercise 3: Enter a single uppercase letter: ");
    scanf(" %c", &character);

    switch (character) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The character is a vowel.\n");
            break;
        default:
            printf("The character is a consonant.\n");
    }

    return 0;
}
