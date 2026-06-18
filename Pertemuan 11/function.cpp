#include <iostream>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}
int pangkat2(int a, int b){
    int hasil = 1;
    for(int i = 0; i < b; i++){
        hasil *= a;
    }
    return hasil;
}
float fahrenheit(float c){
    return (c * 9/5) + 32;
}
float celcius(float f){
    return (f - 32) * 5/9;
}

int main(){
    cout << max(5, 10) << endl;
    cout << pangkat2(2, 3) << endl;
    cout << fahrenheit(0) << endl;
    cout << celcius(32) << endl;
    return 0;
}