#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

inline int findOdd(int x) {
    int p = 2;

    return (x % p == 0 ? 0 : 1);
}

int main() {

    int a, b;

    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    cout << "The sum of a and b is: " << sum(a,b)
    << endl;

    int q;
    cout << "Enter the number to find even or odd"
         << endl;
    cin >> q;
    cout << "The number is " << (findOdd(q) == 0 ? "even" : "odd")
    << endl;
     

    return 0;
}