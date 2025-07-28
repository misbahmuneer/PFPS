#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;

    ptr = &a;  // storing address of a in pointer

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr); // dereferencing

    return 0;
}
