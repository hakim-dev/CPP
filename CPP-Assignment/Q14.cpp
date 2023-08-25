/*Q14. Write a C++ program to calculate 
Simple and Compound Interest.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time, SI, CI;

    // Input principal amount
    cout << "Enter Principal : ";
    cin >> principal;

    // Input annual interest rate 
    cout << "Enter Rate of Interest : ";
    cin >> rate;

    // Input time 
    cout << "Enter Time : ";
    cin >> time;

    // Calculate Simple Interest
    SI = (principal * rate * time) / 100.0;

    // Calculate Compound Interest
    CI = principal * pow((1 + rate / 100.0), time) - principal;

    // Display the results
    cout << "SI: " << SI << endl;
    cout << "CI: " << CI << endl;

    return 0;
}
