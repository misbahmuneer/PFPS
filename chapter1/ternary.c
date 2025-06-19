#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ternary operator to check even or odd
    (num % 2 == 0) 
        ? printf("%d is Even\n", num) 
        : printf("%d is Odd\n", num);

    return 0;
}
