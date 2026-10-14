// Include the necessary libraries
#include <iostream>   // For input/output operations (cout, cin)
#include <string>     // For using the string class

// Use the standard namespace so we don’t need to write std:: everywhere
using namespace std;

int main() {
    // -------------------------------
    // Example 1: Using append() method
    // -------------------------------
    // Create two string variables
    string firstName1 = "John ";   // Notice the space at the end
    string lastName1 = "Doe";

    // Append lastName1 to firstName1
    // append() modifies the original string and returns the result
    string fullName1 = firstName1.append(lastName1);

    // Print the full name
    cout << fullName1 << endl;     // Output: John Doe

    // -------------------------------
    // Example 2: Using + operator
    // -------------------------------
    // Create two string variables again
    string firstName2 = "John";
    string lastName2 = "Doe";

    // Concatenate strings using + operator
    // Here we add a space manually between firstName2 and lastName2
    string fullName2 = firstName2 + " " + lastName2;

    // Print the full name
    cout << fullName2 << endl;     // Output: John Doe

    // -------------------------------
    // Example 3: Appending literal text
    // -------------------------------
    // Create a string variable
    string greeting = "Hello";

    // Append another string literal to it
    greeting.append(" World");

    // Print the greeting
    cout << greeting << endl;      // Output: Hello World

    // End of program
    return 0;
}
