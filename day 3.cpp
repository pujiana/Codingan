#include <iostream>
using namespace std;

// Prototipe fungsi dengan referensi
void tambah(int &c, int &d);

int main() {
    int a = 3, b = 7;

    cout << "Nilai Sebelum Pemanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl << endl;

    tambah(a, b); // Call by reference

    cout << "Nilai Setelah Pemanggilan Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Fungsi dengan parameter referensi
void tambah(int &c, int &d) {
    c = 10;
    d = 12;

    cout << "Nilai di Akhir Fungsi Tambah()" << endl;
    cout << "c = " << c << " d = " << d << endl << endl;
}
