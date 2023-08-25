/*Q9. Write a C++ program that converts 
kilometers per hour to miles per hour*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    float kilometersPerHour, milesPerHour;

    // Input speed in kilometers per hour
    cout << "Enter speed in kilometers per hour: ";
    cin >> kilometersPerHour;

    // Convert kilometers per hour to miles per hour
    milesPerHour = kilometersPerHour * 0.621371;

    // Display the speed in miles per hour
    cout << milesPerHour << " miles per hour" << endl;

    return 0;
}