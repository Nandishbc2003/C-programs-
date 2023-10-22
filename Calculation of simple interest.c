#include <stdio.h>

int main() {
    double principal, rate, time, simpleInterest;

    // Input principal amount, rate of interest, and time from user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Output the calculated simple interest
    printf("Simple Interest: %.2lf\n", simpleInterest);

    return 0;
}
