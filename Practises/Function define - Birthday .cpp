#include <iostream>
using namespace std;

void HappyBirthDay(string Name, int Age){
    cout << "Happy Birthday to you, " << Name << endl;
    cout << "Many many happy returns for the day!" <<endl;
    cout << "You have become more matured in your " << Age << "th birthday!" <<endl;
}

int main(){
    string name;
    int age;
    cout << "Enter your name please: ";
    cin >> name;

    cout << "Enter your new age please: ";
    cin >> age;

    HappyBirthDay(name, age);
    return 0;
}