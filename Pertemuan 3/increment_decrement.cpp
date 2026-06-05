#include <iostream>
using namespace std;

int main(){

    int x = 10, y = 5; // deklarasi variabel x dan y dengan nilai awal 10 dan 5
    cout << "Nilai awal x: " << x << endl;
    cout << "Nilai awal y: " << y << endl;

    x++; // x sekarang menjadi 11 (10 + 1)
    cout << "Setelah x++, nilai x: " << x << endl;
    y--; // y sekarang menjadi 4 (5 - 1)
    cout << "Setelah y--, nilai y: " << y << endl;
    --x; // x sekarang menjadi 10 (11 - 1)
    cout << "Setelah --x, nilai x: " << x << endl;
    ++y; // y sekarang menjadi 5 (4 + 1)

    return 0;
}