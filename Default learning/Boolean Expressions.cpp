// Example: Comparison Operators in C++
// -------------------------------------
// This program demonstrates how to use comparison operators
// such as > (greater than), == (equal to), and how to store
// the result of a comparison in a boolean variable.

#include <iostream>   // Required for input/output operations
using namespace std;  // Allows use of standard library objects without "std::"

// Main function - entry point of the program
int main() {
    // Example 1: Greater than operator
    int x = 10;
    int y = 9;
    cout << (x > y) << "\n";   // Outputs: 1 (true), because 10 is greater than 9

    // Example 2: Equal to operator
    x = 10;
    cout << (x == 10) << "\n"; // Outputs: 1 (true), because x is equal to 10

    // Example 3: Comparing two constants
    cout << (10 == 15) << "\n"; // Outputs: 0 (false), because 10 is not equal to 15

    // Example 4: Storing comparison result in a boolean
    x = 10;
    y = 9;
    bool isGreater = x > y;    // Stores the result of (x > y) in a boolean variable
    cout << isGreater << "\n"; // Outputs: 1 (true)

    // Return 0 indicates successful program execution
    return 0;
}
