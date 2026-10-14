#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector to store multiple integers
    vector<int> numbers;

    // Ask user how many numbers they want to enter
    int n;
    cout << "How many numbers? ";
    cin >> n;

    // Take n numbers as input
    cout << "Enter " << n << " numbers separated by space: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;        // read one number
        numbers.push_back(value); // store it in the vector
    }

    // Print the list of numbers
    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
