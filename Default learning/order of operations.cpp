#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 2;

    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n\n";

    // 1. Parentheses () -> সবচেয়ে বেশি প্রাধান্য
    int result1 = (a + b) * c; // আগে (a+b) হবে, তারপর *c
    cout << "(a + b) * c = " << result1 << endl;

    // 2. Multiplication, Division, Modulus (*, /, %)
    int result2 = a + b * c; // আগে b*c হবে, তারপর a যোগ হবে
    cout << "a + b * c = " << result2 << endl;

    int result3 = b / c + a; // আগে b/c হবে, তারপর +a
    cout << "b / c + a = " << result3 << endl;

    int result4 = b % a; // Modulus -> ভাগশেষ
    cout << "b % a = " << result4 << endl;

    // 3. Addition, Subtraction (+, -)
    int result5 = a + b - c; // বাম থেকে ডানে কাজ করে
    cout << "a + b - c = " << result5 << endl;

    // 4. Comparison (> , < , >= , <=)
    cout << "a > c = " << (a > c) << endl;   // TRUE হলে 1, FALSE হলে 0
    cout << "a <= b = " << (a <= b) << endl;

    // 5. Equality (== , !=)
    cout << "a == c = " << (a == c) << endl;
    cout << "a != b = " << (a != b) << endl;

    // 6. Logical AND (&&)
    cout << "(a < b && b > c) = " << (a < b && b > c) << endl;

    // 7. Logical OR (||)
    cout << "(a < c || b > c) = " << (a < c || b > c) << endl;

    // 8. Assignment (=)
    int d = a + b; // এখানে d তে a+b এর মান বসানো হলো
    cout << "d = a + b = " << d << endl;

    return 0;
}
