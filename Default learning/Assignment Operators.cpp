#include <iostream>
using namespace std;

int main() {
    int x = 5; // start with x = 5

    // Basic assignment
    x = 5;       // x = 5
    cout << "x = 5 → " << x << endl;

    // Add and assign
    x += 3;      // same as x = x + 3
    cout << "x += 3 → " << x << endl;

    // Subtract and assign
    x -= 2;      // same as x = x - 2
    cout << "x -= 2 → " << x << endl;

    // Multiply and assign
    x *= 4;      // same as x = x * 4
    cout << "x *= 4 → " << x << endl;

    // Divide and assign
    x /= 3;      // same as x = x / 3
    cout << "x /= 3 → " << x << endl;

    // Modulus and assign
    x %= 2;      // same as x = x % 2
    cout << "x %= 2 → " << x << endl;

    // Bitwise AND and assign
    x &= 1;      // same as x = x & 1
    cout << "x &= 1 → " << x << endl;

    // Bitwise OR and assign
    x |= 2;      // same as x = x | 2
    cout << "x |= 2 → " << x << endl;

    // Bitwise XOR and assign
    x ^= 3;      // same as x = x ^ 3
    cout << "x ^= 3 → " << x << endl;

    // Right shift and assign
    x >>= 1;     // same as x = x >> 1
    cout << "x >>= 1 → " << x << endl;

    // Left shift and assign
    x <<= 2;     // same as x = x << 2
    cout << "x <<= 2 → " << x << endl;

    return 0;
}
