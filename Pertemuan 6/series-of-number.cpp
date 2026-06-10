#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "input total number: " << endl;
    cin >> n;
    cout << "series of number from small to large: " << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;
    cout << "series of number from large to small: " << endl;
    for(int i = n; i >= 1; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}