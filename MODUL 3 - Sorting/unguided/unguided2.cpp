#include<iostream>
using namespace std;

void bubble_sort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << endl;
}

void print_array(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int jumlah = 10;
    string nama[jumlah] = {"siti,", "situ,", "sana,", "ana,", "ani,",
"caca,", "cici,", "dida,", "dodo,", "dadi,"};
    cout << "Nama-nama warga sebelum diurutkan: " << endl;
    print_array(nama, jumlah);
    bubble_sort(nama, jumlah);
    cout << "Nama-nama warga setelah diurutkan: " << endl;
    print_array(nama, jumlah);

    return 0;
}