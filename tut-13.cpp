#include <iostream>
using namespace std;

int main() {

    int itr, arr[itr];

    cout << "Enter the number of iterations: ";
    cin >> itr;

    cout << "Now, enter the array inputs: ";
    //  for loop
    // for (int i = 0; i < itr; i++)
    // {
    //     cin >> arr[i];
    // }

    // while loop
    // int j=0;
    // while (j<itr){
    //     cin >> arr[j];
    //     j++;
    // }

    int k = 0;
    do
    {
        cin >> arr[k];
        k++;
    } while (k < itr);

    cout << "Printing the array output"
    << endl;
     
    for (int x=0; x < itr; x++)
    {    
        cout << arr[x] << endl;
    }

    return 0;
}