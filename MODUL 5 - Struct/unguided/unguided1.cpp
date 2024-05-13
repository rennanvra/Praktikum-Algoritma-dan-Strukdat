#include <iostream>
using namespace std;

struct buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5];
};

int main() {
    buku nama_buku;

    for (int i = 0; i < 5; ++i) {
        nama_buku.judul_buku[i] = "Judul Buku Contoh " + to_string(i+1);
        nama_buku.pengarang[i] = "Pengarang Contoh " + to_string(i+1);
        nama_buku.penerbit[i] = "Penerbit Contoh " + to_string(i+1);
        nama_buku.tebal_halaman[i] = 540 + i*15;
        nama_buku.harga_buku[i] = 100000.0 + i*25000;
    }

    cout << "Data Buku:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Buku " << i+1 << ":" << endl;
        cout << "Judul Buku: " << nama_buku.judul_buku[i] << endl;
        cout << "Pengarang: " << nama_buku.pengarang[i] << endl;
        cout << "Penerbit: " << nama_buku.penerbit[i] << endl;
        cout << "Tebal Halaman: " << nama_buku.tebal_halaman[i] << endl;
        cout << "Harga Buku: Rp" << nama_buku.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}
