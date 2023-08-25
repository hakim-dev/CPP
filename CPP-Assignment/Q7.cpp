/*Q7. Write a C++ program that read 5 numbers 
and sum of all odd values between them.*/
#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int sum = 0;
    int number;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;

        // Check if the number is odd
        if (number % 2 != 0) {
            // Add the odd number to the sum
            sum += number;    
        }
    }
    // Display the result
    cout << "Sum of odd values: " << sum << endl;

    return 0;
}