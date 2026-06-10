#include <iostream>
using namespace std;

int main(){

    int rows;
    cout << "input number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows - i + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= rows; j++){
            cout << i * j << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}