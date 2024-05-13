# <h1 align="center">Laporan Praktikum Modul 2 Array</h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemen array bertipe sama. Array cocok untuk kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama [1]. Berikut adalah jenis array: 

## 1. Array Satu Dimensi
Array satu dimensi adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda.  Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan[1]. Array  1  Dimensi  ,  array  adalah  hal  yang paling   penting   dalam   setiap   bahasa   pemrograman. Menurut  definisi,  array  adalah  alokasi  memori  statis.  Ini mengalokasikan   memori   untuk   tipe   data   yang   sama secara berurutan. Ini berisi beberapa nilai jenis yang sama. Hal  ini  juga  menyimpan  nilai-nilai  dalam  memori  pada ukuran tetap[2].  Setiap elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada jumlah elemen dikurangi satu.

Contohnya, sebuah array satu dimensi yang berisi bilangan bulat {1, 2, 3, 4, 5} memiliki lima elemen dan indeksnya dimulai dari 0. Indeks 0 merujuk pada elemen pertama, indeks 1 merujuk pada elemen kedua, dan seterusnya hingga indeks 4 merujuk pada elemen kelima.

Contoh:
```C++
#include <iostream>
using namespace std;

int main() {
int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
cout<< arr[1] << endl;
cout<< arr[4];
}
```
Output:

![dt1](https://github.com/rennanvra/Praktikum-2/assets/162097323/3df40719-0fc0-40e1-a893-e61b1e988973)


## 2. Array Dua Dimensi
Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama[1]. Dengan   demikian   array   dua   dimensi   tersusun dalam   bentuk   kolom   serta   baris,   yang   mana   indeks pertamanya  dinyatakan  sebagai  baris  dan  untuk  indeks keduanya dinyatakan sebagai kolom[2]. Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris, sementara indeks kolom menunjukkan posisi elemen dalam kolom.

Contoh :

```C++
#include <iostream>
using namespace std;

int main() {
int arr[2][2] = {{3, 2}, {2, 5}};
    for (int i=0; i<2; i++) { //baris
        for(int j=0; j<2; j++) { //kolom
            cout<< arr[i][j] << ends;
        };
        cout << endl;
    };
}
```

Output:

![dt2](https://github.com/rennanvra/Praktikum-2/assets/162097323/5d628067-92f8-48de-a300-d53e6c45ed31)



## 3. Array Multidimensi
 Array multidimensi adalah larik yang berisi satu atau lebih larik. Array Multidimensi merupakan array yang serupa dengan array satu dimensi maupun array dua dimensi, namun array multidimensi dapat memiliki memori yang lebih besar. Biasanya array multidimensi digunakan untuk menyebut array dengan dimensi lebih dari dua atau array yang mempunyai lebih dari dua subskrip, seperti untuk menyebut array tiga dimensi, empat dimensi, lima dimensi dan seterusnya[3].

Contoh :
```C++
#include <iostream>
using namespace std;

int main() {
    int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8, 5, 2}, {9, 2 ,7}}};
    for (int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<3; k++) {
                cout<< arr[i][j][k] << ends;
            };
            cout<< endl;
        };
        cout<< endl;
    };
}
```

Output :

![dt3](https://github.com/rennanvra/Praktikum-2/assets/162097323/b42a8de8-afdc-493a-b5af-84bc7818d4b7)

## 4. Array Empat Dimensi
Contoh:
```C++
int arr [3][2][4][4];
```

## 5. Array Lima Dimensi
Contoh:
```C++
int arr [2][4][4][3][3];
```

## 6. Kelebihan dan Kelemahan Array
a. Kelebihan

Keunggulan array adalah sebagai berikut:
- Array sangat cocok untuk pengaksesan acak. sembarang elemen di array dapat diacu secara langsung tanpa melalui elemen-elemen lain[4].
- Jika berada di suatu lokasi elemen, maka sangat mudah menelusuri ke elemen-elemen tetangga, baik elemen pendahulu atau elemen penerus[4].
- Jika elemen-elemen array adalah nilai-nilai independen dan seluruhnya harus terjaga, maka penggunaan penyimpanannya sangat efisien [4].

b. Kekurangan 

Kekurangan array adalah sebagi berikut:

- Array mempunyai fleksibilitas rendah, sehingga tidak cocok untuk berbagai aplikasi [4].
- Array harus bertipe homogrn[4].
- Tidak efisien dalam penggunaan memori [4].
- Menyiapkan banyak waktu komputasi [4].


## Guided 

### 1. [Program Input Array Tiga Dimensi]

```C++
#include <iostream>
using namespace std;

// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi Array
    int arr[2][3][3];
    // Input elemen
    for (int x= 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array [" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x <<"]["<< y <<"][" << z <<"] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```

#### Output

![g1p2](https://github.com/rennanvra/Praktikum-1/assets/162097323/d6b4dd30-f83d-4c0c-8461-0f6e57b1a160)

#### Interpretasi:
Kode di atas adalah sebuah program yang diciptakan untuk membentuk sebuah array tiga dimensi dengan memanfaatkan variabel x, y, dan z. Array yang telah ditentukan panjangnya dideklarasikan dalam bentuk integer yang mana hanya menyimpan bilangan bulat, lalu user dapat menginput bilangan yang ingin disimpan ke Array untuk ditampilkan. Di samping itu, program ini dilengkapi dengan penggunaan perulangan yang memungkinkan pengguna untuk memasukkan berbagai jenis bilangan atau elemen ke dalam array tersebut. Hasilnya, program mampu menampilkan data dari array yang telah dimasukkan oleh pengguna serta memperlihatkan tampilan visual dari array tersebut.


### 2. [Program Mencari Nilai Maksimal pada Array]

```C++
#include <iostream>
using namespace std;

int main()
{
    // deklarasi variabel
    int maks, a, i = 1, lokasi;
    // masukkan data
    cout << "Masukkan array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " Angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array [0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di array ke " << lokasi << endl;
}
```

#### Output:

![g2p2](https://github.com/rennanvra/Praktikum-1/assets/162097323/fb017429-70f4-4e10-90f8-c690fc944ee1)

#### Interpretasi:
Program ini adalah program untuk mengetahui nilai maksimum dalam suatu Array. Dengan menggunakan struktur perulangan dan percabangan, program ini mengelola proses pengisian array dengan nilai-nilai yang dimasukkan oleh pengguna. Setelah selesai mengisi array, program akan melakukan pencarian untuk menemukan nilai maksimum dari seluruh elemen array yang telah diinputkan.


## Unguided 

### 1. [Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!]


```C++
#include <iostream>
using namespace std;

int main(){
    int data [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Data Array :" ;
    for(int i = 0; i < 10; i++){
        cout<< data[i]<< " ";

    }
    cout<<endl;
    cout<<"Nomor Genap :";
    for (int i = 0; i < 10; i++){
        if (data[i] % 2 ==0)
    {
        cout << data[i]<< " ";
    }
}
cout<<endl;
    cout<<"Nomor Ganjil :";
    for(int i = 0; i < 10; i++)

    {
        if(data[i] % 2 ==1)
    {
        cout<< data[i]<< " ";

    }
    }
    cout<<endl;
    return 0;
}
```

#### Output:
![u1p2](https://github.com/rennanvra/Praktikum-1/assets/162097323/e3d0a438-ea5f-4491-afac-d483d09386a4)


#### Interpretasi:
Program di atas adalah program yang membuat sebuah array `data` dengan ukuran 10 dan menginisialisasinya dengan nilai 1 hingga 10. Kemudian, program akan menggunakan loop for untuk menampilkan seluruh elemen array tersebut, untuk menampilkan semua nomor genap yang ada dalam arraydan terakhir adalah untuk menampilkan semua nomor ganjil dalam array. Setiap kelompok angka ditampilkan dalam satu baris terpisah.


### 2. [Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!]

```C++
#include <iostream> 
using namespace std;

int main() 
{
    int X, Y, Z;

    cout << "\nMasukkan ukuran X: "; cin >> X; 
    cout << "Masukkan ukuran Y: "; cin >> Y; 
    cout << "Masukkan ukuran Z: "; cin >> Z; cout << endl;
    
    int data_array[X][Y][Z];
    
    for (int x = 0; x < X; x++) { 
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                cout << "Input Array [" << x << "][" << y <<
"][" << z << "] = "; cin >> data_array[x][y][z]; 
            }
        }
    }
    cout << endl;

    cout << "Data Array :\n"; 
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) { 
            for (int z = 0; z < Z; z++) {
                cout << "Data Array [" << x << "][" << y << 
"][" << z << "] = " << data_array[x][y][z] << endl;
            } 
        }
    }
    cout << endl;

    cout << "Array :\n";
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) { 
            for (int z = 0; z < Z; z++) {
                cout << data_array[x][y][z] << ' '; 
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
```

#### Output:

![u2p2](https://github.com/rennanvra/Praktikum-1/assets/162097323/34d0b055-2fdc-4c9c-9c70-6880004f7e13)

#### Interpretasi:
Program di atas akan meminta pengguna untuk memasukkan ukuran untuk setiap dimensi dari array yang ingin dibuat, yaitu dimensi X, Y, dan Z. Setelah menerima input ini, program akan membuat array "data_array" yang memiliki dimensi tersebut. Selanjutnya, pengguna akan diminta untuk mengisi setiap elemen array ini. Program memungkinkan pengguna memasukkan nilai untuk setiap elemen array sambil menyertakan pesan yang jelas yang menunjukkan posisi elemen dalam array. Nilai array bersama dengan indeksnya ditampilkan dalam format "Data Array [x][y][z] = nilai", sehingga mudah untuk mengetahui di mana setiap nilai berada d Selain itu, program menampilkan array secara keseluruhan hanya dengan nilai-nilai yang tersusun dalam bentuk matriks tiga dimensi, tanpa pesan apa pun.


### 3. [Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!]


```C++
#include <iostream>
using namespace std;

int main (){
    int pilihan, n;
    cout << "======================================="<<endl;
    cout << "           Program Menu Array          "<<endl;
    cout << "======================================="<<endl;

    cout<<endl;
    cout<<endl;

    cout <<"Masukkan jumlah elemen array:";
    cin >> n;
    int arr[n];
    cout <<"Masukkan " << n <<" elemen array: ";
    for (int x= 0; x < n; x++){
        cin >> arr[x];
    }
    while (true){
        cout << "\nMenu: \n1. Cari nilai maksimum\n2. Cari nilai minimum\n3. Cari nilai rata-rata\n4. Keluar\n";
        cout << "Pilihan:";
        cin >> pilihan;
        switch(pilihan){
            case 1: {
                int max = arr[0];
                for (int x = 1; x < n; x++){
                    if(arr [x]> max){
                        max = arr[x];
                    }
                }
                cout << "Nilai maksimum:" << max << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for(int x =1; x < n; x++){
                    if (arr[x]< min){
                        min = arr[x];
                    }
                }
                cout << "Nilai minimum:" << min << endl;
                break;
            }
            case 3: {
                int sum = 0;
                double avg;
                for (int x = 0; x < n; x++){
                    sum += arr[x];
                }
                avg = (double)sum / n;
                cout << "Nilai rata-rata:" << avg << endl;
                break;
            }
            case 4: {
                cout << "Terima kasih!" << endl;
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid, silahkan coba lagi!" << endl;
            }
        }
    }
    return 0;
}
```

#### Output:
![u3p2](https://github.com/rennanvra/Praktikum-1/assets/162097323/65980fbd-61d1-4be9-9ecb-9c676f159bcc)


#### Interpretasi:

Program di atas adalah program menu sederhana untuk mengelola array. Ini dimulai dengan judul "Program Menu Array" dan meminta pengguna untuk memasukkan jumlah elemen yang ingin mereka masukkan. Kemudian program membuat array dengan ukuran yang sesuai. 

Setelah array dibuat dan diisi dengan nilai yang dimasukkan pengguna, program menampilkan menu pilihan dengan empat opsi: mencari nilai maksimum, mencari nilai minimum, mencari nilai rata-rata dari semua elemen array, dan keluar dari program. Program akan menjalankan fungsi sesuai dengan pilihan yang dipilih oleh pengguna ketika mereka memilih salah satu opsi di menu. Jika pengguna memilih untuk mencari nilai maksimum, program akan mencari nilai maksimum dari elemen array dan menampilkannya. Itu juga berlaku untuk nilai minimun dan rata-rata.

Selain itu, jika pengguna memilih untuk keluar dari program, program akan menampilkan pesan "Terima kasih!" dan keluar dari loop menu.

Untuk terus menampilkan menu dan menerima input pengguna hingga pengguna memilih untuk keluar dari program, program menggunakan loop while (true) untuk memvalidasi input pengguna. Jika pengguna memasukkan pilihan yang tidak valid, program akan memberikan pesan peringatan.

## Kesimpulan

Dalam pemrograman, array adalah struktur data yang penting yang terdiri dari sejumlah elemen dengan tipe data yang sama, yang disusun secara sekuensial dalam memori komputer. Karakteristik utama dari array adalah bahwa semua elemen di dalamnya memiliki tipe data yang identik, sehingga cocok digunakan untuk menyimpan data homogen di mana jumlah elemen maksimum telah diketahui sebelumnya. Terdapat beberapa jenis array, antara lain adalah Array Satu Dimensi. array Dua Dimensi, array Multidimensi, dll. 

Ada pola umum dalam penggunaan array setelah pembuatan tiga program tersebut, seperti kemampuan untuk menyimpan data, kemampuan pengolahan data untuk melakukan perulangan, dan operasi perhitungan, dan kemampuannya untuk memungkinkan user memilih bentuk array, menginput data, dan memberikan output sesuai keinginan mereka. Oleh karena itu, penggunaan array dapat dianggap sebagai alat yang sangat berguna untuk mengelola data secara terstruktur dan efisien.

## Referensi
[1] Pratama, M. A. (2020). STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++.

[2] Efendi, Y. (2022). Buku Ajar Pendidikan Algoritma dan Struktur Data.

[3] Rus'an, J.A.P., “Program C++ : Array Multidimensi Menghitung Nilai Tertinggi, Perkalian Matriks, dan Rata-rata”, 30-Des-2022. [Online]. Available: https://medium.com/@jasmeinalbaar29/program-c-array-multidimensi-menghitung-nilai-tertinggi-perkalian-matriks-dan-rata-rata-3d175f2792da. 

[4] Suhendar, A. (2019). Struktur data sederhana (statis array).