#include <stdio.h>

int main() {
    double celsius, kelvin;

    // Input temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    // Output temperature in Kelvin
    printf("Temperature in Kelvin: %.2lf\n", kelvin);

    return 0;
}
