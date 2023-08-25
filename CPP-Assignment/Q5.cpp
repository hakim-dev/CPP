/*Q5. Write a C++ program that read 5 numbers 
and counts the number of positive 
numbers and negative numbers.*/
#include <iostream>
using namespace std;

int main (){
    // Variable declaration
    int positiveCount = 0;
    int negativeCount = 0;
    int number;

    // Taking every number
    for (int i = 0; i < 5; ++i) {
        cout << "Input the " << (i + 1) << " number: ";
        cin >> number;
        // Checking if number is positive or not
        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        }
    }
    // Display the result
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;

    return 0;
}