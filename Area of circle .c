#include <stdio.h>

int main() {
    double radius, area;
    const double PI = 3.14159265359; // Approximate value of pi

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate area of the circle
    area = PI * radius * radius;

    // Output the calculated area
    printf("Area of the circle with radius %.2lf is: %.2lf\n", radius, area);

    return 0;
}
