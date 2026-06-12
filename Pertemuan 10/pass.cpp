#include <iostream>
using namespace std;

int passByValue(int a){
    a = a + 10;
    return a;
}
int passByReference(int &a){
    a = a + 10;
    return a;
}
int main(){

    int x = 5;
    cout << "before pass by value: " << x << endl;
    int resultValue = passByValue(x);
    cout << "after pass by value: " << x << endl;
    cout << "result of pass by value: " << resultValue << endl; 
    cout << "before pass by reference: " << x << endl;
    int resultReference = passByReference(x);
    cout << "after pass by reference: " << x << endl;
    cout << "result of pass by reference: " << resultReference << endl;

    return 0;
}