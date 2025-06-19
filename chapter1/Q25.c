#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; count < n; i++) {
        for (int j = 1; j <= i && count < n; j++) {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}
