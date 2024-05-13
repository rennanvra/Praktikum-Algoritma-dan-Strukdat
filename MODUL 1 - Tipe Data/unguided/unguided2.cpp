#include <iostream>
using namespace std;

struct tas {
    string renna21;
    string buku;
    int jumlah;
};

class renna21 {
private:
    string makan;
    string minum;

public:
    renna21(string bakso, string eskrim) {
        makan = bakso;
        minum = eskrim;
    }

    void info() {
        cout << "Makan : " << makan << endl;
        cout << "Minum : " << minum << endl;
    }

    void SetMakanan(string bakso) {
        makan = bakso;
    }

    void SetMinuman(string eskrim) {
        minum = eskrim;
    }
};

int main() {
    // Membuat objek dari struktur tas
    tas isi;
    isi.renna21 = "baju";
    isi.buku = "buku";
    isi.jumlah = 2;

    cout << "\nAku mempunyai " << isi.jumlah << " tas";
    cout << "\nTasku berisi " << isi.buku;
    cout << "\nSelain buku, tasku juga berisi " << isi.renna21 << endl << endl;

    // Membuat objek dari kelas renna21
    renna21 MakanMinum("Nasi kuning", "Air putih");

    cout << "Makan minum sarapan: " << endl;
    MakanMinum.info();

    MakanMinum.SetMakanan("Bakso");
    MakanMinum.SetMinuman("Eskrim");
    cout << "Makanan dan minuman hari ini: " << endl;
    MakanMinum.info();

    return 0;
}