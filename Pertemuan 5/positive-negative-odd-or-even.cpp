#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Input a number: ";
    cin >> number;
    if (number%2 == 0 && number != 0) {
        cout << number << " is a positive even number." << endl;
    }
    else if(number%2 == 0 && number != 0){
        cout << number << " is a negative even number." << endl;
    } 
    else if (number < 0 && number%2 != 0) {
        cout << number << " is a negative odd number." << endl;
    } 
    else if (number > 0 && number%2 != 0) {
        cout << number << " is a positive odd number." << endl;
    } 
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}