#include <iostream>
using namespace std;

int main(){
    int number, result;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;

    if(number > 10){
        cout << "The number is greater than 10." << endl;
        result = number - 10;
        cout << "Type the number: " << result << endl;
        result = number;
        cout << "input the number: ";
        cin >> number;
        result = result - number;
        cout << "The number is: " << result;
    }
    else{
        cout << "The number is not greater than 10." << endl;
        result = 10 - number;
        cout << "Type the number: " << result << endl;
        result = number;
        cout << "input the number: ";
        cin >> number;
        result = result + number;
        cout << "The number is: " << result;
    }
    
    return 0;
}