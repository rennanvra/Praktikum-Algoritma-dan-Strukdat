#include <iostream>
#include <string>
using namespace std;

const int jumlah_buku = 5;

struct Buku {
    string judul_buku[jumlah_buku];
    string pengarang[jumlah_buku];
    string penerbit[jumlah_buku];
    int tebal_halaman[jumlah_buku];
    double harga_buku[jumlah_buku];
};

int main() {
    Buku daftar_buku;

    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Masukkan informasi untuk buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, daftar_buku.judul_buku[i]);
        cout << "Pengarang: ";
        getline(cin, daftar_buku.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, daftar_buku.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> daftar_buku.tebal_halaman[i];
        cout << "Harga Buku: Rp";
        cin >> daftar_buku.harga_buku[i];
        cin.ignore(); 
    }

    cout << "\nDaftar Buku:" << endl;
    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: " << daftar_buku.judul_buku[i] << endl;
        cout << "Pengarang: " << daftar_buku.pengarang[i] << endl;
        cout << "Penerbit: " << daftar_buku.penerbit[i] << endl;
        cout << "Tebal Halaman: " << daftar_buku.tebal_halaman[i] << endl;
        cout << "Harga Buku: Rp" << daftar_buku.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}