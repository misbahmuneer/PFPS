#include <stdio.h>

#define PI 3.14159         // Constant macro
#define SQUARE(x) ((x)*(x)) // Function-like macro

int main() {
    float radius = 5.0;
    float area = PI * SQUARE(radius);  // PI * (radius * radius)

    printf("Area of circle = %.2f\n", area);
    return 0;
}
