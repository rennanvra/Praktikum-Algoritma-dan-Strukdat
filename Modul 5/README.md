# <h1 align="center">Laporan Praktikum Modul 5 Struct</h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

## 1. Variabel
ang digunakan untuk menampung nilai atau data yang akan diproses dalam sebuah program. Variabel pada dasarnya dapat dianggap sebagai kotak penyimpanan yang diberikan sebuah nama dan diidentifikasi oleh tipe data yang digunakan[1].

Dalam C++, variabel dideklarasikan dengan menyertakan tipe data yang akan digunakan, dikuti dengan nama variabel yang dipilih oleh programmer.Terdapat beberapa tipe data yang dapat digunakan untuk deklarasi variabel, antara lain:
- Tipe data bilangan bulat (integer): int da long
- Tipe data bilangan pecahan (floating point): float dan double
- Tipe data karakter (character): char
- Tipe data boolean: bool

Untuk menghemat tempat di dalam
komputer, sebuah tempat (memory) untuk
sebuah variabel, hanya ditempati ketika variabel
tersebut pertama digunakan, dan dikosongkan
ketika tidak digunakan lagi[2].

Variabel terbagi menjadi 2
jenis yakni variabel lokal dan global:

1. Variabel lokal
- Dibuat/dideklarasikan didalam
fungsi/prosedur
- Dikenali/dapat dipanggil hanya oleh
fungsi atau prosedur yang
mendeklarasikannya

2. Variabel global
- Dibuat/dideklarasikan diluar fungsi
atau prosedur
- Dikenali atau dipanggil oleh semua
fungsi atau prosedur yang ada didalam
program


## 2. Struktur (Struct)
Struct  dalam  bahasa  C++  merupakan  struktur  data  yang  memungkinkan terjadinya  pembentukan  tipe  data  baru  dengan  menggabungkan  berbagai macam variabel dengan tipe data berbeda yang tersedia dalam C++. Tipe data yang   baru,   dapat   dibentuk   di   luar   tipe   data   yang   sudah   ada   dengan menggabungkan   beberapa   tipe   data   tersebut   sesuai   dengan   kebutuhan program atau aplikasi yang dirancang. Berbeda    dengan    larik    (array)    yang    memungkinkan    penyimpanan beberapa tipe data yang sama, struct dapat menyimpan dan menggabungkan berbagai  variabel  dengan  tipe  data  yang  berbeda[3]. 

Struktur, struct, adalah kelas spesial. Secara default, semua anggota sebuah kelas adalah private, sedangkan secara default semua anggota struct adalah public. Dalam C++, Anda mendefinisikan struktur dengan menggunakan katakunci struct[4].

Struct merupakan tipe data bentukan yang terdiri dari beberapa tipe data standar maupun tipe data bentukan lainnya yang telah didefinisikan sebelumnya. Sebagaimana telah disinggung sebelumnya, keyword yang digunakan untuk membuat/mendeklarasikan sebuah struktur yakni struct. Terdapat banyak format penulisan diantaranya :

1. Contoh 1
```C++
struct {
    string namaDepan;
    string namaBelakang;
    int usia;
    char jenis_kelamin;
}namaVariabelStrukA, namaVariabelStrukB;
```
2. Contoh 2
```C++
struct namaTipe{
    string namaDepan;
    string namaTengah;
    string namaBelakang;
}; struct namaTipe namaVariabelStrukA, namaVariabelStrukB;
```
3. Contoh 3
```C++
typedef struct {
    string namaDepan;
    string namaTengah;
    string namaBelakang;
}namaTipe;
namaTipe namaVariabelStrukA, namaVariabelStrukB;
```

Tipe data struct yang telah dibuat (menggunakan cara 2 dan 3) menjadi tipe data standar yang penggunaannya sama dengan tipe data standar lainnya.


## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

Source code:
```C++
#include <iostream>
#include <string>
using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
};

int main() {
    buku nama_buku;

    nama_buku.judul_buku = "Bumi";
    nama_buku.pengarang = "Tere Liye";
    nama_buku.penerbit = "Gramedia Pustaka Utama";
    nama_buku.tebal_halaman = 504;
    nama_buku.harga_buku = 95000.0;

    cout << "Judul Buku: " << nama_buku.judul_buku << endl;
    cout << "Pengarang: " << nama_buku.pengarang << endl;
    cout << "Penerbit: " << nama_buku.penerbit << endl;
    cout << "Tebal Halaman: " << nama_buku.tebal_halaman << " halaman" << endl;
    cout << "Harga Buku: Rp" << nama_buku.harga_buku << endl;

    return 0;
}
```

#### Output

![Screenshot 2024-04-29 083954](https://github.com/rennanvra/Praktikum-4/assets/162097323/026dea26-1fcf-4496-9ea6-b31e7f10247f)

#### Interpretasi:
Program di atas adalah sebuah struktur 'buku' yang berisi data 'judul_buku' yang memberikan informasi mengenai judul buku, 'pengarang' yang memberikan informasi mengenai nama pengarang dari judul buku tersebut, 'penerbit' yang memberikan informasi mengenai penerbit mana yang menerbitkan buku tersebut, 'tebal_halaman' yang memberikan informasi mengenai jumlah atau tebal halaman buku tersebut, dan yang terakhir adalah 'harga_buku; yang memberikan informasi mengenai harga buku tersebut. Kemudian semua informasi di atas akan di simpan di dalam variabel 'nama_buku'. Dan dengan fungsi 'cout' maka program akan menampilkan informasi tersebut. 


### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.
![Screenshot 2024-04-29 092557](https://github.com/rennanvra/Praktikum-4/assets/162097323/304b4cc6-1800-4571-9475-5dce43fc05a2)

Source code:
```C++
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
```

#### Output:

![Screenshot 2024-04-29 084039](https://github.com/rennanvra/Praktikum-4/assets/162097323/7c309a90-1dd4-4c48-b4b7-f54aade04523)

#### Interpretasi:
Program di atas adalah program yang menggunakan struct yang memberikan informasi mengenai nama hewan-hewan tertentu, baik hewan darat maupun hewan laut. Terdapat 3 struktur dalam program di atas, yaitu struktur  hewan secara umum, struktur hewan darat, dan struktur hewan laut. Struktur 'hewan' menginterpretasikan struktur hewan secara umum, terdapat informasi nama hewan, jenis kelamin, cara berkembangbiak, alat pernapasan, tempat hidup, dan apakah termasuk hewan karnivora atau tidak. Struktur 'hewandarat' menginterpretasikan hewan darat, terdapat infomasi mengenai jumlah kaki, menyusui atau tidak, dan suara yang dihasilkan. Struktur 'hewanLaut' menginterpretasikan hewan laut, terdapat informasi tentang bentuk sirip, dan bentuk pertahanan diri. Kemudian program akan mencetak hasilnya, dengan singa mewakili struktur 'hewan', kucing mewakili struktur 'hewanDarat' dan lumba-lumba mewakili struktut 'hewanLaut'.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
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
```

#### Output:
![Screenshot 2024-04-29 084104](https://github.com/rennanvra/Praktikum-4/assets/162097323/b12865ae-8aa0-40a2-9f12-c514281a7ee7)


#### Interpretasi:
Program di atas mencetak informasi tentang lima buku contoh dengan menggunakan loop, dan akan mengubah nilai-nilai 'buku' secara beraturan berdasarkan loop. Terdapat struktur 'buku' yang memiliki 5 array yang akan menyimpan informasi seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Kemudian program akan mencetak hasilnya.

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
#include <iostream>
#include <string>
using namespace std;

const int jumlah_buku = 5;

struct Buku {
    string judul_buku[jumlah_buku];
    string pengarang[jumlah_buku];
    string penerbit[jumlah_buku];
    int tebal_halaman[jumlah_buku];
    double harga_buku[jumlah_buku];
};

int main() {
    Buku daftar_buku;

    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Masukkan informasi untuk buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, daftar_buku.judul_buku[i]);
        cout << "Pengarang: ";
        getline(cin, daftar_buku.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, daftar_buku.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> daftar_buku.tebal_halaman[i];
        cout << "Harga Buku: Rp";
        cin >> daftar_buku.harga_buku[i];
        cin.ignore(); 
    }

    cout << "\nDaftar Buku:" << endl;
    for (int i = 0; i < jumlah_buku; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: " << daftar_buku.judul_buku[i] << endl;
        cout << "Pengarang: " << daftar_buku.pengarang[i] << endl;
        cout << "Penerbit: " << daftar_buku.penerbit[i] << endl;
        cout << "Tebal Halaman: " << daftar_buku.tebal_halaman[i] << endl;
        cout << "Harga Buku: Rp" << daftar_buku.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}
```

#### Output:

![Screenshot 2024-04-29 084504](https://github.com/rennanvra/Praktikum-4/assets/162097323/64566b06-65a0-4edc-a79f-7dcd9e565dde)


#### Interpretasi:
Program di atas adalah  program yang memungkinkan pengguna menginputkan informasi tentang beberapa buku dan mencetak daftar buku tersebut. Struktur 'Buku' dengan lima array menyimpan informasi seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku. Program menggunakan fungsi loop 'for' untuk meminta pengguna memasukkan informasi tentang kelima buku tersebut. Kemudian program akan mencetak hasilnya.
 

## Kesimpulan
Variabel dalam C++ adalah wadah penyimpanan untuk data yang memiliki nama dan tipe data tertentu. Mereka dapat dibagi menjadi variabel lokal, yang dideklarasikan di dalam fungsi dan hanya dapat diakses di dalamnya, serta variabel global, yang dideklarasikan di luar fungsi dan dapat diakses di seluruh program.

Struktur (struct) dalam C++ memungkinkan pembentukan tipe data baru dengan menggabungkan berbagai macam variabel dengan tipe data berbeda. Secara default, anggota dari struct adalah publik, yang membedakannya dari kelas (class) di mana anggota secara default adalah privat. Struct digunakan untuk menggabungkan variabel dengan tipe data yang berbeda ke dalam satu entitas.

Jadi, variabel dan struct adalah konsep penting dalam C++ yang memungkinkan pengelolaan data yang lebih terstruktur dan efisien dalam sebuah program.

## Referensi

[1] Guntara, R. G. (2023). ALGORITMA DAN PEMROGRAMAN DASAR: Menggunakan Bahasa Pemrograman C++ dengan Contoh Kasus Aplikasi untuk Bisnis dan Manajemen. CV. Ruang Tentor.

[2] Effendi, R. (2009). Keunikan Variabel Dalam Pemrograman Visual C++. MANAJEMEN INFORMATIKA, 1(2).

[3]Putra, M. T. D., Munawir, M., & Yuniarti, A. R. (2023). BELAJAR PEMROGRAMAN LANJUT DENGAN C++.

[4] Sianipar, R. H. (2015). Struktur Data C++ dengan Pemrograman Generik (Vol. 1). Penerbit ANDI.