#include <iostream>
#include <list>   // list header
using namespace std;

int main() {
    // একটি লিস্ট তৈরি করা
    list<int> myList = {10, 20, 30, 40, 50};

    // push_back → লিস্টের শেষে নতুন এলিমেন্ট যোগ করে
    myList.push_back(60);

    // push_front → লিস্টের শুরুতে নতুন এলিমেন্ট যোগ করে
    myList.push_front(5);

    // pop_back → লিস্টের শেষের এলিমেন্ট মুছে ফেলে
    myList.pop_back();

    // pop_front → লিস্টের শুরুর এলিমেন্ট মুছে ফেলে
    myList.pop_front();

    // insert → নির্দিষ্ট পজিশনে এলিমেন্ট যোগ করে
    auto it = myList.begin();
    advance(it, 2); // ২ ধাপ এগিয়ে যাওয়া
    myList.insert(it, 25);

    // erase → নির্দিষ্ট পজিশনের এলিমেন্ট মুছে ফেলে
    it = myList.begin();
    advance(it, 3);
    myList.erase(it);

    // remove → নির্দিষ্ট ভ্যালুর সব এলিমেন্ট মুছে ফেলে
    myList.remove(30);

    // remove_if → শর্ত অনুযায়ী এলিমেন্ট মুছে ফেলে
    myList.remove_if([](int x){ return x > 40; });

    // sort → লিস্টকে ascending অর্ডারে সাজায়
    myList.sort();

    // reverse → লিস্টকে উল্টে দেয়
    myList.reverse();

    // unique → ডুপ্লিকেট এলিমেন্ট সরিয়ে দেয় (শুধু পরপর থাকা ডুপ্লিকেট)
    myList.push_back(20);
    myList.push_back(20);
    myList.unique();

    // merge → দুইটা লিস্টকে একসাথে মিশিয়ে দেয় (sorted থাকতে হবে)
    list<int> anotherList = {1, 2, 3};
    anotherList.sort();
    myList.sort();
    myList.merge(anotherList);

    // splice → অন্য লিস্ট থেকে এলিমেন্ট নিয়ে আসে
    list<int> tempList = {100, 200};
    myList.splice(myList.begin(), tempList);

    // assign → নতুন ভ্যালু দিয়ে লিস্টকে রিপ্লেস করে
    myList.assign(5, 7); // ৫টা এলিমেন্ট, প্রতিটা ৭

    // clear → পুরো লিস্ট খালি করে দেয়
    myList.clear();

    // empty → লিস্ট খালি কিনা চেক করে
    if(myList.empty()) {
        cout << "List is empty now!" << endl;
    }

    // size → লিস্টে কয়টা এলিমেন্ট আছে তা জানায়
    myList = {1, 2, 3, 4, 5};
    cout << "Size: " << myList.size() << endl;

    // front → প্রথম এলিমেন্ট রিটার্ন করে
    cout << "Front: " << myList.front() << endl;

    // back → শেষ এলিমেন্ট রিটার্ন করে
    cout << "Back: " << myList.back() << endl;

    // swap → দুইটা লিস্টের কন্টেন্ট অদলবদল করে
    list<int> swapList = {9, 8, 7};
    myList.swap(swapList);

    // সব এলিমেন্ট প্রিন্ট করা
    cout << "Final List: ";
    for(int x : myList) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
