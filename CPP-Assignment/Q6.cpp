/*Q6. Write a C++ program that read 5 numbers and 
counts the number of positive numbers and print 
the average of all positive values.*/
#include <iostream>
using namespace std;

int main (){
    // Variable declaration
    int positiveCount = 0;
    int positivesum = 0;
    int number;
    float average;

    // Taking every number
    for (int i = 0; i < 5; ++i) {
        cout << "Input the " << (i + 1) << " number: ";
        cin >> number;
        // Checking if number is positive or not
        if (number > 0) {
            positiveCount++;
            // Adding positive numbers
            positivesum = positivesum + number;
        } 
    }
    // Averaging
    average = positivesum/positiveCount;

    // Display the result
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Average value of the said positive numbers: " << average << endl;

    return 0;
}