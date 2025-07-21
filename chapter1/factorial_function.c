#include <stdio.h>

// Recursive function to find factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for valid input
    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}
