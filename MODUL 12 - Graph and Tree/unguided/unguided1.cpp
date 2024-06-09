#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct Graf {
    string *namaSimpul;
    int **jarak;
    int renna_2311110047; // NIM ditambahkan pada nama variabel
};

void tampilkanGraf(const Graf& g) {
    cout << "  ";
    for (int i = 0; i < g.renna_2311110047; i++) {
        cout << setw(6) << g.namaSimpul[i];
    }
    cout << endl;
    for (int i = 0; i < g.renna_2311110047; i++) {
        cout << setw(4) << g.namaSimpul[i];
        for (int j = 0; j < g.renna_2311110047; j++) {
            cout << setw(6) << g.jarak[i][j];
        }
        cout << endl;
    }
}

void buatGraph() {
    int renna_2311110047; // NIM ditambahkan pada nama variabel
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> renna_2311110047;
    cin.ignore();
    cout << "Silahkan masukkan nama simpul" << endl;

    // Membuat struktur Graf
    Graf g;
    g.renna_2311110047 = renna_2311110047; // NIM ditambahkan pada nama variabel
    g.namaSimpul = new string[g.renna_2311110047];
    g.jarak = new int *[g.renna_2311110047];
    for (int i = 0; i < g.renna_2311110047; i++) {
        g.jarak[i] = new int[g.renna_2311110047]();
    }

    // Mengisi nama simpul
    for (int i = 0; i < g.renna_2311110047; i++) {
        cout << "Simpul " << i + 1 << " : ";
        getline(cin, g.namaSimpul[i]);
    }

    // Mengisi bobot antar simpul
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < g.renna_2311110047; i++) {
        for (int j = 0; j < g.renna_2311110047; j++) {
            cout << g.namaSimpul[i] << " --> " << g.namaSimpul[j] << " = ";
            cin >> g.jarak[i][j];
        }
    }

    // Menampilkan graf
    tampilkanGraf(g);

    // Membersihkan memori
    for (int i = 0; i < g.renna_2311110047; i++) {
        delete[] g.jarak[i];
    }
    delete[] g.jarak;
    delete[] g.namaSimpul;
}

int main() {
    buatGraph();
    return 0;
}
