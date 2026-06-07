#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number < 0) {
        number = -number; // Convert to positive
    }
    cout << "The positive number is: " << number << endl;

    return 0;
}