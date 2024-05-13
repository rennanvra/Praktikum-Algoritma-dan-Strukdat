# <h1 align="center">Laporan Praktikum Modul 7 Stack</h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori
Stack adalah suatu urutan elemen yang elemennya dapat diambil dan ditambah hanya pada posisi akhir (top) saja[1].  Stack merupakan bagian memori yang digunakan untuk menyimpan nilai dari suatu register secara sementara. Operasi stack dinaman juga LIFO (Las In First Out)[2]. Dalam tumpukan, urutan kedatangan data penting. Dengan demikian, elemen terakhir yang disimpan dalam stack menjadi elemen pertama yang diambil[3].

Stack adalah sekumpulan elemen-elemen data yang disimpan dalam satu laju linier. Kumpulan elemen-elemen data hanya boleh diakses pada satu lokasi saja yaitu pada posisi Atas (TOP) tumpukan. Tumpukan disebut juga Push Down Stack yaitu penambahan elemen baru (PUSH) dan penghapusan elemen dari tumpukan (POP)[4].

![Screenshot 2024-05-06 105134](https://github.com/rennanvra/Praktikum-7/assets/162097323/8603975e-a7d4-4c8e-bb20-b9e1d6ae49ae)


## Proses Stack

Stack memiliki beberapa proses, yaitu:
- Awal (inisialisasi)
- Pop (hapus mengambil keluar)
- Push (input, simpan, masuk)

## Operasi dan Fungsi Stack

Operasi pada stack melibatkan beberapa fungsi dasar yang dapat dilakukan pada struktur data ini. Berikut adalah beberapa operasi umum pada stack:

- Push (Masukkan): Menambahkan elemen ke dalam tumpukan pada posisi paling atas atau ujung.
- Pop (Keluarkan): Menghapus elemen dari posisi paling atas atau ujung tumpukan.
- Top (Atas): Mendapatkan nilai atau melihat elemen teratas pada tumpukan tanpa menghapusnya.
- IsEmpty (Kosong): Memeriksa apakah tumpukan kosong atau tidak.
- IsFull (Penuh): Memeriksa apakah tumpukan penuh atau tidak (terutama pada implementasi tumpukan dengan kapasitas terbatas).
- Size (Ukuran): Mengembalikan jumlah elemen yang ada dalam tumpukan.
- Peek (Lihat): Melihat nilai atau elemen pada posisi tertentu dalam tumpukan tanpa menghapusnya.
- Clear (Hapus Semua): Mengosongkan atau menghapus semua elemen dari tumpukan.
- Search (Cari): Mencari keberadaan elemen tertentu dalam tumpukan.


## Guided 

### 1. Operasi Stack

Source code:
```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";

    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}
```

#### Output

![Screenshot 2024-05-06 114721](https://github.com/rennanvra/Praktikum-7/assets/162097323/d7cae152-0566-4a29-b244-81d41082a905)

#### Interpretasi:
Program di atas adalah contoh dari implementasi stack. Dalam program di atas menggunakan array yang memiliki nilai 5 array. Program tersebut memungkinkan pengguna untuk menambahkan, menghapus, melihat, dan mengubah data yang selanjutnya akan akan ditampilkan outputnya. 

Terdapat fungsi ```push``` yang dapat menambahkan suatu nilai atau elemen ke dalam stack. Fungsi ```pop``` yang dapat menghapus suatu nilai atau elemen dalam stack. Fungsi ```peek``` yang dapat melihat suatu nilai atau elemen tertentu dalam stack, dan masih banyak fungsi lainnya. Kemudian nilai akan di outputkan.



## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

```C++
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
```
#### Output

![Screenshot 2024-05-06 115619](https://github.com/rennanvra/Praktikum-7/assets/162097323/f412cb14-2dae-4448-abaf-4210981b01cd)

#### Interpretasi:
Output di atas adalah contoh suatu program yang menggunakan stack. Program tersebut berfungsi untuk memeriksa apakah suatu kalimat yang diinputkan oleh pengguna merupakan kalimat palindrom (kalimat yang dibaca dari depan dan belakang sama) atau bukan.

Pengguna dapat menginputkan suatu kalimat untuk di cek apakah kalimat tersebut palindrom atau bukan. Sebelum di  cek dalam stack dengan loop ```for```, kalimat akan diubah menjadi tanpa spasi dan menjadi huruf kecil menggunakan fungsi ```'tolower'```. Selanjutnya program akan membandingkan karakter dengan karakter teratas pada stack menggunakan fungsi ```top()```, jika ada perbedaan maka kalimat tersebut bukan kalimat palindrom. Jika tidak ada perbedaan, program akan menghapus karakter teratas dari stack menggunakan fungsi ```pop()```, setelah iterasi dijalankan pada semua karakter dan tidak ada perbedaan yang ditemukan, maka kalimat tersebut adalah kalimat palindrom.

### 2. Buatlah program untuk melakukan pembalikan terhadap kalimat menggunakan stack dengan minimal 3 kata. Jelaskan output program dan source codenya beserta operasi/fungsi yang dibuat?

```C++
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
```
#### Output

![Screenshot 2024-05-06 120414](https://github.com/rennanvra/Praktikum-7/assets/162097323/9619e166-221c-4ae7-bef6-c9dd9ac556c3)

#### Interpretasi:
Output di atas adalah contoh suatu program yang menggunakan stack. Program tersebut berfungsi untuk membalikkan urutan huruf dan kata dalam sebuah kalimat menggunakan stack.

Setelah pengguna menginputkan sebuah kalimat, kalimat tersebut akan disimpan di fungsi ```reverseWordsAndSentence()```. Program akan membuat dua stack, yaitu 'stackHuruf' yang menyimpan setiap huruf, dan 'stackKata' untuk menyimpan setiap kata. Program melakukan iterasi pada setiap karakter dalam kalimat. Jika karakter tidak memiliki spasi, karakter tersebut dimasukkan ke dalam stack Huruf dengan ```push()```, dan disimpan dalam variabel kata. Jika karakter memiliki spasi, kata tersebut dimasukkan ke dalam 'stackKata' dengan ```push()```, dan variabel kata direset. Setelah iterasi selesai, kata terakhir dimasukkan ke dalam 'stackKata' dengan ```push()```. Kemudian, program mengambil kata-kata dari 'stackHuruf' dengan ```push()```. Setiap huruf ditambahkan ke kalimat terbalik, diikuti dengan spasi, dan huruf tersebut dihapus dari stackHuruf menggunakan ```pop()```.

Dalam program di atas, operasi yang dilakukan adalah:
- push(): Untuk memasukkan karakter atau kata ke dalam stack.
- pop(): Untuk menghapus karakter teratas dari stack.
- top(): Untuk mengakses karakter teratas pada stack tanpa menghapusnya.

## Kesimpulan
Stack adalah struktur data yang mengikuti prinsip Last In First Out (LIFO), di mana elemen-elemennya hanya dapat diambil atau ditambahkan pada posisi akhir (top) saja. Stack sering digunakan dalam pemrograman untuk menyimpan nilai sementara, seperti pada operasi push down dan pop up pada pemanggilan fungsi dan eksekusi operasi aritmatika. Pada dasarnya, elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang diambil.

Proses stack meliputi inisialisasi, pop (penghapusan dan pengambilan elemen dari top), serta push (penambahan elemen baru ke top). Operasi dasar pada stack mencakup push (penambahan), pop (penghapusan), top (pengambilan nilai top tanpa penghapusan), isEmpty (pengecekan apakah stack kosong), isFull (pengecekan apakah stack penuh), size (mengembalikan jumlah elemen dalam stack), peek (melihat nilai pada posisi tertentu), clear (mengosongkan stack), dan search (mencari keberadaan elemen tertentu).

## Referensi
[1] Herawati, E. (2012). Stack.

Available: https://repository.unikom.ac.id/38844/1/Bab%20VIII%20-%20Stack.pdf

[2] Zusane Oematan, M. (2010). Stack Dan Pengenalan Procedure. 

Available: https://repository.unikom.ac.id/32697/1/bab5.pdf 

[3] Doe, J. (2014). Stack pada C

Available: https://www.nblognlife.com/2014/04/stack-pada-c.html

[4] J. Nasir, M. Melladia, R. Saputra, Y. Yusliyenni, S. Safaria, D. E. Putra, G. Efendi, A. Zahmi, and Y. L. Setiawan, "Buku e-book: [Algoritma dan Struktur Data dengan Pemograman Pascal dan Phyton]," CV. Gita Lentera, Januari 31, 2024.

Available: https://www.google.co.id/books/edition/Algoritma_dan_Struktur_Data_dengan_Pemog/bYnxEAAAQBAJ?hl=en&gbpv=0

