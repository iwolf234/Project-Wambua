#include <stdio.h>

Int main() {
    // Declare variables
    Double principal;
    Int time, rate, compoundInterest;

    // Input principal amount, rate of interest, and time period
    Printf(“Enter principal amount: “);
    Scanf(“%lf”, &principal);
    
    Printf(“Enter annual interest rate (in percentage): “);
    Scanf(“%d”, &rate);

    Printf(“Enter time period (in years): “);
    Scanf(“%d”, &time);

    // Convert percentage interest rate to a decimal
    Double rateDecimal = rate / 100.0;

    // Calculate compound interest without using pow function
    Double factor = 1.0;
    For (int I = 0; I < time; i++) {
        Factor *= (1 + rateDecimal);
    }
    compoundInterest = (int)(principal * (factor – 1));

    // Output the calculated compound interest
    Printf(“Compound interest is: %d\n”, compoundInterest);

    Return 0;
}