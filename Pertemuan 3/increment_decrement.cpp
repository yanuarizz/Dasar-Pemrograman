#include <iostream>
using namespace std;

int main(){

    int x = 10, y = 5; // declaration of variables x and y with initial values 10 and 5
    cout << "Initial x: " << x << endl;
    cout << "Initial y: " << y << endl;

    x++; // x becomes 11 (10 + 1)
    cout << "After x++, x = " << x << endl;
    y--; // y becomes 4 (5 - 1)
    cout << "After y--, y = " << y << endl;
    --x; // x becomes 10 (11 - 1)
    cout << "After --x, x = " << x << endl;
    ++y; // y becomes 5 (4 + 1)
    cout << "After ++y, y = " << y << endl;

    return 0;
}