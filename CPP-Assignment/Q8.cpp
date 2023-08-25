/*Q8. Write C++ program that converts
Centigrade to Fahrenheit.*/
#include <iostream>
using namespace std;

int main() {
    // Declaration
    float celsius, fahrenheit;

    // Input temperature in Centigrade
    cout << "Enter temperature in Centigrade: ";
    cin >> celsius;

    // Convert Centigrade to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}