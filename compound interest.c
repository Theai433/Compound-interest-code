#include <stdio.h>

int main() {
    // Declare variables
    double principal;
    int time, rate, compoundInterest;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter annual interest rate (in percentage): ");
    scanf("%d", &rate);

    printf("Enter time period (in years): ");
    scanf("%d", &time);

    // Convert percentage interest rate to a decimal
    double rateDecimal = rate / 100.0;

    // Calculate compound interest without using pow function
    double factor = 1.0;
    for (int i = 0; i < time; i++) {
        factor *= (1 + rateDecimal);
    }
    compoundInterest = (int)(principal * (factor - 1));

    // Output the calculated compound interest
    printf("Compound interest is: %d\n", compoundInterest);

    return 0;
}