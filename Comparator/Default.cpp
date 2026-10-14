#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {50, 20, 40, 10};

    myList.sort(); // ডিফল্ট ascending অর্ডারে সাজাবে

    for(int x : myList) cout << x << " ";
    return 0;
}
