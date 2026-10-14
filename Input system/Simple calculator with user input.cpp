#include <iostream>
using namespace std;

int main() {
    // Declare integer variables
    int x, y;   // These will store the two numbers
    int sum;    // This will store the result of addition

    // Ask the user for the first number
    cout << "Type a number: ";
    cin >> x;   // Input goes into variable x

    // Ask the user for the second number
    cout << "Type another number: ";
    cin >> y;   // Input goes into variable y

    // Calculate the sum of x and y
    sum = x + y;

    // Print the result
    cout << "Sum is: " << sum;

    return 0;
}
