#include <stdio.h>

int main() {
    double fahrenheit, kelvin;

    // Input temperature in Fahrenheit from user
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert Fahrenheit to Kelvin
    kelvin = (fahrenheit - 32) * 5/9 + 273.15;

    // Output temperature in Kelvin
    printf("Temperature in Kelvin: %.2lf\n", kelvin);

    return 0;
}
