// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the string class
using namespace std;

int main() {
    // -------------------------------
    // Example 1: Using cin >> for single word input
    // -------------------------------
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName;   // Reads input until first space
    cout << "Your name is: " << firstName << endl;
    // If you type: John
    // Output: Your name is: John

    // -------------------------------
    // Example 2: Using cin >> for full name (problem)
    // -------------------------------
    string fullName1;
    cout << "Type your full name: ";
    cin >> fullName1;   // Only reads up to the first space
    cout << "Your name is: " << fullName1 << endl;
    // If you type: John Doe
    // Output: Your name is: John   (Doe is ignored!)

    // -------------------------------
    // Example 3: Using getline() for full line input
    // -------------------------------
    // getline() reads the entire line including spaces
    string fullName2;
    cout << "Type your full name: ";
    cin.ignore(); // Clear leftover newline from previous cin
    getline(cin, fullName2);
    cout << "Your name is: " << fullName2 << endl;
    // If you type: John Doe
    // Output: Your name is: John Doe

    // -------------------------------
    // Key Notes:
    // -------------------------------
    // - cin >> variable → stops at space, good for single words.
    // - getline(cin, variable) → reads the whole line, good for sentences or names with spaces.
    // - Always use cin.ignore() before getline() if you previously used cin >>,
    //   otherwise getline() may capture the leftover newline.

    return 0;
}
