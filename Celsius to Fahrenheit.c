#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius from user
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Output temperature in Fahrenheit
    printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);

    return 0;
}
