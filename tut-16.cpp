#include <iostream>
using namespace std;

void pointerSwap(int *, int *);
void referenceSwap(int &, int &);

int main()
{

    int a, b;
    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    pointerSwap(&a, &b);
    referenceSwap(a, b);
    return 0;
}

void pointerSwap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    cout << "Swapped Value of a: " << *x
        << endl;
    cout <<"Swapped Value of b: " << *y
        << endl;
}

void referenceSwap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Swapped Value of a: " << x
        << endl;
    cout <<"Swapped Value of b: " << y
        << endl;
}
