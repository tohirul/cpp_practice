#include <iostream>
using namespace std;

int main() {

    int a = 4232;
    int b = 2432;

    cout << "The value of a is: " << a
    << endl;
    
    cout << "The value of b is: " << b
    << endl;

    int *p = &a;
    int *q = &b;

    cout << "The address of a is: " << p
    << endl;

    cout << "The address of b is: " << q 
    << endl;

    cout << "The value at address p is: " << *p
    << endl;
    
    cout << "The value at address q is: " << *q
    << endl;
     

    return 0;
}