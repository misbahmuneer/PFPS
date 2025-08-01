#include <stdio.h>

// Recursive Ackermann function
int ackermann(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m, n;

    // Input m and n
    printf("Enter two non-negative integers (m and n): ");
    scanf("%d %d", &m, &n);

    // Check for non-negative inputs
    if (m < 0 || n < 0) {
        printf("Ackermann function is only defined for non-negative integers.\n");
    } else {
        int result = ackermann(m, n);
        printf("Ackermann(%d, %d) = %d\n", m, n, result);
    }

    return 0;
}
