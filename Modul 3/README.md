# <h1 align="center">Laporan Praktikum Modul 3 Sorting</h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

Sorting atau   pengurutan adalah   proses menyusun elemen–elemen dari masukan awal acak  menjadi  keluaran  akhir  tertata  dengan urutan tertentu[1]. Setiap algoritma pengurutan memiliki pendekatan dan metode yang berbeda-beda dalam menjalankan fungsinya. Secara garis besar, algoritma pengurutan dapat dikelompokkan menjadi dua kategori, yaitu algoritma pengurutan berbasis perbandingan (comparison based) dan tidak berbasis perbandingan (non-comparison based)[2]. Berdasarkan data terurutnya, algoritma sorting dibagi menjadi dua jenis, yaitu:
- Ascending; pengurutan dari terkecil hingga terbesar. Contoh: a, b, c, d, e.
- Descending; pengurutan dari nilai terbesar hingga terkecil. Contoh: e, d, c, b, a


## 1. Insertion Sort
Insertion sort adalah algoritma pengurutan sederhana yang bekerja dengan membagi array menjadi dua bagian, bagian yang diurutkan dan bagian yang tidak disortir. Dalam setiap iterasi, elemen pertama dari subarray yang tidak disortir diambil dan ditempatkan pada posisi yang benar dalam array yang diurutkan[3]. Apabila ditemukan data yang lebih kecil dari data sebelumnya, maka data tersebut disisipkan pada posisi yang sesuai.

- Pseudocode Algoritma Insertion Sort
    ```
    for i = 1 to n-1
        set j = i
        set t = a[j]
        repeat while j > 0 and a[j-1] > t
            move a[j-1] to right
        end repeat
        set a[j] = t
    end for
    ```
- Prosedur Insertion Sort dalam bahasa C++:

    ```
    void insertion_sort(int arr[], int length) {
        int i, j ,tmp;

        for (i = 1; i < length; i++) {
                j = i;

            while (j > 0 && arr[j - 1] > arr[j]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                j--;
            }//end of while loop
        }//end of for loop
    }
    ```
- Contoh

    Diketahui array suatu integer terdiri dari 6 elemen sebagai berikut; {22, 10, 15, 3, 8, 2}. Contoh Program untuk mengurutkan ke-6 elemen tersebut adalah sebagai berikut:

    ```C++
    #include <iostream>
    using namespace std;

    void insertion_sort(int arr[], int length) {
        int i, j ,tmp;
 
        for (i = 1; i < length; i++) {
            j = i;
 
            while (j > 0 && arr[j - 1] > arr[j]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
                j--;
            }//end of while loop
        }//end of for loop
    }
    ```


## 2. Bubble Sort
Algoritma Bubble Sort adalah algoritma yang terinspirasi dari gelembung sabun yang berada pada permukaan air. Karena berat jenis gelembung sabun lebih ringan daripada berat jenis air, maka gelembung sabun akan terapung ke atas permukaan. Apabila kita menginginkan larik terurut naik, maka elemen larik yang paling kecil diapungkan ke atas melalui proses pertukaran atau bisa disebutkan bahwa arah perbandingan dilakukan dari belakang[4]. Cara mengurutkannya adalah membandingkan elemen yang sekarang dengan elemen yang berikutnya. Jika elemen sekarang> elemen berikutnya, maka tukar.

Contoh Prosedur Bubble Sort dalam bahasa C++:

```C++
void bubble_sort(int arr[], int length){
    bool not_sorted = true;
    int j=0,tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort
```

## 3. Selection Sort
Selection Sort adalah algoritma pengurutan sederhana yang digunakan untuk mengurutkan elemen-elemen dalam sebuah array. Algoritma ini bekerja dengan mencari elemen terkecil atau terbesar dalam array dan menukar posisinya dengan elemen pertama. Kemudian, mencari elemen terkecil atau terbesar berikutnya dalam sisa array yang belum terurut dan menukar posisinya dengan elemen kedua. Proses ini diulangi secara berulang hingga seluruh array terurut [5]. Cara mengurutkannya adalah dengan membandingkan elemen sekarang dengan elemen yang berikutnya sampai terakhir. Jika ditemukan elemen paling kecil, kemudian ditukar dengan elemen sekarang

Contoh prosedur Selection Sort:
```C++
void selectSort(int arr[], int n) {
    int pos_min,temp;
        for (int i=0; i < n-1; i++) {
            pos_min = i;
                for (int j=i+1; j < n; j++) {
                if (arr[j] < arr[pos_min])
                    pos_min=j;
                }

            if (pos_min != i) {
                temp = arr[i];
                arr[i] = arr[pos_min];
                arr[pos_min] = temp;
            }
        }
}
```

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>
using namespace std;

// Mengurutkan secara ascending untuk data bertipe numerik bertipe double menggunakan Algoritma Bubble Sort
void bubble_sort(double arr[], int length) {
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }// end of if
        }// end of for loop
    }//end of while loop
}// end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};

    cout << "Urutkan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutkan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```

#### Output

![Screenshot 2024-04-01 100301](https://github.com/rennanvra/Praktikum-2/assets/162097323/89523725-97fa-4d0d-a186-1cd5988d56f9)

#### Interpretasi:
Program di atas adalah contoh dari algoritma Bubble Sort. Program ini mengurutkan array 'a' yang berisi data numerik yang bertipe double secara ascending (terkecil ke terbesar). Kemudian akan mencetak array sebelum diurutkan dan sesudah diurutkan.

#### Analisis Kompleksitas Waktu
- Best Case : **O(n)**, karena pada best case (array sudah terurut), hanya dilakukan satu kali perulangan untuk mengetahui apakah ada pertukaran atau tidak. Namun, meskipun data sudah terurut, Bubble Sort tetap harus melakukan perulangan penuh sekali.
- Worst and Average Case: **O(n^2),** n adalah jumlah elemen dalam array. Karena algoritma Bubble sort perlu melakukan perulangan bersarang atau nested loop, yaitu perulangan untuk setiap elemen array dan perulangan dalam setiap iterasi untuk mencari elemen yang harus ditukar.
#### Analisis Kompleksitas Ruang
- **O(1)**, konstan. Karena Bubble sort tidak memerlukan tambahan memori karena adanya penambahan ukuran input (n), hanya menggunakan ruang konstan tambahan yang tidak tergantung pada ukuran input.


### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort


```C++
#include <iostream>
using namespace std;

// Mengurutkan karakter secara descending menggunakan Algoritma Insertion sort
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}


void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
 
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
 
    insertion_sort(a, length);
    
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```

#### Output:

![Screenshot 2024-04-01 105956](https://github.com/rennanvra/Praktikum-2/assets/162097323/deade445-632e-47f0-98aa-63d228c8e4ef)

#### Interpretasi:
Program di atas menggunakan algoritma sorting Insertion Sort untuk mengurutkan sebuah data dalam array secara descending (nilai tertinggi ke nilai terendah). Program di atas secara berurutan menempatkan setiap elemen ke posisi yang tepat, dan memastikan bahwa array secara keseluruhan terurut. Kemudian program akan mencetak data yang belum teurut dan yang sudah terurut.

#### Analisis Kompleksitas Waktu
- Best Case : **O(n)**, karena pada best case (array sudah terurut), algoritma hanya perlu melakukan satu kali perulangan untuk setiap elemen array.
- Worst and Average Case : **O(n^2),** n adalah jumlah elemen dalam array. Karena walaupun insertion sort dan bubble sort memiliki sedikit perubahan, tetapi tetap saja pada insertion sort harus memindahkan setiap elemen ke posisi yang tepat dalam iterasi terbaik.

#### Analisis Kompleksitas Ruang
- **O(1)**, konstan. Karena Insertion sort tidak memerlukan tambahan memori karena adanya penambahan ukuran input (n), hanya menggunakan ruang konstan tambahan yang tidak tergantung pada ukuran input.


## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!


```C++
#include <iostream> 
using namespace std;

void selection_sort(float arr[], int n) {
    for (int i = 0; i < n-1; i++) { 
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) { 
                min = j;
        }
    }
    if (min != i) {
        float temp = arr[i]; 
        arr[i] = arr[min]; 
        arr[min] = temp;
        }
    }
    cout << endl; 
}

void print_array(float arr[], int n) { 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main() {
    int length = 5;
    float a[length] = {3.8, 2.9, 3.3, 4.0, 2.4};
    cout << "IPS mahasiswa sebelum sorting: " << endl; 
    print_array(a, length);
    selection_sort(a, length);
    cout << "IPS maha siswa setelah sorting: " << endl; 
    print_array(a, length);

return 0; 
}

```

#### Output:
![Screenshot 2024-04-01 115357](https://github.com/rennanvra/Praktikum-2/assets/162097323/fefd04bc-40f1-4aa6-9a76-647d5b4a4ee6)


#### Interpretasi:
Program di atas menggunakan algoritma Selection Sort untuk mengurutkan array **a** yang berisi nilai-nilai Indeks Prestasi Semester (IPS) mahasiswa. Kemudian setelah diurutkan, program akan mencetak nilai-nilai IPS sebelum dan sesudah terurut.

#### Analisis Kompleksitas Waktu
- Best, Worst and Average Case : **O(n^2),** n adalah jumlah elemen dalam array. Kompleksitasnya tetap O(n^2), meskipun tidak ada perbedaan signifikan dalam jumlah perbandingan antara best, worst, average case karena algoritma di atas melakukan dua perulangan nested loop, di mana perulangan luar dijalankan sebanyak n kali (untuk setiap elemen dalam array), dan perulangan dalam dijalankan sebanyak (n-1) kali pada setiap iterasi luar. 

#### Analisis Kompleksitas Ruang
- **O(1)**, konstan. Karena algoritma di atas tidak memerlukan tambahan memori karena adanya penambahan ukuran input (n), hanya menggunakan ruang konstan tambahan yang tidak tergantung pada ukuran input.


### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort! 

```C++
#include<iostream>
using namespace std;

void bubble_sort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << endl;
}

void print_array(string arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int jumlah = 10;
    string nama[jumlah] = {"siti,", "situ,", "sana,", "ana,", "ani,",
"caca,", "cici,", "dida,", "dodo,", "dadi,"};
    cout << "Nama-nama warga sebelum diurutkan: " << endl;
    print_array(nama, jumlah);
    bubble_sort(nama, jumlah);
    cout << "Nama-nama warga setelah diurutkan: " << endl;
    print_array(nama, jumlah);

    return 0;
}
```

#### Output:

![Screenshot 2024-04-01 115603](https://github.com/rennanvra/Praktikum-2/assets/162097323/cd4e6d6d-9205-4cdc-a2c4-2415ef46b66b)


#### Interpretasi:
Program di atas menggunakan algoritma Bubble Sort untuk mengurutkan array nama yang berisi string berupa nama-nama warga. Setelah diurutkan, program mencetak nama-nama warga tersebut sebelum dan sesudah proses pengurutan.

#### Analisis Kompleksitas Waktu
- Best Case : **O(n)**, karena pada best case (array sudah terurut), hanya dilakukan satu kali perulangan untuk mengetahui apakah ada pertukaran atau tidak. Namun, meskipun data sudah terurut, Bubble Sort tetap harus melakukan perulangan penuh sekali.
- Worst and Average Case: **O(n^2),** n adalah jumlah elemen dalam array. Karena algoritma Bubble sort perlu melakukan perulangan bersarang atau nested loop pada kasus terburuk, yaitu perulangan untuk setiap elemen array dan perulangan dalam setiap iterasi untuk mencari elemen yang harus ditukar.
#### Analisis Kompleksitas Ruang
- **O(1)**, konstan. Karena Bubble sort tidak memerlukan tambahan memori karena adanya penambahan ukuran input (n), hanya menggunakan ruang konstan tambahan yang tidak tergantung pada ukuran input.


### 3. [Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!]


```C++
#include<iostream>
using namespace std;

void bubble_sort_ascending(char arr[], int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubble_sort_descending(char arr[],int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "input (n): "; cin >> n;
    char karakter[n];
    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i+1 << ":";
        cin >> karakter[i];
    }
    cout << "\nUrutan karakter sebelum sorting:"<< endl;
    for (int i = 0; i < n; i++) {
        cout << karakter[i] << " ";
    }
    cout << endl;
    bubble_sort_ascending(karakter, n);
    cout << "\nUrutan karakter setelah ascending sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << karakter[i] << " ";
    }
    cout << endl;
    bubble_sort_descending(karakter, n);
    cout << "\nUrutan karakter setelah descending sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << karakter[i] << " ";
    }
    cout << endl;

return 0;
}
```
#### Output

![Screenshot 2024-04-01 120430](https://github.com/rennanvra/Praktikum-2/assets/162097323/0f8b8261-0556-46e9-abd3-0c8ed1f44caf)

#### Interpretasi:
Program di atas meminta pengguna untuk memasukkan jumlah karakter dan karakter-karakternya. Menggunakan algoritma Bubble Sort, program mengurutkan array karakter tersebut baik secara ascending maupun descending. Setelah diurutkan, program akan mencetak karakter setelah dan sebelum diurutkan baik secara ascending atau descending.

#### Analisis Kompleksitas Waktu
- Best Case : **O(n^2)**, pada kasus di atas karena walaupun pada best case (array sudah terurut), algoritma akan menjalankan loop luar sebanyak n-1 kali, meskipun tidak ada pertukaran yang terjadi di dalam loop dalam. 
- Worst and Average Case: **O(n^2),** n adalah jumlah elemen dalam array. Hal ini disebabkan oleh adanya dua loop bersarang. Loop luar akan berjalan sebanyak n-1 kali, di mana n adalah jumlah elemen dalam array. Sedangkan loop dalam akan berjalan juga sebanyak n-1 kali pada iterasi pertama, kemudian n-2 kali pada iterasi kedua, dan seterusnya hingga hanya satu kali pada iterasi terakhir. 
#### Analisis Kompleksitas Ruang
- **O(1)**, konstan. Karena Bubble sort tidak memerlukan tambahan memori karena adanya penambahan ukuran input (n), hanya menggunakan ruang konstan tambahan yang tidak tergantung pada ukuran input.

## Kesimpulan

Tiga algoritma pengurutan yang umum digunakan dalam pemrograman komputer adalah pengurutan insert, pengurutan bubble, dan pengurutan pilihan. Proses pengolahan membagi array menjadi dua bagian, yaitu bagian yang sudah diurutkan dan bagian yang belum diurutkan. Elemen dari bagian yang belum diurutkan akan diambil dan ditempatkan pada posisi yang sesuai dalam bagian yang sudah diurutkan pada setiap iterasi pengolahan penyisipan. 

secara singkat kompleksitas waktu dan ruang dari ketiga algoritma sorting adalah:

- Bubble Sort: 

    Kompleksitas Waktu : Best case **O(n)**, Worst and Average Case **O(n^2)**
    
    Kompleksitas Ruang **O(1)**.
- Insertion Sort: 

    Kompleksitas Waktu : Best Case **O(n)**, Worst and Average Case** O(n^2)** 
    
    Kompleksitas Ruang **O(1)**.
- Selection Sort: 

    Kompleksitas Waktu : Best, Worst, and Average Case **O(n^2)**
    
    Kompleksitas Ruang **O(1)**.

## Referensi
[1] Saptadi, A. H., & Sari, D. W. (2012). Analisis algoritma insertion sort, merge sort dan implementasinya dalam bahasa pemrograman c++. Jurnal Infotel, 4(2), 10-17.

[2] Kusmira, M., Mulyani, Y. S., & Karsono, K. (2015). KOMPARASI ALGORITMA QUICKSORT DAN BUCKET SORT PENGURUTAN DATA INTEGER MENGGUNAKAN BAHASA C++. Konferensi Nasional Ilmu Sosial dan Teknologi, 1(1).

[3] GeeksforGeeks. "C++ Program For Insertion Sort." [Online].   Available: https://www.geeksforgeeks.org/cpp-program-for-insertion-sort/. 

[4] Arifin, R. W., & Setiyadi, D. (2020). Algoritma Metode Pengurutan Bubble Sort dan Quick Sort Dalam Bahasa Pemrograman C++. INFORMATION SYSTEM FOR EDUCATORS AND PROFESSIONALS: Journal of Information System, 4(2), 178-â.

[5] Joandanu, L. "Selection Sort di C++." Medium. Available: https://medium.com/@danuljoan/selection-sort-di-c-7de265eb23a.