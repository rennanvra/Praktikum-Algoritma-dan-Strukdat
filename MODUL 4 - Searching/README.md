# <h1 align="center">Laporan Praktikum Modul 4 Searching</h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

Algoritma pencarian adalah proses mendasar untuk menemukan elemen atau item tertentu dalam kumpulan data . Kumpulan data ini dapat mengambil berbagai bentuk, seperti array, daftar, pohon, atau representasi terstruktur lainnya. Tujuan utama pencarian adalah untuk menentukan apakah elemen yang diinginkan ada dalam data, dan jika ada, untuk mengidentifikasi lokasi tepatnya atau mengambilnya kembali. Ini memainkan peran penting dalam berbagai tugas komputasi dan aplikasi dunia nyata, termasuk pengambilan informasi, analisis data, proses pengambilan keputusan, dan banyak lagi[1].


## 1. Sequential Search
Pencarian Sequential dapat digunakan pada data dalam keadaan acak atau tidak terurut maupun yang sudah terurut. Pencarian Sequential atau sering disebut Pencarian Linear menggunakan prinsip data yang ada dibandingkan satu persatu secara berurutan dengan data yang dicari sampai elemen yang dicari ditemukan,atau seluruh elemen sudah diperiksa[2]. Sequential search dibagi menjadi 2, yaitu:


1.	Sequential Search pada Array yang elemen datanya Belum Terurut 
    - Tanpa Sentinel
    - Dengan sentinel
2.	Sequential Search pada Array yang elemen datanya Sudah Terurut
    - Tanpa Sentinel
    - Dengan Sentinel

Proses pencarian sequential **data belum terurut tanpa sentinel** :

- pada dasarnya pencarian ini hanya melakukan pengulangan dari elemen ke-1 sampai dengan jumlah data. 
- pada setiap pengulangan, dibandingkan data ke-i dengan yang dicari,
- apabila sama berarti data telah ditemukan,
- sebaliknya apabila sampai akhir pengulangan tidak ada yang sama, berarti data tidak ada.

Proses pencarian sequential **data belum terurut dengan sentinel** :
- pada dasarnya pencarian ini sama dengan proses pencarian sequential data belum terurut tanpa sentinel yaitu melakukan pengulangan dari elemen ke-1 sampai dengan jumlah data. 
- pada setiap pengulangan, dibandingkan data ke-i dengan yang dicari,
- apabila sama berarti data telah ditemukan,
- perbedaannya dengan yang tanpa sentinel adalah ketika data ditemukan tapi data tersebut adalah sentinel berarti data tidak ada.

Proses pencarian sequential **data sudah terurut** :

- Dimulai dari elemen pertama pada Array, dilakukan pembandingan dengan elemen yang dicari. Jika elemen dalam Array masih lebih kecil dari elemen yang dicari maka pencarian diteruskan. Jika sudah lebih besar, pencarian dihentikan, dan bisa dipastikan bahwa elemen yang dicari memang tidak ada.
- Jika digunakan cara pencarian dengan sentinel (elemen yang dicari disisipkan di index setelah data terakhir), dan elemen yang dicari lebih besar dari data terakhir yang ada di Array sehingga data yang dicari sama dengan data sentinel maka dapat disimpulkan bahwa data tidak ditemukan.

**Contoh**

Contoh dari Sequential Search, yaitu:

Array

Int A[8] = {9,1,5,2,7,6,11,3}

![Screenshot 2024-04-08 120421](https://github.com/rennanvra/Praktikum-4/assets/162097323/65123d66-72f2-49f9-82bd-902b383453a3)

Gambar 1. Ilustrasi Sequential Search

Misalkan, dari data di atas angka yang akan dicari adalah angka 7 dalam array A, maka proses yang akan terjadi yaitu:
- Pencarian dimulai pada index ke-0 yaitu angka 9, kemudian
dicocokkan dengan angka yang akan dicari, jika tidak sama maka
pencarian akan dilanjutkan ke index selanjutnya.
- Pada index ke-1, yaitu angka 1, juga bukan angka yang dicari, maka
pencarian akan dilanjutkan pada index selanjutnya.
- Pada index ke-2 dan index ke-3 yaitu angka 5 dan 2, juga bukan
angka yang dicari, sehingga pencarian dilanjutkan pada index
selanjutnya.
- Pada index ke-4 yaitu angka 7 dan ternyata angka 7 merupakan
angka yang dicari, sehingga pencarian akan dihentikan dan proses
selesai.


## 2. Binary Search
Dalam Pencarian Binary Search, data yang ada harus diurutkan terlebih dahulu berdasarkan suatu urutan tertentu yang dijadikan kunci pencarian. Binary Search dalah teknik pencarian data dalam dengan cara membagi data menjadi dua bagian setiap kali terjadi proses pencarian[3]. Algoritma ini biasanya banya diguankan untuk mencari suatu key pada array dengan jumlah elemen yang banyak, dimana kompleksitas dari algoritma ini adalah O(log n). Dalam penerapannya algoritma ini sering digabungkan dengan algoritma sorting karena data yang akan digunakan harus sudah terurut terlebih dahulu[4].

Prinsip atau cara kerja pencarian biner adalah:
1.	mula-mula diambil posisi awal=1 dan posisi akhir=n
2.	kemudian kita cari posisi data tengah dengan rumus posisi tengah = (posisi awal + posisi akhir) div 2
3.	kemudian data yang dicari dibandingkan dengan data tengah

    a.	jika sama, data ditemukan, proses selesai. 

    b. jika lebih kecil, proses dilakukan kembali tetapi posisi akhir dianggap sama dengan posisi tengah - 1.
    c. jika lebih besar, proses dilakukan kembali tetapi posisi awal dianggap sama dengan posisi tengah + 1.
4.	ulangi langkah 2 sampai data ditemukan, atau tidak ditemukan.
5.	Pencarian biner ini akan berakhir jika data ditemukan atau posisi awal lebih besar dari pada posisi akhir. Jika posisi awal sudah lebih besar daripada posisi akhir berarti data tidak ditemukan.[2].

**Contoh**
![Screenshot 2024-04-08 121319](https://github.com/rennanvra/Praktikum-4/assets/162097323/5474ad61-8dfd-42b6-b530-626a37de91a8)

Gambar 2. Ilustrasi Binary Search

- Terdapat sebuah array yang menampung 7 elemen seperti ilustrasi
di atas. Nilai yang akan dicari pada array tersebut adalah 13
- Jadi karena konsep dari binary search ini adalah membagi array
menjadi dua bagian, maka pertama tama kita cari nilai tengahnya
dulu, total elemen dibagi 2 yaitu 7/2 = 4.5 dan kita bulatkan jadi 4.
- Maka elemen ke empat pada array adalah nilai tengahnya, yaitu
angka 9 pada indeks ke 3
- Kemudian kita cek apakah 13 > 9 atau 13 < 9?
- 13 lebih besar dari 9, maka kemungkinan besar angka 13 berada
setelah 9 atau di sebelah kanan. Selanjutnya kita cari ke kanan dan
kita dapat mengabaikan elemen yang ada di kiri
- Setelah itu kita cari lagi nilai tengahnya, didapatlah angka 14 sebagai
nilai tengah. Lalu, kita bandingkan apakah 13 > 14 atau 13 < 14?
- Ternyata 13 lebih kecil dari 14, maka selanjutnya kita cari ke kiri
- Karna tersisa 1 elemen saja, maka elemen tersebut adalah nilai
tengahnya. Setelah dicek ternyata elemen pada indeks ke-4 adalah
elemen yang dicari, maka telah selesai proses pencariannya.

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

Source code:
```C++
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential Search
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
    cout << "\n\t Program Sequential Search Sederhana\n" << endl;
    cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu){
        cout << "\n angka "<< cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;

}
```

#### Output

![Screenshot 2024-04-08 103957](https://github.com/rennanvra/Praktikum-4/assets/162097323/0e307303-6bc5-4896-8170-7c5e38ab8e6c)

#### Interpretasi:
Program di atas adalah contoh dari implementasi algoritma Sequential Seach. Dimana program akan membuat sebuah array dengan 10 elemen. Program tersebut akan mencari suatu elemen dengan menggunakan loop **for**. Kemudian akan mencetak hasil apakah elemen yang dicari ditemukan atau tidak.

### 2. Buatlah sebuah project untuk melakukan pencarian data denganmenggunakan Binary Search

```C++
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int cari;

void selection_sort(int data[], int length) {
    int temp, min, i, j;
    for(i = 0; i < length; i++) {
        min = i;
        for(j = i + 1; j < length; j++) {
            if(data[j] < data[min]) {
                min=j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void binarysearch(int data[], int length) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = length - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(data[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if(b_flag == 1)
        cout<<"\n Data ditemukan pada index ke- " << tengah << endl;
    else
        cout<<"\n Data tidak ditemukan\n";
}

int main() {
    int data[7] = {1, 8, 2, 5, 4, 9, 7};
    int length = sizeof(data) / sizeof(data[0]);

    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";
    // Tampilkan data awal
    for(int x = 0; x<7; x++)
        cout << setw(3) << data[x];
    cout << endl;

    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;

    cout << "\n Data diurutkan : ";
    // Urutkan data dengan selection sort
    selection_sort(data, length);

    // Tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++)
        cout << setw(3) << data[x];
    cout << endl;

    binarysearch(data, length);
    _getche();
    return EXIT_SUCCESS;
}
```

#### Output:

![Screenshot 2024-04-08 104025](https://github.com/rennanvra/Praktikum-4/assets/162097323/5b0ad85c-678a-45ab-af4b-9bedd11b4efa)

#### Interpretasi:
Program di atas adalah contoh dari implementasi Binary Search. Program di atas akan mencari sebuah angka dalam array yang telah diurutkan sebelumnya dengan menggunakan Selection Sort. Kemudian program akan mencetak hasil apakah angka yang dicari ditemukan atau tidak. Apabila angka ditemukan, maka program akan mencetak indeksnya.

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuahkalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void selection_sort(string &kalimat) {
    sort(kalimat.begin(), kalimat.end());
}

string toLowerCase(string kalimat) {
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    return kalimat;
}

bool binarySearch(string kalimat, char target) {
    int awal = 0;
    int akhir = kalimat.length() - 1;

    while (awal <= akhir) {
        int tengah = awal + (akhir - awal) / 2;

        if (kalimat[tengah] == target) {
            return true;
        }

        if (kalimat[tengah] < target) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }

    return false;
}

int main() {
    string kalimat;
    char target;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;

    cout << "\nKalimat setelah diurutkan : ";
    selection_sort(kalimat);
    cout << kalimat << endl;

    kalimat = toLowerCase(kalimat);
    target = tolower(target);

    bool ditemukan = binarySearch(kalimat, target);

    if (ditemukan) {
        cout << "Huruf " << target << " ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf " << target << " tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
```

#### Output:
![Screenshot 2024-04-08 111137](https://github.com/rennanvra/Praktikum-4/assets/162097323/d7b175d9-8499-431d-a95c-f0b03a070fca)


#### Interpretasi:
Program di atas menggunakan algoritma Binary Search untuk mencari sebuah huruf dalam kalimat yang diinputkan pengguna. Pertama-tama program akan mengurutkan huruf-huruf menggunakan algoritma Selection Sort, lalu diubah menjadi huruf kecil. Setelah pengguna menginputkan huruf yang akan dicari, program akan menjalankan binary seacrh. Kemudian akan mencetak hasil apakah huruf yang dicari ditemukan dalam kalimat atau tidak.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya hurufvocal dalam sebuah kalimat!

```C++
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
```

#### Output:

![Screenshot 2024-04-08 111332](https://github.com/rennanvra/Praktikum-4/assets/162097323/09c12f07-b004-423c-a9e6-840f82790391)


#### Interpretasi:
Program di atas adalah suatu program untuk menghitung total huruf vokal dalam suatu kalimat yang diinputkan oleh pengguna. Proses tersebut menggunakan loop **for** untuk memeriksa huruf vokal (a,i,u,e,o) pada setiap karakter, apabila ditemukan maka akan bertambah jumlah huruf vokalnya. Kemudia program akan mencetak jumlah huruf vokal yang terdapat pada kalimat yang diinputkan oleh pengguna tersebut. 

### 3.  Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyakangka 4 dengan menggunakan algoritma Sequential Search!


```C++
#include <iostream>
using namespace std;

int hitungAngka(int data[], int size, int angka) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (data[i] == angka) {
            count++;
        }
    }

    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int size = sizeof(data) / sizeof(data[0]);
    int angka = 4;

    // Menghitung berapa banyak angka 4 dalam data
    int jumlahAngka = hitungAngka(data, size, angka);

    cout << "Jumlah angka " << angka << " dalam data tersebut adalah: " << jumlahAngka << endl;

    return 0;
}
```
#### Output

![Screenshot 2024-04-08 111347](https://github.com/rennanvra/Praktikum-4/assets/162097323/03b60b13-8818-4fd1-aa13-6ae2ecfae408)

#### Interpretasi:
Program di atas adalah program untuk menghitung berapa banyak angka yang ingin dihitung pada suatu array, dalam kasus ini adalah angka 4. Program ini berguna untuk menghitung frekuensi kemunculan angka terntentu dalam sebuah data atau array. Apabila sudah ditemukan, program akan mencetak total angka yang ingin dicari dalam suatu array tersebut. 

## Kesimpulan
Algoritma pencarian adalah proses mendasar untuk menemukan elemen atau item tertentu dalam kumpulan data . Kumpulan data ini dapat mengambil berbagai bentuk, seperti array, daftar, pohon, atau representasi terstruktur lainnya. Ada dua jenis utama algoritma pencarian: Pencarian Sequential dan Pencarian Binary. Pencarian Sequential dapat digunakan pada data dalam keadaan acak atau tidak terurut maupun yang sudah terurut. Terdapat dua jenis pencarian Sequential: untuk array yang belum terurut dan array yang sudah terurut. Pada Pencarian Binary data yang telah diurutkan terlebih dahulu. Algoritma ini membagi data menjadi dua bagian setiap kali dilakukan pencarian, mengurangi jumlah data yang perlu diperiksa secara signifikan.

## Referensi
[1] GeeksforGeeks. (n.d.). Searching Algorithms. Diakses pada 8 April 2024, dari https://www.geeksforgeeks.org/searching-algorithms/

[2] Repositori=y Unikom. Materi Alpro2. Diakses pada 8 April 2024, dari https://repository.unikom.ac.id/31358/1/Materi%20Alpro2.doc

[3] FIRLIANA, R., & Kasih, P. (2018). Algoritma dan Pemrograman C++. 

[4] Muhammad Wafa. Binary Search. Diakses pada 8 April 2024, dari  https://mikirinkode.com/binary-search/