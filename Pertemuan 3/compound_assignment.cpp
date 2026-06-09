#include <iostream>
using namespace std;

int main(){

    int x = 5, y = 3; // declaration of variables x and y with initial values 5 and 3
    cout << "Initial x: " << x << endl; // print initial x
    cout << "Initial y: " << y << endl; // print initial y

    x += 1; // x becomes 6 (5 + 1)
    cout << "After x += 1, x = " << x << endl; // print x after addition
    x += y; // x becomes 8 (6 + 2)
    cout << "After x += y, x = " << x << endl; // print x after addition
    y -= 1; // y becomes 2 (3 - 1)
    cout << "After y -= 1, y = " << y << endl; // print y after subtraction
    y -= x; // y becomes 15 (5 * 4)
    cout << "After y -= x, y = " << y << endl; // print y after subtraction
    y *= x + 1; // y becomes 45 (15 * 3)
    cout << "After y *= x + 1, y = " << y << endl; // print y after multiplication
    y /= 3; // y becomes 15 (45 / 3)
    cout << "After y /= 3, y = " << y << endl; // print y after division
    x %= y; // x becomes 2 (5 % 3)
    cout << "After x %= y, x = " << x << endl;

    return 0;
}