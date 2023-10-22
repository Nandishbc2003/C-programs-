#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2, side3, perimeter, area, s;

    // Input side lengths from user
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    // Calculate perimeter of the triangle
    perimeter = side1 + side2 + side3;

    // Calculate semi-perimeter
    s = perimeter / 2;

    // Calculate area of the triangle using Heron's Formula
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    // Output the calculated perimeter and area
    printf("Perimeter of the triangle: %.2lf\n", perimeter);
    printf("Area of the triangle: %.2lf\n", area);

    return 0;
}
