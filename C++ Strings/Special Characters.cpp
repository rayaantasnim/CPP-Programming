// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the string class
using namespace std;

int main() {
    // -------------------------------
    // Example 1: Escaping double quotes
    // -------------------------------
    // Use \" to insert double quotes inside a string
    string txt1 = "We are the so-called \"Vikings\" from the north.";
    cout << txt1 << endl; // Output: We are the so-called "Vikings" from the north.

    // -------------------------------
    // Example 2: Escaping single quotes
    // -------------------------------
    // Use \' to insert a single quote inside a string
    string txt2 = "It\'s alright.";
    cout << txt2 << endl; // Output: It's alright.

    // -------------------------------
    // Example 3: Escaping backslash
    // -------------------------------
    // Use \\ to insert a backslash character
    string txt3 = "The character \\ is called backslash.";
    cout << txt3 << endl; // Output: The character \ is called backslash.

    // -------------------------------
    // Example 4: New line escape
    // -------------------------------
    // Use \n to insert a new line
    string txt4 = "Hello\nWorld!";
    cout << txt4 << endl;
    // Output:
    // Hello
    // World!

    // -------------------------------
    // Example 5: Tab escape
    // -------------------------------
    // Use \t to insert a horizontal tab
    string txt5 = "Hello\tWorld!";
    cout << txt5 << endl;
    // Output: Hello    World!   (with a tab space between)

    // -------------------------------
    // Key Notes:
    // -------------------------------
    // \"  → Double quote
    // \'  → Single quote
    // \\  → Backslash
    // \n  → New line
    // \t  → Tab space

    return 0;
}
