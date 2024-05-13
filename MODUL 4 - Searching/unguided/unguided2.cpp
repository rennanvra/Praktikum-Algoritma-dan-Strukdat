#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLowerCase(string kalimat) {
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    return kalimat;
}

int main() {
    string kalimat;
    int jumlahVocal = 0;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') {
            jumlahVocal++;
        }
    }

    cout << "Banyaknya huruf vocal dalam kalimat tersebut adalah: " << jumlahVocal << endl;

    return 0;
}