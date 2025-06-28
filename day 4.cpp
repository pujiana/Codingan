#include <iostream>
using namespace std;

// Prototipe fungsi
void tambah(int m, int n);

int main() {
    int a = 5, b = 9;

    cout << "Nilai Sebelum Fungsi Digunakan" << endl;
    cout << "a = " << a << " b = " << b << endl << endl;

    tambah(a, b); // Call by value

    cout << "Nilai Setelah Fungsi Digunakan" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Fungsi dengan parameter Call by Value
void tambah(int m, int n) {
    m = m + 5;
    n = n + 7;

    cout << "Nilai di dalam Fungsi Tambah()" << endl;
    cout << "m = " << m << " n = " << n << endl << endl;
}
