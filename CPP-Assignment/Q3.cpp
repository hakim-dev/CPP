/*Q3. Write a C++ program that reads two integers
and checks whether they are multiplied or not.*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int num1, num2, result;

    // Input the two integers and the expected result
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;


    // Check if num2 is divisible by num1
    if (num2 % num2 == 0) {
        // Display the result
        cout << "Multiplied!" << endl;
    } else {
        // Display the result
        cout << "Not Multiplied" << endl;
    }

    return 0;
}
