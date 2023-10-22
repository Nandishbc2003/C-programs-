#include <stdio.h>

int main() {
    double kelvin, celsius;

    // Input temperature in Kelvin from user
    printf("Enter temperature in Kelvin: ");
    scanf("%lf", &kelvin);

    // Convert Kelvin to Celsius
    celsius = kelvin - 273.15;

    // Output temperature in Celsius
    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}
