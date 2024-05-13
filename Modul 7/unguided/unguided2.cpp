#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseWordsAndSentence(string kalimat) {
    stack<char> stackHuruf;
    stack<string> stackKata;
    string kalimatTerbalik;
    string kata;

    for (char karakter : kalimat) {
        if (karakter != ' ') {
            stackHuruf.push(karakter);
            kata += karakter;
        } else {
            stackKata.push(kata);
            kata = "";
        }
    }

    stackKata.push(kata);

    while (!stackKata.empty()) {
        string kata = stackKata.top();
        stackKata.pop();

        for (char huruf : kata) {
            kalimatTerbalik += stackHuruf.top();
            stackHuruf.pop();
        }

        kalimatTerbalik += " ";
    }

    return kalimatTerbalik;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    string kalimatTerbalik = reverseWordsAndSentence(kalimat);

    cout << "Kalimat terbalik: " << kalimatTerbalik << endl;

    return 0;
}