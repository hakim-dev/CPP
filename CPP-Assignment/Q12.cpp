/*Q12. Write a C++ Program to swap two 
numbers using third Variable*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int num1, num2, temp;

    // Input the dividend and divisor
    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    // Display values
    cout << "Before Swaping:" << endl;
    cout << "Num1 = " << num1 << " , Num2 = " << num2 << endl;
    
    // Swaping values
    temp = num1;
    num1 = num2;
    num2 = temp;

    //Dispay the result
    cout << "After Swaping:" << endl;
    cout << "Num1 = " << num1 << " , Num2 = " << num2 << endl;
}



