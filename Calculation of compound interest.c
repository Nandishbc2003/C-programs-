#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;
    int compoundingFrequency;

    // Input principal amount, rate of interest, compounding frequency, and time from user
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the compounding frequency (annually, semi-annually, quarterly, monthly, etc.): ");
    scanf("%d", &compoundingFrequency);
    printf("Enter the time in years: ");
    scanf("%lf", &time);

    // Calculate compound interest
    compoundInterest = principal * pow((1 + (rate / 100 / compoundingFrequency)), (compoundingFrequency * time)) - principal;

    // Output the calculated compound interest
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
