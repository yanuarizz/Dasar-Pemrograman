#include <iostream>
using namespace std;

int main(){
    int a, b, y, x, c, a1, a2, a3, a4, a5, C; // deklarasi variabel untuk menyimpan angka
    float hasil, f, k, r; // deklarasi variabel untuk menyimpan hasil pembagian yang mungkin berupa angka desimal
    cout << "1. Operasi Matematika a^3 + 7" << endl;
    cout << "Masukkan a: ";
    cin >> a; // mengambil input angka pertama dari pengguna
    y = (a*a*a) + 7;
    cout << "Hasil dari a^3 + 7 adalah: " << y << endl; // mencetak hasil dari operasi matematika yang dilakukan
    
    cout << "2. Operasi Matematika ax^2 + bx + c" << endl;
    cout << "Masukkan b: ";
    cin >> b; // mengambil input angka kedua dari pengguna
    cout << "Masukkan x: ";
    cin >> x; // mengambil input angka ketiga dari pengguna
    cout << "Masukkan c: ";
    cin >> c; // mengambil input angka keempat dari pengguna
    y = 0;
    y = a*(x*x) + b*x + c;
    cout << "Hasil dari ax^2 + bx + c adalah: " << y << endl; // mencetak hasil dari operasi matematika yang dilakukan
    
    cout << "3. Operasi Matematika 5 bilangan" << endl;
    cout << "Masukkan 5 bilangan: ";
    cin >> a1 >> a2 >> a3 >> a4 >> a5; // mengambil input 5 bilangan dari pengguna
    y = a1 + a2 + a3 + a4 + a5;
    cout << "Hasil penjumlahan dari 5 bilangan tersebut adalah: " << y << endl;
    hasil = float(y) / 5; // menghitung rata-rata dari 5 bilangan yang dimasukkan dengan membagi jumlahnya dengan 5
    cout << "Rata-rata dari 5 bilangan tersebut adalah: " << hasil << endl;


    cout << "4. Konversi Suhu" << endl;
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> C; // mengambil input suhu dalam Celcius dari pengguna
    f = (C * 9/5) + 32; // mengkonversi suhu dari Celcius ke Fahrenheit dengan menggunakan rumus (C * 9/5) + 32
    k = C + 273.15; // mengkonversi suhu dari Celcius ke Kelvin dengan menambahkan 273.15
    r = (C * 4/5); // mengkonversi suhu dari Celcius ke Reamur dengan menggunakan rumus (C * 4/5)
    cout << "Suhu dalam Kelvin: " << k << endl; // mencetak suhu dalam Kelvin
    cout << "Suhu dalam Fahrenheit: " << f << endl; // mencetak suhu dalam Fahrenheit
    cout << "Suhu dalam Reamur: " << r << endl; // mencetak suhu dalam Reamur



    return 0;
}