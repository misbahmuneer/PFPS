#include <stdio.h>

int main() {
    int num;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if number is even or odd
    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}
