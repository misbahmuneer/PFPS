#include <stdio.h>

int main() {
    int n;

    // Input value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from n to 1
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
