#include <stdio.h>

int main() {
    double length, width, perimeter, area;

    // Input length and width from user
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    // Calculate perimeter of the rectangle
    perimeter = 2 * (length + width);

    // Calculate area of the rectangle
    area = length * width;

    // Output the calculated perimeter and area
    printf("Perimeter of the rectangle: %.2lf\n", perimeter);
    printf("Area of the rectangle: %.2lf\n", area);

    return 0;
}
