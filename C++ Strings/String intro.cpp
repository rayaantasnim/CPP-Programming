#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    cout << "Enter your name: ";
    cin >> firstName;

    string greeting = "Hello, " + firstName + "!";
    cout << greeting << endl;

    return 0;
}
