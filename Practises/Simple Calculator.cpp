#include <iostream>
using namespace std;

int main(){
    int choice, a, b;
    float result; 
    cout << "Menu here for you: \n";
    cout << "1. Add 2 numbers \n";
    cout << "2. Substract 2 numbers \n";
    cout << "3. Multiply 2 numbers \n";
    cout << "4. Devide 2 numbers \n\nEnter you choice please: ";

    cin >> choice;
    cout << "Enter number 1: ";
    cin >> a;

    cout << "Enter number 2: ";
    cin >> b;

    cout << "You result is: ";
    if(choice == 1){
        result = (a+b);
    }

    else if(choice == 2){
        if(a>b){
            result = (a-b);
        }

        else{
            result = (b-a);
        }
    }

    else if(choice == 3){
        result = (a*b);
    }

    else if(choice == 4){
        if(a > b){
            result = (float)a / b;   // এখানে a কে float এ কাস্ট করা হয়েছে
        }
        else{
            result = (float)b / a;   // এখানে b কে float এ কাস্ট করা হয়েছে
        }
    }

    if(result){
        cout << result;
    }

    else{
        cout << "Undefined" << endl;
        cout << "You have choosen wrong!";
    }

    return 0;
}