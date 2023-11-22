#include <stdio.h>

// FUNCTIONS
// Functions provide a way to compartmentalize your code into smaller tasks that can be called from multiple places in your program.
// All code within the function is indented. The first un-indented line is outside the function.
// A function is a block of code that runs only when called and can be reused.
// You can pass data (parameters) into a function, and it can return data as a result.

// CREATING A FUNCTION
// In C, a function is declared using the 'void' keyword if it doesn't return a value.

void func() {
    printf("Hello from inside func()\n");
}

int main() {
    printf("Hello, I'm outside func()\n"); // First un-indented line

    func(); // Calling the function

    // There should be NO defining a function within a function.
    // All function definitions should be stand-alone.
    // However, you can call other already-defined functions within other function definitions.

    // Arguments/Parameters
    // Functions in C can take parameters.

    // Example of a function with a parameter
    void greet_person(char name[]) {
        printf("Hi %s\n", name);
    }

    greet_person("Ben");
    greet_person("Xavier");
    greet_person("Elle");

    // Number of Arguments
    // A function must be called with the correct number of arguments.

    // Keyword Arguments
    // In C, arguments are typically passed in order, so there is no direct equivalent to keyword arguments.

    // Default Parameter Value
    // Default parameter values are not directly supported in C.
    // You would typically define multiple versions of the function if default values are needed.

    // Return Values
    // Functions in C can return values.

    // Example of a function with a return value
    int multiply_by_five(int x) {
        return 5 * x;
    }

    printf("%d\n", multiply_by_five(3));
    printf("%d\n", multiply_by_five(7));
    printf("%d\n", multiply_by_five(10));

    // Recursion - Advanced
    // Recursion is possible in C but requires careful handling.

    // Example of a recursive function
    int recursion(int k) {
        if (k > 0) {
            return k + recursion(k - 1);
        } else {
            return 0;
        }
    }

    printf("%d\n", recursion(6));

    return 0;
}
