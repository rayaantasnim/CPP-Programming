// Example: Boolean Output Formatting in C++
// ------------------------------------------
// This program demonstrates how to use boolean variables
// and how to print them in two different formats:
// 1. "true"/"false" using boolalpha
// 2. "1"/"0" using noboolalpha

#include <iostream>   // Required for input/output operations
using namespace std;  // Allows use of standard library objects without "std::"

// Main function - entry point of the program
int main() {
    // Declare boolean variables
    bool isCodingFun = true;    // true means coding is fun
    bool isFishTasty = false;   // false means fish is not tasty

    // Enable printing "true"/"false" instead of 1/0
    cout << boolalpha;

    // Print values with boolalpha formatting
    cout << isCodingFun << "\n";    // Outputs: true
    cout << isFishTasty << "\n";    // Outputs: false

    // Reset back to default (prints 1/0)
    cout << noboolalpha;

    // Print values again with numeric formatting
    cout << isCodingFun << "\n";    // Outputs: 1
    cout << isFishTasty << "\n";    // Outputs: 0

    // Return 0 indicates successful program execution
    return 0;
}
