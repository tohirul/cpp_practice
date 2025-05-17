#include<iostream>
using namespace std;

int addition (int x, int y) {
    return x + y;
}

int main()
{
    cout << "Program to find the sum of two numbers\n";

    int m, n;

    cout << "Enter the first number: ";
    cin >> m;

    cout << "Enter the second number: ";
    cin >> n;

    int sum = addition(m, n);

    cout << "The sum is: " << sum << "\n";

    return 0;
}