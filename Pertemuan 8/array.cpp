#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "input n for array: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "input number " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "the numbers in the array are: " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}