#include <iostream>
using namespace std;

int main() {
    // Integer types
    int myInt = 42;               // Standard integer
    short myShort = 32000;        // Smaller integer
    long myLong = 123456789;      // Larger integer
    long long myLongLong = 9876543210; // Very large integer

    // Floating-point types
    float myFloat = 3.14f;        // Single precision
    double myDouble = 3.1415926535; // Double precision
    long double myLongDouble = 2.718281828459045L; // Extended precision

    // Character types
    char myChar = 'A';            // Single character
    wchar_t myWideChar = L'Ω';    // Wide character

    // Boolean type
    bool myBool = true;           // Boolean (true/false)

    // String (from C++ standard library)
    string myString = "Hello, World!";

    // Output all values
    cout << "int: " << myInt << endl;
    cout << "short: " << myShort << endl;
    cout << "long: " << myLong << endl;
    cout << "long long: " << myLongLong << endl;

    cout << "float: " << myFloat << endl;
    cout << "double: " << myDouble << endl;
    cout << "long double: " << myLongDouble << endl;

    cout << "char: " << myChar << endl;
    cout << "wchar_t: " << myWideChar << endl;

    cout << "bool: " << myBool << endl;
    cout << "string: " << myString << endl;

    return 0;
}
