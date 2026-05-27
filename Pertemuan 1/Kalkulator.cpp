#include <iostream>
using namespace std;

int main() {
    int a, b; // deklarasi tipe data integer untuk menyimpan angka yang akan dioperasikan   
    float pembagian; // deklarasi tipe data float untuk menyimpan hasil pembagian yang mungkin menghasilkan angka desimal
    cout << "Masukkan angka pertama: ";
    cin >> a; // menggunakan cin untuk mengambil input dari pengguna dan menyimpannya dalam variabel a
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Hasil penjumlahan: " << a + b << endl; // menggunakan operator + untuk melakukan penjumlahan antara a dan b, kemudian mencetak hasilnya
    cout << "Hasil pengurangan: " << a - b << endl; // menggunakan operator - untuk melakukan pengurangan antara a dan b, kemudian mencetak hasilnya
    cout << "Hasil perkalian: " << a * b << endl; // menggunakan operator * untuk melakukan perkalian antara a dan b, kemudian mencetak hasilnya
    pembagian = float(a) / float(b); // melakukan pembagian antara a dan b, namun karena hasilnya mungkin berupa angka desimal, maka kita perlu mengkonversi a dan b menjadi tipe data float sebelum melakukan pembagian
    cout << "Hasil pembagian: " << pembagian << endl; // mencetak hasil pembagian yang sudah disimpan dalam variabel pembagian
    return 0;
}