#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    cout << "x = " << x << ", y = " << y << "\n\n";

    // Equal to (==)
    if (x == y) {
        cout << "x == y is TRUE\n";
    } 
    
    else {
        cout << "x == y is FALSE\n";
    }

    // Not equal (!=)
    if (x != y) {
        cout << "x != y is TRUE\n";
    } 
    
    else {
        cout << "x != y is FALSE\n";
    }

    // Greater than (>)
    if (x > y) {
        cout << "x > y is TRUE\n";
    } else {
        cout << "x > y is FALSE\n";
    }

    // Less than (<)
    if (x < y) {
        cout << "x < y is TRUE\n";
    } else {
        cout << "x < y is FALSE\n";
    }

    // Greater than or equal to (>=)
    if (x >= y) {
        cout << "x >= y is TRUE\n";
    } else {
        cout << "x >= y is FALSE\n";
    }

    // Less than or equal to (<=)
    if (x <= y) {
        cout << "x <= y is TRUE\n";
    } else {
        cout << "x <= y is FALSE\n";
    }

    return 0;
}
