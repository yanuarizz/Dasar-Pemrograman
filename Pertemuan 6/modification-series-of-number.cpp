#include <iostream>
using namespace std;

int main(){
    int start, end;
    cout << "input start number: " << endl;
    cin >> start;
    cout << "input end number: " << endl;
    cin >> end;
    cout << "series of number from small to large: " << endl;
    for(int i = start; i <= end; i++){
        cout << i << " ";
    }
    cout << endl;
    cout << "series of number from large to small: " << endl;
    for(int i = end; i >= start; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}