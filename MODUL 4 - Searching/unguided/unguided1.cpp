

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void selection_sort(string &kalimat) {
    sort(kalimat.begin(), kalimat.end());
}

string toLowerCase(string kalimat) {
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    return kalimat;
}

bool binarySearch(string kalimat, char target) {
    int awal = 0;
    int akhir = kalimat.length() - 1;

    while (awal <= akhir) {
        int tengah = awal + (akhir - awal) / 2;

        if (kalimat[tengah] == target) {
            return true;
        }

        if (kalimat[tengah] < target) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    return false;
}

int main() {
    string kalimat;
    char target;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    cout << "\nKalimat setelah diurutkan : ";
    selection_sort(kalimat);
    cout << kalimat << endl;

    kalimat = toLowerCase(kalimat);
    target = tolower(target);

    bool ditemukan = binarySearch(kalimat, target);

    if (ditemukan) {
        cout << "Huruf " << target << " ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf " << target << " tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}