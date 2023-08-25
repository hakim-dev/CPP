/*Q10. Write a C++ program to check two given 
integers, and print true if one of them is 30 
or if their sum is 30 else print false*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int num1, num2;

    // Input two integers
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Check if one of them is 30 or their sum is 30
    if (num1 == 30 || num2 == 30 || (num1 + num2) == 30) {
        // Display the result
        cout << "True" << endl;
    } else {
        // Display the result
        cout << "False" << endl;
    }

    return 0;
}