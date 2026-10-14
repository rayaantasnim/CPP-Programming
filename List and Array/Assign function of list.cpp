#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {1, 2, 3, 4, 5};

    // assign দিয়ে নতুন করে ফেলা
    myList.assign(5, 7);  
    // মানে এখন লিস্টে থাকবে ৫টা এলিমেন্ট, প্রতিটা ৭

    for(int x : myList) {
        cout << x << " ";
    }
    return 0;
}
