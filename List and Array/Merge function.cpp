#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> list1 = {10, 20, 30};
    list<int> list2 = {40, 50, 60};

    list1.merge(list2); // list1 এ list2 মিশে যাবে

    cout << "Merged List: ";
    for(int x : list1) cout << x << " ";
    return 0;
}
