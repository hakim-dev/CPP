/*Q13. Write a C++ Program to swap two 
numbers without using third Variable*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int num1, num2;

    // Input the dividend and divisor
    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    // Display values
    cout << "Before Swaping:" << endl;
    cout << "Num1 = " << num1 << " , Num2 = " << num2 << endl;
    
    // Swaping values
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    //Dispay the result
    cout << "After Swaping:" << endl;
    cout << "Num1 = " << num1 << " , Num2 = " << num2 << endl;
}