#include <iostream>
using namespace std;

int main() {
    // ---------------- Arithmetic Operators ----------------
    int x = 10;
    int y = 3;

    cout << (x + y) << "\n"; // Addition: 10 + 3 = 13
    cout << (x - y) << "\n"; // Subtraction: 10 - 3 = 7
    cout << (x * y) << "\n"; // Multiplication: 10 * 3 = 30
    cout << (x / y) << "\n"; // Division: 10 / 3 = 3 (integer division, decimal part ignored)
    cout << (x % y) << "\n"; // Modulus: remainder of 10 / 3 = 1

    // ---------------- Increment / Decrement ----------------
    int z = 5;
    ++z; // Pre-increment: increase z by 1 before using it
    cout << z << "\n"; // Prints 6

    --z; // Pre-decrement: decrease z by 1 before using it
    cout << z << "\n"; // Prints 5

    // ---------------- Integer vs Decimal Division ----------------
    int xi = 10;
    int yi = 3;
    cout << (xi / yi) << "\n";   // Integer division, result is 3

    double a = 10.0;
    double b = 3.0;
    cout << (a / b) << "\n";     // Decimal division, result is 3.333...

    return 0;
}
