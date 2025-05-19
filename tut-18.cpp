#include <iostream>
using namespace std;

int factorial(int);
int fibonacci(int);

int main() {

    // find factorial of a number;
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Factorial of number " << x << " is: " << factorial(x)
    << endl;
     
    cout << "Fibonacci of number " << x << " is: " << fibonacci(x)
    << endl;

    return 0;
}

int factorial(int n){
    if(n <= 1) 
        return 1;
    
    return n * (factorial(n - 1));
}

int fibonacci(int x) {
    if(x < 2)
        return 1;

    return fibonacci(x - 2) + fibonacci(x - 1);
}