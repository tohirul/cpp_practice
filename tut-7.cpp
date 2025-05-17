#include <iostream>
using namespace std;


void check_sum (int sum, int checker) {
    if(sum > checker)
        cout << "Variable c is smaller than the sum of a and b." << endl;
    else if (sum < checker)
        cout << "Variable c is greater than the sum of a and b." << endl;
    else
        cout << "Variable c is equal to the sum of a and b." << endl;
}

int main() {

    int a, b, c;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;
    check_sum(a + b, c);

    return 0;
}