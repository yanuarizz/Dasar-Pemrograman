#include <iostream>
using namespace std;

int main() {
    // Cetak informasi tentang diri saya
    cout << "Nama saya Yanuar, " << endl;
    cout << "Saya berasal dari Pemalang, " << endl;
    cout << "Saya sedang kuliah di Universita Dian Nuswantoro. " << endl;

    // Cetak informasi tentang diri saya menggunakan variabel
    string nama = "Yanuar";
    string kota = "Pemalang";
    int tahun = 2006;

    // menggunakan variabel 
    cout << "Nama saya " << nama << endl; 
    cout << "Saya berasal dari " << kota << endl;
    cout << "Saya lahir di tahun " << tahun << endl;
    return 0;
}