#include <stdio.h>

int main() {
    double radius, circumference;
    const double PI = 3.14159265359; // Approximate value of pi

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate circumference of the circle
    circumference = 2 * PI * radius;

    // Output the calculated circumference
    printf("Circumference (Perimeter) of the circle with radius %.2lf is: %.2lf\n", radius, circumference);

    return 0;
}
