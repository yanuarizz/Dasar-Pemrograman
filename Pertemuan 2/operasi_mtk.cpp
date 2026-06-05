#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int a, b;

    // Input nilai a dan b
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    // Operasi Matematika
    cout << "Hasil Penjumlahan: " << a + b << endl;
    cout << "Hasil Pengurangan: " << a - b << endl;
    cout << "Hasil Perkalian: " << a * b << endl;
    if (b != 0) {
        cout << "Hasil Pembagian: " << a / b << endl;
        cout << "Sisa Pembagian: " << a % b << endl;
    } else {
        cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
    }

    return 0;
}   