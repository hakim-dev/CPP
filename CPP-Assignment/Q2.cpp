/*Q2.Write a C++ program to convert a given integer 
(in days) to years, months and days, assumes that 
all months have 30 days and all years have 365 days.
*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int totalDays;

    // Input the total number of days
    cout << "Enter the total number of days: ";
    cin >> totalDays;

    // Calculate years, months, and days
    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;

    // Display the result
    cout << years << " Year(s)" << endl;
    cout << months << " Month(s)" << endl;
    cout << days << " Day(s)" << endl;

    return 0;
}