#include <iostream>
#include <string>
using namespace std;

int main() {
    // Step 1: Create a constant integer
    // Once assigned, this value cannot be changed
    const int myInt = 100;
    cout << myInt << endl;

    // Step 2: Create a constant float
    // Useful for values like PI that should stay fixed
    const float myFloat = 3.1416f;
    cout << myFloat << endl;

    // Step 3: Create a constant string
    // Strings can also be declared as const to prevent modification
    const string myString = "Hello Const!";
    cout << myString << endl;

    // ⚠️ Important:
    // Trying to reassign a const variable will cause a compile-time error
    // Example (this will NOT work):
    // myInt = 200;  // ❌ Error: assignment of read-only variable

    return 0;
}
