#include <stdio.h>

// 1. Arrays
void arrayTutorial() {
    printf("1. Arrays\n");

    // Arrays are a collection of elements of the same type stored in contiguous memory locations.
    // Declaration and Initialization
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements
    printf("First element: %d\n", numbers[0]);

    // Modifying elements
    numbers[2] = 10;

    // Iterating through elements
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
}

// 2. Structures
struct Person {
    char name[50];
    int age;
};

void structureTutorial() {
    printf("2. Structures\n");

    // Structures allow grouping different data types under a single name.
    // Declaration and Initialization
    struct Person person1 = {"John", 25};

    // Accessing structure members
    printf("Name: %s, Age: %d\n", person1.name, person1.age);
    printf("\n");
}

// 3. Pointers
void pointerTutorial() {
    printf("3. Pointers\n");

    // Pointers are variables that store the memory address of another variable.
    // Declaration and Initialization
    int num = 10;
    int *ptr = &num;

    // Accessing value using pointers
    printf("Value: %d\n", *ptr);
    printf("\n");
}

int main() {
    arrayTutorial();
    structureTutorial();
    pointerTutorial();

    return 0;
}
