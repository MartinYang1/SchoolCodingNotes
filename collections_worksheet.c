#include <stdio.h>

// 1. Arrays Exercise:
// Write a function called 'sum_array' that takes an integer array and its size as parameters and returns the sum of all elements in the array.

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// 2. Structures Exercise:
// Create a function called 'print_person' that takes a struct Person as a parameter and prints the person's name and age.

struct Person {
    char name[50];
    int age;
};

void print_person(struct Person p) {
    printf("Name: %s, Age: %d\n", p.name, p.age);
}

// 3. Pointers Exercise:
// Write a function called 'swap_values' that takes two integer pointers as parameters and swaps the values they point to.

void swap_values(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. Arrays Exercise Solution:
    int numbers[] = {2, 4, 6, 8, 10};
    int sum = sum_array(numbers, 5);
    printf("1. Arrays Exercise Solution: Sum of the array elements: %d\n\n", sum);

    // 2. Structures Exercise Solution:
    struct Person person2 = {"Alice", 30};
    printf("2. Structures Exercise Solution: ");
    print_person(person2);
    printf("\n");

    // 3. Pointers Exercise Solution:
    int x = 5, y = 10;
    printf("3. Pointers Exercise Solution: Before swap - x: %d, y: %d\n", x, y);
    swap_values(&x, &y);
    printf("After swap - x: %d, y: %d\n", x, y);

    return 0;
}
