#include <stdio.h>

int main() {
    // Statements
    // A statement is an instruction that the C compiler can execute.
    // We have seen assignment statements so far (x = 4).

    // Expression
    // An expression is a combination of values, variables, operators, and calls to functions.
    // Expressions need to be evaluated.

    // Evaluating an Expression
    // The evaluation of an expression produces a value.
    // A value all by itself is a simple expression, and so is a variable.
    // Evaluating a variable gives the value that the variable refers to.

    // Comparison Operators
    // == equals (x == y)
    // != not equals (x != y)
    // > greater than (x > y)
    // < less than (x < y)
    // >= greater than or equal to (x >= y)
    // <= less than or equal to (x <= y)
    // Will return true or false.
    // These conditions can be used in several ways, most commonly in 'if statements' and loops.

    // If-Statements
    // The word 'if' is used a lot in all computer programs to make decisions.
    // An if-statement is written by using the 'if' keyword.

    // if (condition) {
    //     // do this
    // }
    // do this no matter what

    // To do more than one thing when a condition is true, you need to enclose each statement within curly braces. This is called a "code block."
    // Code that is not within curly braces will be executed regardless of whether the condition was true or false. This is because it isn't dependent on the condition.
    // If the condition proves false, the instructions inside the code block are ignored.

    // Example:
    int a = 33;
    int b = 200;
    if (b > a) {
        printf("b is greater than a\n");
        // additional logic
    }
    printf("\n"); // this line is not part of the if statement anymore

    // Else
    // Sometimes you want a chunk of code to execute if a condition is true. Otherwise (else), if it doesn't prove true, you want some other chunk of code to be executed.
    // 'else' keyword catches anything that isn't caught by the preceding conditions.
    // Any lines of code under the else are executed only if the condition did not prove true.

    // Example:
    a = 200;
    b = 33;
    if (b > a) {
        printf("b is greater than a\n");
    } else {
        printf("a is greater than b\n");
    }

    // Elif
    // 'elif' keyword is the C way of saying 'if the previous conditions were not true, then try this condition.'
    // When if...else is not enough, there's elif, which stands for "else if."
    // An if statement can include any number of elif conditions and doesn't have to have an 'else' at the end.

    // Example:
    a = 33;
    b = 33;
    if (b > a) {
        printf("b is greater than a\n");
    } else if (a == b) {
        printf("a and b are equal\n");
    }

    // Nested Ifs
    // You can have if-statements inside if-statements.

    // Example:
    int x = 41;
    if (x > 10) {
        printf("Above 10\n");
        if (x > 20) {
            printf("Above 20\n");
        } else {
            printf("but not above 20\n");
        }
    } else {
        printf("not above 10\n");
    }

    // Switch statements are useful to different cases for checking a certain value
    // Example
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    if (num == 1)
        printf("x is 1.");
    else if (num == 2)
        printf("x is 2.");
    else if (num == 3)
        printf("x is 3.");
    
    // Switch statements are better suited for this
    switch (num) {
        case 1:
            printf("x is 1.");
        case 2:
            printf("x is 2.");
        case 3:
            printf("x is 3.");
    }
    return 0;
}


// || means or and && means and
// can be used to join together multiple conditions
// E.g. if (a && b)