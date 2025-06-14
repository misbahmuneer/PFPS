#include <stdio.h>
#include <math.h>  // For pow()

int main() {
    double radius = 5.0;
    double area;

    area = 3.14159 * pow(radius, 2);  // area = π × r²

    printf("Area = %.2f\n", area);

    return 0;
}
