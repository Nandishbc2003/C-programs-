#include <stdio.h>

int main() {
    double sideLength, perimeter, area;

    // Input side length from user
    printf("Enter the side length of the square: ");
    scanf("%lf", &sideLength);

    // Calculate perimeter of the square
    perimeter = 4 * sideLength;

    // Calculate area of the square
    area = sideLength * sideLength;

    // Output the calculated perimeter and area
    printf("Perimeter of the square: %.2lf\n", perimeter);
    printf("Area of the square: %.2lf\n", area);

    return 0;
}
