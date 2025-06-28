#include <iostream>
using namespace std;

// Prototipe fungsi
float hitungLuas(float r);
float hitungKeliling(float r);

int main() {
    float jariJari;
    
    cout << "Masukkan Jari-jari = ";
    cin >> jariJari;

    float luas = hitungLuas(jariJari);
    float keliling = hitungKeliling(jariJari);

    cout << "Luas lingkaran = " << luas << endl;
    cout << "Keliling lingkaran = " << keliling << endl;

    return 0;
}

// Fungsi menghitung luas lingkaran
float hitungLuas(float r) {
    return 3.14 * r * r;
}

// Fungsi menghitung keliling lingkaran
float hitungKeliling(float r) {
    return 2 * 3.14 * r;
}
