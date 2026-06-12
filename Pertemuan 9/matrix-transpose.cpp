#include <iostream>
using namespace std;

int main(){

    int arr[3][3];

    cout << "input version 2D array: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "input element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "output version 2D array: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "matrik transpose: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}