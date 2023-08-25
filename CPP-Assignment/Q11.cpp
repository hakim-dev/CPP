/*Q11. Write a C++ program to integral 
quotient and remainder of a division*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int dividend, divisor, quotient, remainder;

    // Input the dividend and divisor
    cout << "Enter the numerator: ";
    cin >> dividend;

    cout << "Enter the denominator: ";
    cin >> divisor;

    // Calculate quotient and remainder
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    // Display the results
    cout << "Quotient: " << quotient;
    cout << ", Remainder: " << remainder << endl;

    return 0;
}