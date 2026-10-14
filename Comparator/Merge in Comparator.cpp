#include <iostream>
#include <list>
using namespace std;

bool cmp(int a, int b) {
    return a > b; // descending অর্ডারে merge হবে
}

int main() {
    list<int> list1 = {70, 80, 90};
    list<int> list2 = {10, 20, 30};

    list1.sort(cmp);
    list2.sort(cmp);

    list1.merge(list2, cmp); // comparator দিয়ে merge

    for(int x : list1) cout << x << " ";
    return 0;
}
