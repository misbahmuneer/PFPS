#include <stdio.h>

int main() {
    int n, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed: ");
    while (n > 0) {
        digit = n % 10;
        printf("%d", digit);
        n /= 10;
    }
    printf("\n");
    return 0;
}

