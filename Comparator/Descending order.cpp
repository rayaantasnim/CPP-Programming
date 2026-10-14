#include <iostream>
#include <list>
using namespace std;

bool cmp(int a, int b) {
    return a > b; // যদি a বড় হয়, তাহলে a আগে আসবে
}

int main() {
    list<int> myList = {50, 20, 40, 10};

    myList.sort(cmp); // descending অর্ডারে সাজাবে

    for(int x : myList) cout << x << " ";
    return 0;
}
