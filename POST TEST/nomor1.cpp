// Diketahui data sebagai berikut (1,2,3,4,5). Carilah angka 5 berada pada index berapa saja menggunakan sequential search!

#include <iostream>
using namespace std;

int cariAngka(int data[], int size, int angka){
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (data[i] == angka) {
            count++;
        }
    }

    return count;
}

int main() {
    int data[] = {1, 2, 3, 4, 5, 5};
    int size = sizeof(data) / sizeof(data[0]);
    int angka = 5;

    int jumlahAngka = cariAngka(data, size, angka);

    cout << "Angka " << angka << " ditemukan pada index: " << cariAngka << endl;

    return 0;
}