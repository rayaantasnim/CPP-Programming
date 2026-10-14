#include <iostream>
#include <list>
#include <iterator> // advance এর জন্য দরকার

using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    auto it = myList.begin(); // শুরুতে iterator প্রথম এলিমেন্টে থাকে (10)

    advance(it, 2); // ২ ধাপ এগিয়ে যাওয়া → এখন it 30 এ আছে

    cout << "Iterator এখন যে ভ্যালুতে আছে: " << *it << endl;

    return 0;
}
