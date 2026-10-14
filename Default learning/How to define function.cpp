#include <iostream>
using namespace std;

// পাইথনের def এর জায়গায় এখানে ডেটা টাইপ (যেমন void) দিতে হয়
void myFunction(string name) {
    cout << "Hello " << name << endl;
}

int main() {
    // ফাংশন কল করা (পাইথনের মতোই)
    myFunction("Rahim");
    return 0;
}