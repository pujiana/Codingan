#include <iostream>
#include <cstdlib>  // Untuk rand() dan srand()
#include <ctime>    // Untuk time()
using namespace std;

int main() {
    // Inisialisasi random seed
    srand(static_cast<unsigned int>(time(0)));

    int angkaRahasia = rand() % 100 + 1; // angka antara 1 - 100
    int tebakan;
    int jumlahTebakan = 0;

    cout << "=== Permainan Tebak Angka ===\n";
    cout << "Saya sudah memilih angka antara 1 sampai 100.\n";
    cout << "Coba tebak angka tersebut!\n";

    do {
        cout << "Masukkan tebakanmu: ";
        cin >> tebakan;
        jumlahTebakan++;

        if (tebakan > angkaRahasia) {
            cout << "Terlalu besar, coba lagi.\n";
        } else if (tebakan < angkaRahasia) {
            cout << "Terlalu kecil, coba lagi.\n";
        } else {
            cout << "Selamat! Kamu benar menebak angka " << angkaRahasia << " dalam "
                 << jumlahTebakan << " tebakan.\n";
        }
    } while (tebakan != angkaRahasia);

    return 0;
}

