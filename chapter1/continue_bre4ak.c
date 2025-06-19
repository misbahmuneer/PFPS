#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue;  // skips 5
        if (i == 8) break;     // stops loop at 8
        printf("%d ", i);
    }
    return 0;
}
