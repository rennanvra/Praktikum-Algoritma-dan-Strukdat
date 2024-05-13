#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int>penggaris;
    penggaris["besi"] = 5000;
    penggaris["kayu"] = 7000;
    penggaris["plastik"] = 4000;

    cout << "\nTipe penggaris besi memiliki harga: " <<  penggaris["besi"];
    cout << "\nTipe penggaris kayu memiliki harga: " <<  penggaris["kayu"];
    cout << "\nTipe penggaris plastik memiliki harga: " <<  penggaris["plastik"];

    string tokopenggaris;
    cout << "\n\nCek Tipe penggaris: "; cin >> tokopenggaris;
    if(penggaris.find(tokopenggaris) != penggaris.end()){
        cout << "\nStok tersedia, silahkan tanya penjual." << endl;
        } else{
        cout << "\nStok tidak tersedia, silahkan kembali besok." << endl;
    }
    return 0;
}