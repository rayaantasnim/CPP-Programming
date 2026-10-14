#include <iostream>
using namespace std;

int main() {
    int a = 576, b = 345;
    auto float_value = 356875.53663;

    if (float_value > a){
        cout << float_value << " is bigger than the value: " << a << endl;
    }

    else if (float_value < a){
        cout << float_value << " is smaller than the value: " << a << endl;
    }

    else{
        cout << float_value << " and" << a << " are equal" << endl;
    }
    //Let's explore the arithmatic operations

    cout << "\n\nThe value of the declared variables : \n" << "The value of variable A: " << (a) << "\nThe value of variable B: " << (b) << endl;
    cout << "The addition value of these is here: " << (a+b) << endl;
    cout << "The substracted value of these is here: " << (a-b) << endl;
    cout << "The multiplied value of these is here: " << (a*b) << endl;
    cout << "The devided value of these is here: " << (a/b) << endl;
    cout << "The devided integer converted value of these is here: " << int(a/b) << endl;
    cout << "The modulas value of these is here: " << (a%b) << endl;

    return 0;
}