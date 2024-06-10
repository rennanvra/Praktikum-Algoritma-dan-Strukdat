// Tulislah fungsi rekursif yang menerima sebuah angka bulat dan mengembalikan nilai faktorial dari n!

#include <iostream>
using namespace std;

int rekursif(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * rekursif(n - 1);
    }
}

int main() {
    int angka;

    cout << "Inputkan bilangan bulat positif: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Inputkan bilangan bulat positif!" << endl;
    } else {
        int hasil = rekursif(angka);
        cout << "Faktorial dari " << angka << " adalah: " << hasil << endl;
    }

    return 0;
}