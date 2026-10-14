#include <iostream>
#include <list>
#include <iterator> // advance ফাংশনের জন্য

using namespace std;

int main() {
    list<int> myList = {10, 20, 30, 40, 50};

    // ধরো আমরা 1 নম্বর ইনডেক্স (20) আর 3 নম্বর ইনডেক্স (40) swap করতে চাই
    auto it1 = myList.begin();
    advance(it1, 1); // 1 নম্বর ইনডেক্সে যাওয়া

    auto it2 = myList.begin();
    advance(it2, 3); // 3 নম্বর ইনডেক্সে যাওয়া

    // swap করা
    std::swap(*it1, *it2);

    // আউটপুট দেখা
    cout << "After swapping: ";
    for(int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
