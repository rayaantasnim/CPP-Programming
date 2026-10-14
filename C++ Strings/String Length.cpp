// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the string class
using namespace std;

int main() {
    // Create a string with all uppercase English letters
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // -------------------------------
    // Using .length()
    // -------------------------------
    // .length() returns the number of characters in the string
    // In this case, there are 26 letters
    cout << "The length of the txt string is: " << txt.length() << endl;

    // -------------------------------
    // Using .size()
    // -------------------------------
    // .size() does the exact same thing as .length()
    // Both are interchangeable in C++
    cout << "The size of the txt string is: " << txt.size() << endl;

    // -------------------------------
    // Key Note:
    // -------------------------------
    // For strings, .length() and .size() are identical.
    // They both return the number of characters in the string.
    // Some programmers prefer .length() for readability,
    // while others use .size() because it matches containers like vector.
    // But in practice, they give the same result.

    return 0;
}
