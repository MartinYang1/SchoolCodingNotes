#include <stdio.h>

int main() {
    // WHILE LOOPS
    // Decision-making is a big part of writing all kinds of programs.
    // But sometimes you need to count or perform a task over and over.
    // For those times, we use a loop, which enables you to repeat a line of code,
    // or several lines of code, as many times as you like.
    // In C, we have while loops.

    // WHILE LOOPS
    // Will execute a set of statements as long as a condition is True
    // Example
    int i = 1;
    while (i < 10) {
        printf("%d\n", i);  
        i += 1; 
    }
    printf("The while loop is done\n");

    // if you don't increment, the loop will continue forever.
    // while loop requires relevant variables to be ready;
    // in this example, we need to define i prior to the loop.
    // In while loops, you need to make sure that the condition that makes the loop stop happens eventually.
    // Otherwise, the loop will keep running indefinitely.

    // the 'break' statement
    // 'break' in a while loop allows you to stop a loop before the condition proves False
    // when you use 'break' in a while loop, you force execution to continue
    // with the first line of code under and outside the loop, thereby stopping the loop
    // but continuing with the flow with the rest of the action after the loop.
    // With the break statement, we can stop the loop even if the while condition is true

    // Example
    i = 1;
    while (i < 610) {  
        if (i == 3) {
            break;
        }
        printf("%d\n", i);  
        i += 1;  
    }
    printf("The while loop is done\n");

    // the 'continue' statement
    // 'continue' in a while loop skips back to the top of the loop
    // With the continue statement, we can stop the current iteration and continue with the next

    // Example
    i = 1;
    while (i < 10) {  // if true
        if (i == 3) {
            i++;
            continue;  
        }
        printf("%d\n", i);
        i += 1;
    }
    printf("The while loop is done\n");
    // Output: all integers from 1 to 9 except for 3

    // FOR LOOPS
    // is used for iterating over a container (think of a list, tuple, dictionary, set, or a string - most of which we haven't learned yet)
    // with the for loop, we can execute a set of statements, once for each item in a list, tuple, set.
    // for loops can also run for a fixed number of loops.

    // Example1
    for (int x = 0; x < 7; x++) {
        printf("%d\n", x);
    }
    printf("All done\n");

    // Example2
    for (int x = 1; x < 10; x++) {
        printf("%d\n", x);
    }
    printf("All done\n");

    // Example3 - Looping through a string
    char fruit[] = "banana";
    for (int i = 0; fruit[i] != '\0'; i++) {
        printf("%c\n", fruit[i]);
    }
    printf("Done\n");

    // Example with break statement
    for (int x = 1; x < 100; x++) {
        if (x == 42) {
            printf("is the meaning of life\n");
            break;
        }
        printf("%d\n", x);
    }
    printf("The for loop is done\n");

    // Example with continue statement
    for (int x = 1; x < 100; x++) {
        if (x == 42) {
            printf("is the meaning of life\n");
            continue;
        }
        printf("%d\n", x);
    }
    printf("The for loop is done\n");
    return 0;
}

