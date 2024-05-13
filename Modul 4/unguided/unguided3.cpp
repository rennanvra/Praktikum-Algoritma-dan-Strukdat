#include <iostream>
using namespace std;

int hitungAngka(int data[], int size, int angka) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (data[i] == angka) {
            count++;
        }
    }

    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int size = sizeof(data) / sizeof(data[0]);
    int angka = 4;

    // Menghitung berapa banyak angka 4 dalam data
    int jumlahAngka = hitungAngka(data, size, angka);

    cout << "Jumlah angka " << angka << " dalam data tersebut adalah: " << jumlahAngka << endl;

    return 0;
}