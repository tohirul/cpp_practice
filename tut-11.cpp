#include <iostream>
using namespace std;

int main() {
    int n, arr[n];
    cout << "Enter the iteration amount"
    << endl;
    cin >> n;
    cout << "Enter the elements"
    << endl;
     
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "-------------------"
    << endl;
     
    for (int i = 0; i < n; i++) {
        if(arr[i] > 500){
            cout << (n - i == 1 ? "\n" : " ");
            break;
        }
        else {
            cout << arr[i] << " ";
            continue;
        }
        
    };

    return 0;
}