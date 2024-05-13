#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> stackKarakter;
    string kalimatTanpaSpasi;
    
    for (char karakter : kalimat) {
        if (!isspace(karakter)) {
            kalimatTanpaSpasi += karakter;
        }
    }
    
    for (char karakter : kalimatTanpaSpasi) {
        stackKarakter.push(tolower(karakter));
    }

    for (char karakter : kalimatTanpaSpasi) {
        if (tolower(karakter) != stackKarakter.top()) {
            return false;
        }
        stackKarakter.pop();
    }
    
    return true;
}

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    if (isPalindrome(kalimat)) {
        cout << "Kalimat tersebut adalah Palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan Palindrom." << endl;
    }
    
    return 0;
}