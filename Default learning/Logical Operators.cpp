#include <iostream>
using namespace std;

int main() {
    int x = 7;
    int y = 12;

    cout << "x = " << x << ", y = " << y << "\n\n";

    // Logical AND (&&)
    // TRUE হবে তখনই যখন দুইটা শর্তই সত্য হয়
    if (x < 10 && y > 10) {
        cout << "x < 10 && y > 10 is TRUE\n";
    } else {
        cout << "x < 10 && y > 10 is FALSE\n";
    }

    // Logical OR (||)
    // TRUE হবে যদি অন্তত একটি শর্ত সত্য হয়
    if (x < 5 || y < 15) {
        cout << "x < 5 || y < 15 is TRUE\n";
    } else {
        cout << "x < 5 || y < 15 is FALSE\n";
    }

    // Logical NOT (!)
    // শর্তের ফলাফল উল্টে দেয়: TRUE হলে FALSE, FALSE হলে TRUE
    if (!(x < 10 && y < 10)) {
        cout << "!(x < 10 && y < 10) is TRUE\n";
    } else {
        cout << "!(x < 10 && y < 10) is FALSE\n";
    }

    return 0;
}
