# <h1 align="center">Laporan Praktikum Modul 1 Tipe Data</h1>
<p align="center">2311110047 / Renna Novaria W / Sains Data</p>

## Dasar Teori

Tipe data adalah sebuah pengklasifikasian data yang didasarkan pada jenis data tersebut. Tipe data dibutuhkan agar kompiler tahu bagaimana data akan digunakan. Tipe data atau jenis data yang akan dipelajari adalah sebagai berikut:

- Tipe Data Primitif

    Tipe data primitif adalah tipe data bawaan bahasa pemrograman dan bisa langsung digunakan programmer untuk mendeklarasikan variabel. Dalam C++, terdapat 7 tipe data yang termasuk tipe data primitif, yaitu: int, float, double, boolean, char, void dan wide_character.
    
    a. Int, juga dikenal sebagai integer, adalah tipe data yang nilainya terdiri dari angka bulat dan tidak dapat menyimpan pecahan, yaitu angka desimal. Nilai tersebut dapat positif atau negatif[1].

    b. Float, juga dikenal sebagai floating point atau real number, memiliki bagian desimal di akhir angka (atau mem). Kita bisa menggunakan tipe data ini jika ingin menyimpan angka berkoma[1].

    c. Double, seperti float, juga digunakan untuk menyimpan angka dengan pecahan. Tipe float hanya dapat menampung 7 angka di belakang koma, sedangkan tipe double dapat menampung hingga 15 angka di belakang koma[1].

    d. Boolean adalah tipe data yang hanya memiliki 2 pilihan nilai, yaitu true dan false[1].

    e. Char adalah tipe data yang digunakan untuk menyimpan satu karakter saja. Dan penulisannya harus diapit oleh tanda petik tunggal[1]. 

- Tipe Data Abstrak
    
    Programer menciptakan tipe data abstrak, juga dikenal sebagai tipe data abstrak (ADT). Tipe data abstrak dapat berisi lebih dari satu tipe data, sehingga nilainya dapat beragam. Pada bahasa C++, fitur Class adalah fitur Program Orientasi Objek (OPP), sedangkan pada bahasa C, fitur data struktur struktur berfungsi untuk membungkus tipe data di dalamnya sebagai anggota. Menurut learn.microsoft.com, perbedaan antara Struct dan Class terletak pada cara mereka diakses secara default: Struct bersifat publik sedangkan Class bersifat privat.


- Tipe Data Koleksi
    Tipe data koleksi adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan sejumlah nilai atau objek secara bersamaan. Tipe data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses jumlah data yang terstruktur. Ada beberapa tipe data koleksi yang umum digunakan dalam pemrograman, dan di antaranya adalah array, vector, dan map.


## Guided 

### 1. [Tipe Data Primitif]

```C++
#include <iostream>
using namespace std;
// Main program
main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    // It allows user to enter the operands
    cin >> num1 >> num2;
    // Switch statement begins

    switch (op)
    {
    // If user enter +
    case '+':
      cout << num1 + num2;
      break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
    // If the operator is other than +, -. * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    } // Switch statement ends
    return 0;
}
```
#### Interpretasi:
Kode di atas berfungsi untuk menjalankan operasi hitung aritmatika sederhana dengan tipe data primitif. Pengguna dapat memilih operasi hitung aritmatika dan kemudian menginputkan 2 angka. setelah 2 angka berhasil di inputkan, maka program akan berjalan sesuai dengan operasi hitung yang dipilih. Jika operator yang dimasukkan tidak sesuai, program akan mencetak pesan error.
### 2. [Tipe Data Abstrak]

```C++
#include <stdio.h>
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *addres;
    int age;
};

int main()
{

    // Menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    mhs1.name = "Dian";
    mhs1.addres = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.addres = "Surabaya";
    mhs2.age = 23;

    // Mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.addres);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.addres);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```

#### Interpretasi:
Kode di atas adalah program dengan tipe data abstrak, yaitu struct. Program mendefinisikan struktur "Mahasiswa" dengan nama, alamat, dan umur dan selanjurnya diberi value atau nilai. Terdapat dua variabel struct "mhs1" dan "mhs2" yang digunakan untuk menyimpan value setiap mahasiswa. Selanjutnya value tersebut diatur untuk setiap variabel struct, kemudian untuk menampilkan outputnya dapat memangggunakan printf.


### 3. [Tipe Data Koleksi]

```C++
#include <iostream>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    // Mencetak array
    cout << "Isi array pertama :" << nilai [0] << endl;
    cout << "Isi array kedua :" << nilai [1] << endl;
    cout << "Isi array ketiga :" << nilai [2] << endl;
    cout << "Isi array keempat :" << nilai [3] << endl;
    cout << "Isi array kelima :" << nilai [4] << endl;
    return 0;
}
```

#### Interpretasi:
Kode di atas adalah kode dengan tipe data koleksi. Program di atas memiliki array dengan jumlah nilai 5, yaitu 23, 50, 34, 78, dan 90. Selanjutnya terdapat fungsi untuk memanggil array tersebut sesuai dengan urutan indeksnya.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas.
Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari
materi tipe data primitif!]


```C++
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
```

#### Output:
![Screenshot 2024-03-11 015439](https://github.com/rennanvra/template/assets/162097323/ece3aa77-4ac5-44d9-bc32-bd0b1753b853)



#### Interpretasi:
Program di atas terdapat dua fungsi, yaitu HitungLuasJajarGenjang() untuk menghitung luas jajar genjang dan HitungLuasSegitiga() untuk menghitung luas segitiga. Fungsi-fungsi tersebut kemudian dipanggil di dalam fungsi main(). Pada bagian main(), program meminta pengguna untuk menginputkan nilai alas dan tinggi jajar genjang, kemudian menghitung dengan rumus alas dikali dengan tinggi dan kemudian mencetak luasnya. Setelah itu, program meminta pengguna untuk memasukkan nilai alas dan tinggi segitiga, dan menghitung dengan rumus 0,5 kali alas kali tinggi serta mencetak luas segitiga tersebut. Kemudian program mengakhiri perintah dengan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan benar.


### 2. [Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya]

- Class:
class adalah katakunci (kata yang dicadangkan, reserved word), dan ia hanya mendefinisikan tipe data; tidak ada memori yang dialokasikan. Katakunci ini hanya mengumumkan perihal deklarasi sebuah kelas[2]. Class adalah struktur yang digunakan untuk merepresentasikan objek dalam pemrograman berorientasi objek. Class mengelompokkan data bersama dengan metode yang beroperasi pada data tersebut. Semua anggota class bersifat private. Data dalam sebuah class tidak dapat diakses atau dimodifikasi langsung dari luar, kecuali melalui metode yang ditentukan.
- Struct:
Struct (singkatan dari "structure") adalah sebuah tipe data yang digunakan untuk mengelompokkan beberapa variabel dengan tipe data yang berbeda dalam satu unit. Semua anggita struct bersifat publik. Data dalam sebuah struct dapat diakses dan dimodifikasi langsung dari luar.


```C++
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
```

#### Output:
![Screenshot 2024-03-11 031602](https://github.com/rennanvra/Praktikum-Modul-1/assets/162097323/700dd63a-bdfa-4f3d-96ca-45f2378b0f5e)


#### Interpretasi:
Kode di atas memiliki dua program. Program menyimpan struct tas dengan value renna21, buku yang bertipe data string, dan jumlah yang bertipe data integer. Struct renna21 adalah kelas dengan dua atribut makan dan minum, yang berarti makanan dan minuman. Kelas ini juga memiliki beberapa metode, seperti info() untuk mencetak makanan dan minuman dan SetMakanan() dan SetMinuman() untuk mengatur keduanya.

Sebuah struct tas bernama isi dibuat dan diinisialisasi dalam fungsi main(). Kemudian, renna21 dengan value MakanMinum dibuat dengan makanan dan minuman tertentu untuk sarapan. Informasi tentang tas dan barang-barang di dalamnya dicetak, kemudian informasi tentang makanan dan minuman yang dikonsumsi untuk sarapan. Selanjutnya, metode SetMakanan() dan SetMinuman() digunakan untuk mengubah makanan dan minuman untuk hari itu, dan informasinya dicetak kembali.

Oleh karena itu, data yang diberikan oleh program ini mencakup informasi tentang tas yang dimiliki dan barang-barang yang termasuk di dalamnya, serta makanan dan minuman yang dikonsumsi untuk sarapan dan kemudian selama hari itu.



### 3. [Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.


```C++
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
```

#### Output:
![Screenshot 2024-03-11 032606](https://github.com/rennanvra/Praktikum-Modul-1/assets/162097323/7eb65efc-d244-4f27-8547-04879cf2d763)

#### Interpretasi:

Program di atas adalah program harga penggaris dan memungkinkan pengguna memeriksa ketersediaan jenis penggaris tertentu. Kode di atas menyimpan harga penggaris untuk berbagai bahan seperti besi, kayu, dan plastik di map dalam bentuk string dan integer. Setelah memasukkan harganya, program mencetak harga setiap penggaris. Kemudian, program meminta pengguna untuk memasukkan jenis penggaris mana yang ingin dicek ketersediaannya. Jika jenis penggaris tersebut ada di map, program akan mencetak pesan "Stok tersedia, silahkan tanya penjual." Jika tidak, program akan mencetak pesan "Stok tidak tersedia, silahkan kembali besok."

#### Perbedaan Array dan Map
- Array: Array menyimpan banyak data secara berdampingan yang terdiri dari kumpulan elemen dengan tipe data yang sama dalam urutan tertentu, dimulai dari indeks 0 hingga N-1. Array cocok untuk kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen darisebuah array tertentu haruslah
mempunyai tipe data yang sama[3].
- Map: Map memetakan kunci (key) ke nilai-nilai (values) yang sesuai. Setiap kunci dalam map harus unik, dan setiap kunci memiliki satu nilai terkait.



## Kesimpulan
Tipe data adalah sebuah pengklasifikasian data yang didasarkan pada jenis data tersebut. Tipe data dibutuhkan agar kompiler tahu bagaimana data akan digunakan. Tipe data antara lain adalah tipe data primitif, seperti integer, float, double, boolean, dan char. Tipe data selanjutnya yaitu tipe data abstrak, seperti class dan struck. Tipe data ketiga yaitu tipe data koleksi, seperti array dan map. Selain memahami apa itu tipe data, juga terdapat perbedaan dari macam-macam tipe data tersebut dan membuat program sederhana yang sesuai sebagai implementasi dari pembelajaran. Tipe data primitif sudah ditentukan oleh sistem, tipe data abstrak dibentuk oleh programmer itu sendiri, dan tipe data koleksi digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan.

## Referensi
[1] https://jurnalmms.web.id/cpluscplus/tipe-data-dalam-cplusplus/#:~:text=Tipe%20data%20primitif%20adalah%20tipe,%2C%20char%2C%20void%20dan%20wide_character.

[2] Sianipar, R. H. (2015). Struktur Data C++ dengan Pemrograman Generik (Vol. 1). Penerbit ANDI.

[3] Alfagih, M. A. (2018). STRUKTUR DATA.