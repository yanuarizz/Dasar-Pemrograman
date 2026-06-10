#include <iostream>
using namespace std;

int main(){
    int number = 5;
    int sum = 0;

    for(int i = 0; i < number; i++){
        int num;
        cout << "input number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }
    cout << "sum of the numbers is: " << sum << endl;

    return 0;
}