// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the C++ string class
using namespace std;

int main() {
    // -------------------------------
    // 1. Integer types
    // -------------------------------
    int myInt = 42;               // Standard integer
    short myShort = 32000;        // Smaller integer
    long myLong = 123456789;      // Larger integer
    long long myLongLong = 9876543210; // Very large integer
    unsigned int myUnsigned = 100; // Unsigned integer (no negatives)

    cout << "Integers: " << myInt << ", " << myShort << ", " 
         << myLong << ", " << myLongLong << ", " << myUnsigned << endl;

    // -------------------------------
    // 2. Floating-point types
    // -------------------------------
    float myFloat = 3.14f;        // Single precision
    double myDouble = 3.1415926535; // Double precision
    long double myLongDouble = 2.718281828459045L; // Extended precision

    cout << "Floats: " << myFloat << ", " << myDouble 
         << ", " << myLongDouble << endl;

    // -------------------------------
    // 3. Character types
    // -------------------------------
    char myChar = 'A';            // Single character
    wchar_t myWideChar = L'Ω';    // Wide character (Unicode)

    cout << "Characters: " << myChar << " and wide char Ω" << endl;

    // -------------------------------
    // 4. Boolean type
    // -------------------------------
    bool myBool = true;           // Boolean (true/false)
    cout << "Boolean: " << myBool << endl; // true prints as 1

    // -------------------------------
    // 5. String types
    // -------------------------------
    string greeting1 = "Hello";   // C++ string (modern, convenient)
    char greeting2[] = "Hello";   // C-style string (array of chars)

    cout << "C++ string: " << greeting1 << endl;
    cout << "C-style string: " << greeting2 << endl;

    // -------------------------------
    // 6. Demonstrating C-style string functions
    // -------------------------------
    // C-style strings can use functions from <cstring>
    // Example: strlen() to get length
    #include <cstring>
    cout << "Length of C-style string: " << strlen(greeting2) << endl;

    // -------------------------------
    // 7. Void type (special)
    // -------------------------------
    // 'void' means "no value". You can't create a variable of type void.
    // It is used for functions that return nothing.
    // Example:
    // void myFunction() { cout << "This returns nothing"; }

    // -------------------------------
    // Key Notes:
    // -------------------------------
    // - C++ strings (std::string) are easier to use and safer.
    // - C-style strings (char arrays) are older and require manual handling.
    // - All primitive data types (int, float, char, bool) are building blocks.
    // - Use unsigned types when you don’t need negatives.
    // - Always prefer std::string unless you specifically need C functions.

    return 0;
}
