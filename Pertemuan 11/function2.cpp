#include <iostream>
using namespace std;

int max2(int a, int b){
    return (a > b) ? a : b;
}
int max3(int a, int b, int c){
    return max2(max2(a, b), c);
}
int max4(int a, int b, int c, int d){
    return max2(max3(a, b, c), d);
}
bool isEven(int a){
    return (a % 2 == 0);
}
bool isOdd(int a){
    return (a % 2 != 0);
}
int pangkat(int a, int b){
    int hasil = 1;
    for(int i = 0; i < b; i++){
        hasil *= a;
    }
    return hasil;
}
int sumOfN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
int productOfN(int n){
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    return product;
}
float average(int n, int count){
    int sum = sumOfN(n);
    return static_cast<float>(sum) / n;
}
float avgSumOfN(int n){
    int sum = sumOfN(n);
    return static_cast<float>(sum) / n;
}
float avgProductOfN(int n){
    int product = productOfN(n);
    return static_cast<float>(product) / n;
}
int main(){
    cout << max2(5, 10) << endl;
    cout << max3(5, 10, 15) << endl;
    cout << max4(5, 10, 15, 20) << endl;
    cout << isEven(4) << endl;
    cout << isOdd(3) << endl;
    cout << pangkat(2, 3) << endl;
    cout << sumOfN(5) << endl;
    cout << productOfN(5) << endl;
    cout << avgSumOfN(5) << endl;
    cout << avgProductOfN(5) << endl;
    return 0;
}