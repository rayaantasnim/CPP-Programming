#include <iostream>
#include <vector>
#include <algorithm> // std::swap এর জন্য
using namespace std;

int main(){
    vector<int> list = {100, 323, 546, 563, 321, 897, 345, 678};

    int n = list.size();

    // Bubble Sort
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (list[j] > list[j+1]){
                swap(list[j], list[j+1]);  // সঠিক swap
            }
        }
    }

    // এক লাইনে লিস্ট প্রিন্ট
    cout << "Sorted List: ";
    for (int num : list){
        cout << num << " ";
    }
    cout << endl;

    // সবচেয়ে বড় সংখ্যা
    cout << "Largest Number: " << list.back() << endl;

    return 0;
}
