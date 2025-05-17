#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 18)
        cout << "You cannot come to my party."<< endl;
    else if (age == 18)
        cout << "Are you sure you wanna come?" << endl;
    else
        cout << "you should be there at 8" << endl;
    
    return 0;
}