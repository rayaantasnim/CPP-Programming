// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the string class
using namespace std;

int main() {
    // -------------------------------
    // Example: Using cin >> a >> b
    // -------------------------------
    string a, b;

    cout << "Type two words (separated by space): ";
    cin >> a >> b;   // Reads first word into 'a', second word into 'b'

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // -------------------------------
    // Explanation:
    // -------------------------------
    // - cin >> reads input until it finds a space or newline.
    // - If you type: John Dae
    //   → a = "John"
    //   → b = "Dae"
    // - If you type: John Doe Smith
    //   → a = "John"
    //   → b = "Doe"
    //   (Smith is ignored because only two variables are declared)

    // -------------------------------
    // Key Note:
    // -------------------------------
    // cin >> a >> b is useful when you want to capture
    // multiple separate words quickly.
    // But it cannot capture full sentences with spaces.
    // For that, use getline().

    return 0;
}
