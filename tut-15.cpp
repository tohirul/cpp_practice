#include <iostream>
using namespace std;

int sum(int, int );

int main() {

    int x, y;
    cout << "Enter two numbers: ";

    cin >> x >> y;

    cout << "Sum: " << sum(x, y) 
        <<endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}