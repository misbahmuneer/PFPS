#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Calculate and print roots (assuming roots are always real)
    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        if (discriminant > 0)
            printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
        else
            printf("Roots are real and equal: %.2f\n", root1);
    } else {
        printf("Error: Discriminant is negative. Complex roots not handled.\n");
    }

    return 0;
}
