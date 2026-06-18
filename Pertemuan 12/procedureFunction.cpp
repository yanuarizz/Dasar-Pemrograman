#include <iostream>
#include <cmath>
using namespace std;

typedef struct koordinat{
    float x;
    float y;
}titik; 
void makePoint(titik &t, float absis, float ordinat){
    t.x = absis;
    t.y = ordinat;
}
void tulisPoint(titik t){
    cout << "Point(" << t.x << ", " << t.y << ")" << endl;
}
void bacaPoint(titik &t){
    cout << "Masukkan nilai x: ";
    cin >> t.x;
    cout << "Masukkan nilai y: ";
    cin >> t.y;
}
float getAbsis(titik t){
    return t.x;
}
float getOrdinat(titik t){
    return t.y;
}
void setAbsis(titik &t, float absis){
    t.x = absis;
}
void setOrdinat(titik &t, float ordinat){
    t.y = ordinat;
}
void cetakGaris(titik t1, titik t2){
    cout << "Garis dari ";
    tulisPoint(t1);
    cout << "ke ";
    tulisPoint(t2);
}
bool isOrigin(titik t){
    return (t.x == 0 && t.y == 0);
}
bool isOnXAxis(titik t){
    return (t.y == 0);
}
bool isOnYAxis(titik t){
    return (t.x == 0);
}
int kuadran(titik t){
    if(t.x > 0 && t.y > 0) return 1;
    else if(t.x < 0 && t.y > 0) return 2;
    else if(t.x < 0 && t.y < 0) return 3;
    else if(t.x > 0 && t.y < 0) return 4;
    else return 0; // jika titik berada di sumbu x atau y
}
void nextY(titik &t){
    t.y += 1;
}
void nextX(titik &t){
    t.x += 1;
}
void mirror(titik &t, char axis){
    if(axis == 'x' || axis == 'X'){
        t.y = -t.y;
    } else if(axis == 'y' || axis == 'Y'){
        t.x = -t.x;
    }
}
void geser(titik &t, float dx, float dy){
    t.x += dx;
    t.y += dy;
}
float jarakPusat(titik t){
    return sqrt(t.x * t.x + t.y * t.y);
}
float jarak2Titik(titik t1, titik t2){
    return sqrt((t2.x - t1.x) * (t2.x - t1.x) + (t2.y - t1.y) * (t2.y - t1.y));
}
int main(){

    titik A;
    float x, y;
    cout << "Masukkan nilai x dan y untuk titik A: ";
    cin >> x >> y;
    makePoint(A, x, y);
    cout << "Titik A: ";
    tulisPoint(A);
    cout << getAbsis(A) << "sebagai absis dan " << getOrdinat(A) << " sebagai ordinat" << endl;
    setOrdinat(A, 5);
    cout << "Proses mengubah ordinat titik A menjadi 5: ";
    tulisPoint(A);
    cout << "isOrigin(A): " << (isOrigin(A) ? "true" : "false") << endl;
    cout << "isOnXAxis(A): " << (isOnXAxis(A) ? "true" : "false") << endl;
    cout << "isOnYAxis(A): " << (isOnYAxis(A) ? "true" : "false") << endl;
    cetakGaris(A, {0, 0});
    titik B;
    cout << "Masukkan nilai x dan y untuk titik B: ";
    cin >> x >> y;
    makePoint(B, x, y);
    cout << "Titik B: ";
    tulisPoint(B);
    cout << "Kuadran titik A: " << kuadran(A) << endl;
    cout << "Kuadran titik B: " << kuadran(B) << endl;
    nextY(A);
    cout << "Proses menambah ordinat titik A sebesar 1: ";
    tulisPoint(A);
    nextX(A);
    cout << "Proses menambah absis titik A sebesar 1: ";
    tulisPoint(A);
    mirror(A, 'x');
    cout << "Proses mencerminkan titik A terhadap sumbu x: ";
    tulisPoint(A);
    mirror(B, 'y');
    cout << "Proses mencerminkan titik B terhadap sumbu y: ";
    tulisPoint(B);
    geser(A, 2, 3);
    cout << "Proses menggeser titik A sebesar (2, 3): ";
    tulisPoint(A);
    cout << "Jarak titik A ke pusat: " << jarakPusat(A) << endl;
    cout << "Jarak antara titik A dan B: " << jarak2Titik(A, B) << endl;


    return 0;
}