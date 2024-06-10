// Lakukan sorting menggunakan bubblesort pada data berikut (5, 1, 4, 2, 8)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << endl;
}

void print_data(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int jumlah = 5;
    int data[jumlah] = {5, 1, 4, 2, 8};
    cout << "Angka sebelum diurutkan: " << endl;
    print_data(data, jumlah);
    bubbleSort(data, jumlah);
    cout << "Angka setelah diurutkan: " << endl;
    print_data(data, jumlah);

    return 0;
}