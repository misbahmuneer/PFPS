#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        if (i == 4) continue;  // skip line with 4 stars to match given pattern
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
