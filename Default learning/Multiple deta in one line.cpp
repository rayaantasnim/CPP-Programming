#include <iostream>
#include <string>
using namespace std;

int main() {
    // Integer example
    int x = 5, y = 6, z = 50;
    cout << "Integer sum (x + y + z): " << x + y + z << endl;

    int a, b, c;
    a = b = c = 50;
    cout << "Integer sum (a + b + c): " << a + b + c << endl;

    // Float example
    float p = 5.5, q = 6.5, r = 10.0;
    cout << "Float sum (p + q + r): " << p + q + r << endl;

    float m, n, o;
    m = n = o = 2.5;
    cout << "Float sum (m + n + o): " << m + n + o << endl;

    // String example
    string s1 = "Hello", s2 = " ", s3 = "World!";
    cout << "String concatenation: " << s1 + s2 + s3 << endl;

    string t1, t2, t3;
    t1 = t2 = t3 = "Repeat";
    cout << "String concatenation: " << t1 + " " + t2 + " " + t3 << endl;

    return 0;
}
