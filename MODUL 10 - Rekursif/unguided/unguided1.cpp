#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * faktorial(n - 1);
    }
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
        int hasil = faktorial(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
