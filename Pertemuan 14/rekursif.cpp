#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung fibonacci
int fibonacci(int n) {
    // Base case: fibonacci(0) = 0, fibonacci(1) = 1
    if (n <= 1) {
        return n;
    }
    
    // Recursive case: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    cout << "=== Program Fibonacci Rekursif ===" << endl;
    cout << endl;
    
    // Tampilkan deret fibonacci
    cout << "Deret Fibonacci pertama 10 angka:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }
    
    cout << endl;
    
    // Hitung fibonacci untuk angka tertentu
    int n;
    cout << "Masukkan nilai n untuk menghitung fibonacci(n): ";
    cin >> n;
    
    if (n < 0) {
        cout << "Masukkan angka positif!" << endl;
    } else {
        cout << "fibonacci(" << n << ") = " << fibonacci(n) << endl;
    }
    
    return 0;
}