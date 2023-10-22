#include <stdio.h>

int main() {
    double kelvin, fahrenheit;

    // Input temperature in Kelvin from user
    printf("Enter temperature in Kelvin: ");
    scanf("%lf", &kelvin);

    // Convert Kelvin to Fahrenheit
    fahrenheit = (kelvin - 273.15) * 9/5 + 32;

    // Output temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);

    return 0;
}
