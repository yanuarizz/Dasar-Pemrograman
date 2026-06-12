#include <iostream>
using namespace std;

int main(){

    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "input version 2D array: " << endl;
    int arr2[2][3];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << "input element [" << i << "][" << j << "]: ";
            cin >> arr2[i][j];
        }
    }

    cout << "output version 2D array: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}