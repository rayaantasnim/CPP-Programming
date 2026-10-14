#include <iostream>
#include <string>
using namespace std;

int main() {
    // Creating auto variables
    // The compiler automatically decides the type based on the assigned value

    auto myNum = 5;                 // int (because 5 is an integer literal)
    auto myFloatNum = 5.99f;        // float (the 'f' suffix makes it float)
    auto myDoubleNum = 9.98;        // double (default for decimal literals)
    auto myLetter = 'D';            // char (single character in quotes)
    auto myBoolean = true;          // bool (true/false value)
    auto myString = string("Hello"); // std::string (explicitly constructed)

    // Printing the values
    cout << "myNum (int): " << myNum << endl;
    cout << "myFloatNum (float): " << myFloatNum << endl;
    cout << "myDoubleNum (double): " << myDoubleNum << endl;
    cout << "myLetter (char): " << myLetter << endl;
    cout << "myBoolean (bool): " << myBoolean << endl;
    cout << "myString (string): " << myString << endl;

    return 0;
}
