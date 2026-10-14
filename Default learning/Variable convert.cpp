#include <iostream>
#include <string>
using namespace std;

int main() {
    // ---------------- Int to Float ----------------
    int myInt = 42;
    float myFloat = static_cast<float>(myInt); // convert int → float
    cout << "Int to Float: " << myFloat << endl;

    // ---------------- Float to Int ----------------
    float pi = 3.1416f;
    int piInt = static_cast<int>(pi); // convert float → int (decimal part removed)
    cout << "Float to Int: " << piInt << endl;

    // ---------------- String to Int ----------------
    string strNum = "123";
    int strToInt = stoi(strNum); // convert string → int using stoi()
    cout << "String to Int: " << strToInt << endl;

    // ---------------- Int to String ----------------
    int age = 25;
    string ageStr = to_string(age); // convert int → string using to_string()
    cout << "Int to String: " << ageStr << endl;

    return 0;
}

//static_cast<float>(myInt) → safely converts an integer to a float.
//static_cast<int>(pi) → converts a float to an integer (drops decimals).
//stoi("123") → converts a string containing digits into an integer.
//to_string(25) → converts an integer into a string.