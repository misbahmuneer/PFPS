#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += 1.0 / (2 * i - 1);
    printf("Sum = %.4f\n", sum);
    return 0;
}
