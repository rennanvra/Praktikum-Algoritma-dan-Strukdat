#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kucing;
    kucing.jumlahKaki = 4;
    kucing.menyusui = true;
    kucing.suara = "meow meow";

    hewanLaut lumba_lumba; 
    lumba_lumba.bentukSirip = "Sirip berbentuk mirip bulan sabit.";
    lumba_lumba.bentukPertahananDiri = "Berenang cepat untuk menghindari bahaya.";

    hewan singa; 
    singa.namaHewan = "Singa";
    singa.jenisKelamin = "Jantan";
    singa.caraBerkembangbiak = "Melahirkan";
    singa.alatPernafasan = "Paru-paru";
    singa.tempatHidup = "Hutan";
    singa.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << singa.namaHewan << endl;
    cout << "\tJenis kelamin: " << singa.jenisKelamin << endl;
    cout << "\tCara berkembangbiak: " << singa.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan: " << singa.alatPernafasan << endl;
    cout << "\tTempat hidup: " << singa.tempatHidup << endl;
    cout << "\tKarnivora: " << (singa.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKucing" << endl;
    cout << "\tJumlah kaki: " << kucing.jumlahKaki << endl;
    cout << "\tMenyusui: " << (kucing.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara: " << kucing.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tLumba-lumba" << endl;
    cout << "\tBentuk sirip: " << lumba_lumba.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << lumba_lumba.bentukPertahananDiri << endl;

    return 0;
}