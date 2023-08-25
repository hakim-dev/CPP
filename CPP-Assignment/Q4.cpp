/*Q4. Write a C++ program that reads an integer 
between 1 and 12 and print the month ofthe 
year in English.*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int monthNumber;

    // Input the month number
    std::cout << "Enter a number between 1 and 12: ";
    std::cin >> monthNumber;

    // Check if the input is within the valid range
    if (monthNumber >= 1 && monthNumber <= 12) {
        // Array to store month names
        string months[] = {"January", "February", "March", "April", "May", "June", "July",
                                "August", "September", "October", "November", "December"};

        // Print the corresponding month
        cout << months[monthNumber - 1] << std::endl;
    } else {
        cout << "Invalid input. Please enter a number between 1 and 12." << endl;
    }

    return 0;
}