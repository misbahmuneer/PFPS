#include <stdio.h>

// Function to swap using call-by-value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(x, y);  // Call-by-value

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
