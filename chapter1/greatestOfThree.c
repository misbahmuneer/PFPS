#include <stdio.h>

int main(){
    // This program finds the greatest of three numbers
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);  
    if (a >= b && a >= c) {
        printf("The greatest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The greatest number is: %d\n", b);
    } else {
        printf("The greatest number is: %d\n", c);
    }
    return 0;
}