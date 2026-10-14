// Include necessary libraries
#include <iostream>   // For input/output (cout, cin)
#include <string>     // For using the string class
using namespace std;

int main() {
    // -------------------------------
    // Case 1: Integer addition
    // -------------------------------
    int x = 10;
    int y = 20;
    int z = x + y;   // Both are integers, so normal arithmetic addition
    cout << "Integer addition result: " << z << endl; // Output: 30

    // -------------------------------
    // Case 2: String concatenation
    // -------------------------------
    string a = "10";
    string b = "20";
    string c = a + b;   // Both are strings, so concatenation happens
    cout << "String concatenation result: " << c << endl; // Output: 1020

    // -------------------------------
    // Case 3: Mixing string + int (ERROR if not converted)
    // -------------------------------
    string d = "10";
    int e = 20;
    // string f = d + e;   // ❌ This would cause a compilation error
    // Because C++ does not know how to add a string and an int directly

    // -------------------------------
    // Case 4: Fixing string + int using to_string()
    // -------------------------------
    string f = d + to_string(e);   // Convert int → string first
    cout << "String + int (fixed) result: " << f << endl; // Output: 1020

    // -------------------------------
    // Extra: Converting string → int
    // -------------------------------
    string numStr = "50";
    int numInt = stoi(numStr);   // stoi = string to integer
    cout << "String to int conversion result: " << numInt + 10 << endl; // Output: 60

    // -------------------------------
    // Extra: Converting int → float
    // -------------------------------
    int intVal = 7;
    float floatVal = static_cast<float>(intVal); // Explicit type casting
    cout << "Int to float conversion result: " << floatVal << endl; // Output: 7.0

    // -------------------------------
    // Extra: Converting float → int
    // -------------------------------
    float pi = 3.14159;
    int approxPi = static_cast<int>(pi); // Truncates decimal part
    cout << "Float to int conversion result: " << approxPi << endl; // Output: 3

    return 0;
}
