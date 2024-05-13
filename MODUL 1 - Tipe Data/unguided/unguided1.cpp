#include <iostream>
using namespace std;

double HitungLuasJajarGenjang(int alas, int tinggi){
    return alas * tinggi;
}

double HitungLuasSegitiga(int alas, int tinggi){
    return 0.5 * alas * tinggi;
}

int main(){
    double alas, tinggi;

    // Jajar Genjang
    cout << "Luas Jajar Genjang" << endl;
    cout << "Masukkan alas jajar genjang: "; cin >> alas;
    cout << "Masukkan tinggi jajar genjang: "; cin >> tinggi;
    cout << "Luas jajar genjang adalah = " << HitungLuasJajarGenjang(alas, tinggi) << endl;
    
    // Segitiga
    cout << "Luas Segitiga" << endl;
    cout << "Masukkan alas segitiga: "; cin >> alas;
    cout << "Masukkan tinggi segitiga: "; cin >> tinggi;
    cout << "Luas segitiga adalah = " << HitungLuasSegitiga(alas, tinggi) << endl;
    return 0;
}