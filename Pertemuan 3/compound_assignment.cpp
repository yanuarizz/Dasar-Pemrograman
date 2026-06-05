#include <iostream>
using namespace std;

int main(){

    int x = 5, y = 3; // deklarasi variabel x dan y dengan nilai awal 5 dan 3
    cout << "Nilai awal x: " << x << endl; // mencetak nilai awal x
    cout << "Nilai awal y: " << y << endl; // mencetak nilai awal y

    x += 1; // x sekarang menjadi 6 (5 + 1)
    cout << "Setelah x += 1, nilai x: " << x << endl; // mencetak nilai x setelah penambahan
    x += y; // x sekarang menjadi 8 (6 + 2)
    cout << "Setelah x += y, nilai x: " << x << endl; // mencetak nilai x setelah penambahan
    y -= 1; // y sekarang menjadi 2 (3 - 1)
    cout << "Setelah y -= 1, nilai y: " << y << endl; // mencetak nilai y setelah pengurangan
    y -= x; // y sekarang menjadi 15 (5 * 4)
    cout << "Setelah y -= x, nilai y: " << y << endl; // mencetak nilai y setelah pengurangan
    y *= x + 1; // y sekarang menjadi 45 (15 * 3)
    cout << "Setelah y *= x + 1, nilai y: " << y << endl; // mencetak nilai y setelah perkalian
    y /= 3; // y sekarang menjadi 15 (45 / 3)
    cout << "Setelah y /= 3, nilai y: " << y << endl; // mencetak nilai y setelah pembagian
    x %= y; // x sekarang menjadi 2 (5 % 3)
    cout << "Setelah x %= y, nilai x: " << x << endl;

    return 0;
}