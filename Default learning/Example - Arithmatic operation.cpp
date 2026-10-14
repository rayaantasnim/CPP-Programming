#include <iostream>
using namespace std;

int main() {
    // Start with 0 people in the room
    int peopleInRoom = 0;

    // 3 people enter (increment by 1 each time)
    peopleInRoom++; // now 1
    peopleInRoom++; // now 2
    peopleInRoom++; // now 3

    cout << peopleInRoom << "\n"; // Output: 3

    // 1 person leaves (decrement by 1)
    peopleInRoom--; // now 2

    cout << peopleInRoom << "\n"; // Output: 2

    return 0;
}
