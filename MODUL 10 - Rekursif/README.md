# <h1 align="center">Laporan Praktikum Modul 10 - Rekursif </h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

Rekursi adalah suatu proses perulangan untuk menyelesaikan suatu permasalahan berdasarkan suatu hubungan rekurens (recurrence relation)[1]. Jadi, rekursi adalah teknik dalam pemrograman dimana suatu method/fungsi memanggil dirinya sendiri. Fungsi ini akan terus berjalan sampai kondisi berhenti terpenuhi, oleh karena itu dalam sebuah fungsi rekursi perlu terdapat 2 blok penting, yaitu blok yang menjadi titik berhenti dari sebuah proses rekursi dan blok yang memanggil dirinya sendiri[2]. Contoh   paling   sederhana   dari   proses   rekursi   adalah proses menghitung nilai faktorial dari bilangan bulat positif dan mencari deret Fibonacci dari suatu bilangan bulat[3].

Kita dapat menulis program rekursif dengan format:

![Screenshot 2024-05-28 081816](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/20412059-793c-44d3-8fdd-8f881eda4dcb)

Ilustrasi bagaimana rekursif berjalan:

![Screenshot 2024-05-28 081826](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/a20be602-99ff-431f-b552-529139716818)

### Jenis-Jenis Rekursi

- Rekursi langsung

    Dalam rekursi langsung, fungsi memanggil dirinya sendiri secara langsung. 
    
    ![Screenshot 2024-05-28 082840](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/1003a20f-81c0-49c6-bea9-567d7246707c)

- Rekursi tidak langsung

    Jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi lain.

    ![Screenshot 2024-05-28 082855](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/d2a199c0-43c2-4399-9c56-b42d3de6dbb4)

### Kelemahan Rekursi

Rekursi memiliki beberapa kelemahan, yaitu:

- Stack Overflow dan Konsumsi Memori[4].
- Pertimbangan Kinerja[4].
- Analisis Kompleksitas dan Teknik Optimasi[4].


## Guided 

### Guided 1 - Rekursif Langsung

Source code:
```C++
#include <iostream>
using namespace std;

void countdown (int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";Program
    countdown(n - 1);
}

int main() {
    cout << "Rekursi langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```

#### Output

![Screenshot 2024-05-28 074557](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/d02f577e-c06b-45dc-805d-d54cc6a631d9)


#### Interpretasi:
Kode di atas menunjukkan contoh program rekursi langsung. Terdapat fungsi `countdown` menerima satu argumen, yaitu `n`, mencetak angka `n` dan memanggil dirinya sendiri dengan `n - 1`. Basis rekursinya adalah ketika `n` sama dengan 0, di mana fungsi berhenti. Program memanggil fungsi `countdown` pada bagian `main` dengan nilai awal 5. Fungsi ini mencetak angka dari lima hingga satu dalam urutan menurun. Program menghasilkan hasil "5 4 3 2 1".

### Guided 2 - Rekursif Tidak Langsung

Source code:
```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2);
    }
}

int main() {
    int num = 5;
    cout << "Rekursif tidak langsung: ";
    functionA(num);
    return 0;
}
```

#### Output

![Screenshot 2024-05-28 074614](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/ab6677ae-ed36-4c07-b8c2-1ec64aa9a900)


#### Interpretasi:
Kode di atas menunjukkan contoh program rekursi tidak langsung. Terdapat fungsi `functionA` dan `functionB` yang saling memanggil. Dalam fungsi `main`, program memanggil fungsi `functionA` dengan nilai `num` yang sama dengan 5 dan fungsi `functionB` juga menerima parameter integer `n`, dan jika nilai `n` lebih besar dari 0, maka akan mencetak nilai `n` ke layar dan memanggil fungsi `functionA` dengan parameter `n/ 2`. Serangkaian angka yang dicetak secara bergantian oleh kedua fungsi adalah output dari program ini hingga rekursi berakhir. Output dari program ini adalah serangkaian angka yang dicetak secara bergantian oleh kedua fungsi hingga rekursi berakhir.


## Unguided 

### 1.  Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

Source Code:
```C++
#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;

    // Pengguna menginputkan bilangan
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memastikan bahwa inputan dari pengguna adalah bilangan bulat positif
    if (bilangan < 0) {
        cout << "Masukkan bilangan bulat positif!" << endl;
    } else {
        int hasil = faktorial(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
```
#### Output

![Screenshot 2024-05-28 074706](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/7ca83a39-2c6b-46ca-ad00-3da5918e4dac)

#### Interpretasi:
Program di atas adalah contoh program yang menghitung nilai faktorial dari bilangan bulat menggunakan rekursi langsung. Saat program dijalankan, pengguna diminta untuk memasukkan sebuah bilangan bulat positif. Program kemudian memeriksa apakah bilangan yang dimasukkan oleh pengguna benar-benar positif. Jika bilangan yang dimasukkan positif, program memanggil fungsi `faktorial`. Fungsi `faktorial` kemudian melakukan perhitungan faktorial dari bilangan yang diberikan. Jika bilangan yang diberikan adalah 0 atau 1, maka hasilnya langsung 1. Jika tidak, fungsi `faktorial` memanggil dirinya sendiri dengan argumen yang dikurangi satu, dan mengalikan hasilnya dengan bilangan itu sendiri. Proses ini terus berlanjut hingga mencapai kondisi dasar (0 atau 1), dan hasil akhirnya dikembalikan ke `main`. Kemudian program akan mencetak hasil faktorial dari bilangan yang diinputkan pengguna. 

Pada hasil output program diatas, pengguna menginputkan 5, program akan menampilkan "Faktorial dari 5 adalah: 120", karena 5! = 5 × 4 × 3 × 2 × 1 = 120. Dan saat pengguna menginputkan 3, maka program akan menampilkan "Faktorial dari 3 adalah: 6", karena 3! = 3 × 2 × 1 = 6.

### 2.	Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

Source Code:
```C++
#include <iostream>
using namespace std;

int faktorialA(int n);
int faktorialB(int n);

// Fungsi faktorialA: memulai perhitungan faktorial
int faktorialA(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * faktorialB(n - 1);
    }
}

// Fungsi faktorialB: memanggil kembali faktorialA
int faktorialB(int n) {
    return faktorialA(n);
}

int main() {
    int bilangan;

    // Pengguna menginputkan bilangan
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memastikan bahwa inputan dari pengguna adalah bilangan bulat positif
    if (bilangan < 0) {
        cout << "Masukkan bilangan bulat positif!" << endl;
    } else {
        int hasil = faktorialA(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
```
#### Output

![Screenshot 2024-05-28 074911](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/856052f9-03cf-41ab-be16-2a54de2400d1)

#### Interpretasi:
Program di atas adalah program yang sama seperti di atas yaitu program untuk menghitung nilai faktorial dari bilangan bulat, namun pada program ini mengguna fungsi rekursif tidak langsung. Fungsi `faktorialA` merupakan fungsi utama yang dimulai dengan perhitungan faktorial. Jika nilai yang diberikan adalah 0 atau 1, fungsi ini mengembalikan nilai 1. Namun, jika tidak, fungsi ini memanggil fungsi `faktorialB` dengan nilai yang dikurangi satu. Fungsi `faktorialB` kemudian memanggil kembali fungsi `faktorialA` dengan nilai yang sama. Ketika program dijalankan, pengguna diminta untuk memasukkan sebuah bilangan bulat positif. Program kemudian memeriksa apakah bilangan yang dimasukkan oleh pengguna benar-benar positif. Jika bilangan yang dimasukkan positif, program memanggil fungsi `faktorialA` dengan bilangan tersebut sebagai argumen. Hasil faktorial kemudian dicetak.

Pada hasil output program diatas, pengguna menginputkan 5, program akan menampilkan "Faktorial dari 5 adalah: 120", karena 5! = 5 × 4 × 3 × 2 × 1 = 120. Dan saat pengguna menginputkan 3, maka program akan menampilkan "Faktorial dari 3 adalah: 6", karena 3! = 3 × 2 × 1 = 6.


## Kesimpulan
Rekursi merupakan fungsi dalam pemrograman di mana suatu fungsi memanggil dirinya sendiri untuk menyelesaikan permasalahan berdasarkan hubungan rekurens. Dua blok penting dalam fungsi rekursi adalah titik berhenti dan pemanggilan diri sendiri. Ada dua jenis rekursi, yaitu rekursi langsung, di mana fungsi memanggil dirinya sendiri secara langsung, dan rekursi tidak langsung, di mana fungsi memanggil dirinya sendiri melalui fungsi lain. Meskipun rekursi memiliki kelebihan dalam menyelesaikan permasalahan secara elegan, namun juga memiliki kelemahan seperti risiko stack overflow dan konsumsi memori yang besar. Oleh karena itu, penggunaan rekursi harus dipertimbangkan dengan hati-hati dengan memperhatikan kinerja dan kompleksitasnya.

## Referensi
[1] A. Sutrisno, "Pengembangan Sistem Informasi Akademik," Tesis, Departemen Teknik Informatika, Universitas Islam Negeri Sultan Syarif Kasim Riau, Pekanbaru, Indonesia, 2010.

Available: https://repository.uin-suska.ac.id/10894/1/2010_2010111TIF.pdf

[2] A. Firdaus dan B. Lestari, "Analisis Faktor-faktor yang Mempengaruhi Kepuasan Pelanggan di Pasar Online," Tesis, Departemen Manajemen, Universitas Islam Negeri Maulana Malik Ibrahim, Malang, Indonesia, 2024.

Available: http://repository.uin-malang.ac.id/15252/7/15252.pdf 


[3] [1] W. Tarigan, "Algoritma Pemrograman dan Struktur Data," Eureka Media Aksara, 2022.

Available: https://repository.penerbiteureka.com/id/publications/558553/algoritma-pemrograman-dan-struktur-data


[4] S. Mattoo, "Recursion in Data Structure," Apr 16, 2024.

Available:https://intellipaat.com/blog/recursion-in-data-structure/
