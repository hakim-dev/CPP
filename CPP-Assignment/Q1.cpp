/*Q1. Write a C++ program to convert a given integer 
(in seconds) to hours, minutes and seconds.*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int totalSeconds;

    // Input the total number of seconds
    cout << "Enter the total number of seconds: ";
    cin >> totalSeconds;

    // Calculate hours, minutes, and seconds
    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    // Display the result
    cout << "There are :"<<"\n";
    cout << "H:M:V :"<<hours<<":"<<minutes<<":"<<seconds;

    return 0;
}