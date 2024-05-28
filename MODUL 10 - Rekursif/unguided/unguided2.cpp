#include <iostream>
using namespace std;

int faktorialA(int n);
int faktorialB(int n);

// Fungsi faktorialA: memulai perhitungan faktorial
int faktorialA(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * faktorialB(n - 1);
    }
}

// Fungsi faktorialB: memanggil kembali faktorialA
int faktorialB(int n) {
    return faktorialA(n);
}

int main() {
    int bilangan;

    // Pengguna menginputkan bilangan
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memastikan bahwa inputan dari pengguna adalah bilangan bulat positif
    if (bilangan < 0) {
        cout << "Masukkan bilangan bulat positif!" << endl;
    } else {
        int hasil = faktorialA(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
