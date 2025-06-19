#include <stdio.h>

int main() {
    int n;

    // Input value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
