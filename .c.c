//(A)
#include <stdio.h>

int main() {
    // Variables
    int customer ID, unconsumed;
    char customer Name[50];
    float charges Per Unit, total amount, surcharge = 0;

    // Prompt user for input
    Print f("Enter Customer ID: ");
    scan f("%d", &customer ID);

    print f("Enter Customer Name: ");
    scan f("%s", customer Name);

    print f("Enter Units Consumed: ");
    scan f("%d", &unit Consumed);

    // Calculate charges per unit based on the given conditions
    if (unit consumed <= 300) {
        charges Per Unit = 175;
    } else if (unit consumed <= 600) {
        Charges Per Unit = 200;
    } else if (unit consumed <= 800) {
        Charges Per Unit = 300;
    } else {
        Charges Per Unit = 400;
    }

    // Calculate the total bill
    Total Amount = unit consumed * charges Per Unit;

    // Apply a surcharge if the total bill exceeds Kshs. 500
    if (total amount > 500) {
        surcharge = 0.20 * total amount;
    }

    // Ensure the minimum bill is Kshs. 200
    Total Amount = (total Amount + surcharge) > 200 ? (total Amount + surcharge) : 200;

    // Display the output
    Print f("\Customer ID: %d\n", customer ID);
    Print f("Customer Name: %s\n", customer Name);
    Print f("Units Consumed: %d\n", unit Consumed);
    Print f("Charges per Unit: %.2f\n", charges Per Unit);
    print f("Total Amount to Pay: %.2f\n", total Amount);

    return 0;
}
//(B)
#include <stdio.h>

int main() {
    double salary, tax = 0;

    // Read the yearly salary of an employee
    Print f("Enter the yearly salary: ");
    Scan f("%lf", &salary);

    // Calculate tax based on conditions
    if (salary <= 400000) {
        // Tax will be 1%
        tax = 0.01 * salary;
    } else if (salary > 400000 && salary <= 1000000) {
        // Tax will be 1% for the first 400,000 and 15% on the remaining amount
        tax = 0.01 * 400000 + 0.15 * (salary - 400000);
    } else {
        // Tax will be 1% for the first 400,000, 15% for the next 600,000, and 25% on the remaining amount
        tax = 0.01 * 400000 + 0.15 * 600000 + 0.25 * (salary - 1000000);
    }

    // Display the calculated tax
    printf("The calculated tax is: %.2lf\n", tax);

    return 0;
}

//(C)
#include <stdio.h>

int main() {
    int number;

    print f("Enter an integer number: ");
    scan f("%d", &number);

    if (number < 100) {
        print f("the number is smaller than 100.\n");
    } else {
        Print f("the  number contains more than two digits.\n");
    }

    return 0;
}


