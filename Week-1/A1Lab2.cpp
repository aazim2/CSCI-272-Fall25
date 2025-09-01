#include <iostream>

// Function prototype
double divide(double, double);

int main() {
    double num1 = 5, num2 = 7;

    double quotient1 = divide(num1, num2); // Performing division operation
    double quotient2 = divide(num2, num1); // Performing division operation

    // Displaying the results
    std::cout << "Quotient: " << quotient1 << "; " << quotient2 << std::endl;

    return 0;
}

// Function definition
double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        std::cerr << "Error: Cannot divide by zero." << std::endl;
        return 0.0;
    }
}
