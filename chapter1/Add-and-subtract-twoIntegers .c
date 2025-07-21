#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

// Function to subtract a - b
int subtractAB(int a, int b) {
    return a - b;
}

// Function to subtract b - a
int subtractBA(int a, int b) {
    return b - a;
}

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Function calls and output
    printf("Addition (a + b): %d\n", add(a, b));
    printf("Subtraction (a - b): %d\n", subtractAB(a, b));
    printf("Subtraction (b - a): %d\n", subtractBA(a, b));

    return 0;
}
