#include <iostream>

using namespace std;
typedef struct anggota_komunitas{
    string nama, asal_kota, tipe_kartu;
    int tahun_masuk, masa_keanggotaan;
}agt;
void input(agt m[], int n);
void cetak(agt m[], int n);
//int anggotaTerlama(int agt m[], int n);
//string namaAnggotaTerlama(int agt m[], int n);
int main()
{
    agt iyan;
    iyan.nama="Iyan"; iyan.asal_kota="Pemalang"; iyan.tahun_masuk=2022;
    agt keanggotaan[40];
    keanggotaan[0].nama="Yanu"; keanggotaan[0].asal_kota="Semarang"; keanggotaan[0].tahun_masuk=2025;

    int i, n, masa_keanggotaan;

    cout << "Masukkan berapa anggota yang diinput: "; cin >> n;
    input(keanggotaan, n);
    cetak (keanggotaan, n);
    return 0;
}
void input(agt m[], int n){
    int masa_keanggotaan;
    for(int i=0; i<n; i++){
        cout << "Anggota ke - " << i+1 << endl;
        cout << "Masukkan nama: "; cin >> m[i].nama;
        cout << "Masukkan asal kota: "; cin >> m[i].asal_kota;
        cout << "Masukkan tahun masuk: "; cin >> m[i].tahun_masuk;
        masa_keanggotaan = 2026 - m[i].tahun_masuk;
        cout << "= " << masa_keanggotaan << endl;
        if(masa_keanggotaan == 2)
            cout << "Silver" << endl;
        else if(masa_keanggotaan == 3 || masa_keanggotaan == 4 || masa_keanggotaan == 5)
            cout << "Gold" << endl;
        else
            cout << "Platinum" << endl;
    }
}
void cetak(agt m[], int n){
    cout << "Nama   || Th_Masuk || Asalkota  || Masa Keanggotaan || Tipekartu" << endl;
    for(int i=0; i<n; i++){
        cout << m[i].nama << "\t||" << m[i].tahun_masuk << "\t||" << m[i].asal_kota;
    }
}