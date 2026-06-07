#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "Enter a two-digit number: ";
    cin >> number;

    if(number < 10 || number > 99){
        cout << "Please enter a valid two-digit number" << endl;
        cin >> number;
    }
    number = (number % 10) * 10 + (number / 10);
    cout << "The reversed number is: " << number << endl;
    return 0;
}