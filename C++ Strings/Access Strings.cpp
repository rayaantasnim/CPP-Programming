// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the string class
using namespace std;

int main() {
    // -------------------------------
    // Accessing characters with []
    // -------------------------------
    string myString = "Hello";

    // Print the first character (index 0)
    cout << myString[0] << endl;   // Output: H

    // Print the last character using length() - 1
    cout << myString[myString.length() - 1] << endl; // Output: o

    // -------------------------------
    // Modifying characters with []
    // -------------------------------
    myString[0] = 'J';   // Change first character from 'H' to 'J'
    cout << myString << endl;     // Output: Jello

    // -------------------------------
    // Reset string for next example
    // -------------------------------
    myString = "Hello";
    cout << myString << endl;     // Output: Hello

    // -------------------------------
    // Accessing characters with .at()
    // -------------------------------
    // .at() works like [], but it throws an error if index is out of range
    cout << myString.at(0) << endl;   // First character → H
    cout << myString.at(1) << endl;   // Second character → e
    cout << myString.at(myString.length() - 1) << endl; // Last character → o

    // -------------------------------
    // Modifying characters with .at()
    // -------------------------------
    myString.at(0) = 'J';   // Change first character safely
    cout << myString << endl;   // Output: Jello

    // -------------------------------
    // Key Notes:
    // -------------------------------
    // - [] is faster but unsafe (no bounds checking).
    // - .at() is safer because it checks if the index is valid.
    // - Both can be used to read and modify characters in a string.

    return 0;
}
