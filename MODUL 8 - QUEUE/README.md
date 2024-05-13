# <h1 align="center">Laporan Praktikum Modul 8 - QUEUE </h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori
Queue (antrian) adalah barisan elemen yang apabila elemen ditambah maka penambahannya berada di posisi belakang **(rear)** dan jika dilakukan pengambilan elemen dilakukan di elemen paling depan **(front)**[1]. Queue sendiri adalah struktur data yang hampir mirip dengan stack[2].  Jika dalam stack, data yang pertama masuk adalah yang paling akhir keluar, namun dalam queue data yang paling awal masuk adalah yang paling awal keluar. Konsep dari Queue adalah LIFO (Last In First Out)[3].


Contoh:
![Screenshot 2024-05-13 082002](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/3d484602-09e0-48c1-8801-0cdde5a099da)

Sebuah queue dalam  program  setidaknya harus mengandung    tiga variabel,    yakni: *head* untuk  penanda  bagian  depan  antrian, *tail* untuk  penanda  bagian  belakang  antrian,  dan *array data* untuk menyimpan  data-data  yang dimasukkan ke dalam queue tersebut[4].

## Karakteristik Queue

Antrian  (Queue)  merupakan  suatu  kumpulan  data  yang penambahan  elemennya(masuk  antrian)  hanya  bisa  dilakukan  pada  suatu  ujung  (disebut  dengan  sisi belakang/rear) atau disebut juga enqueueyaitu apabila seseorang masuk ke dalam sebuah antrian. Jika seseorang  keluar  dari  antrian/penghapusan  (pengembalian  elemen)  dilakukanlewat  ujung  yang  lain (disebut dengan sisi depan/front) atau disebut juga dequeue yaitu apabila seseorang keluar dari antrian. Jadi, dalam antrian menggunakan prinsip “masuk pertama keluar pertama” atau disebut juga dengan prinsip FIFO (first in first out). Dengan kata lain, urutan keluar akan sama dengan urutan masuknya[5].

Karakteristik penting antrian adalah sebagai berikut[4]:
- Element antrian yaitu item-item data yang terdapat di elemen antrian
- Front (element terdepan di antrian)
- Rear (element terakhir di antrian)
- Jumlah elemen pada antrian (Count)
- Status/kondisi antrian

Kondisi antrian yang menjadi perhatian adalah [4]:
- Penuh : Bila elemen pada antrian mencapai kapasitas maksimum antrian.
Pada kondisi ini, tidak mungkin dilakukan penambahan ke antrian.
Penambahan elemen menyebabkan kondisi kesalahan Overflow[4].
- Kosong : Bila elemen pada antrian mencapai kapasitas maksimum antrian.
Pada kondisi ini, tidak mungkin dilakukan penambahan ke antrian.
Penambahan elemen menyebabkan kondisi kesalahan Overflow[4].

Pada Queue, operasi tersebut dilakukan ditempat berbeda (melalui salah satu ujung)
karena perubahan data selalu mengacu pada Head, maka hanya ada 1 jenis insert
Praktikum Struktur Data dan Algoritma 1
maupun delete. Prosedur ini sering disebut Enqueue dan Dequeue pada kasus Queue.
Untuk Enqueue, cukup tambahkan elemen setelah elemen terakhir Queue, dan untuk
Dequeue, cukup "geser"kan Head menjadi elemen selanjutnya.

## Operasi pada Queue
- enqueue() : menambahkan data ke dalam queue.
- dequeue() : mengeluarkan data dari queue.
- peek() : mengambil data dari queue tanpa menghapusnya.
- isEmpty() : mengecek apakah queue kosong atau tidak.
- isFull() : mengecek apakah queue penuh atau tidak.
- size() : menghitung jumlah elemen dalam queue.

## Guided 

### 1. Operasi Queue

Source code:
```C++
#include <iostream>

using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;

string queueTeller[5];

bool isFull() {
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() {
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian Penuh" << endl;
    } else {
        if (isEmpty()) {
            queueTeller[0] = data;
            front++;
            back++;
        } else {
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() {
    return back;
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() {
    cout << "Data antrian teller: " << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

#### Output

![Screenshot 2024-05-13 074918](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/a0d9d5dd-ccf2-456c-8e16-70cb78b01bf7)


#### Interpretasi:
Program di atas adalah contoh dari queue menggunakan array. Program tersebut memiliki array yang berisi 5 elemen. Terdapat fungsi yang digunakan dalam program tersebut untuk memerika suatu antrian, seperti `isFull()` dan `isEmpty()`. Terdapat fungsi `enqueueAntrian()` yang berfungsi untuk menambahkan elemen ke antrian, fungsi  `dequeueAntrian()` yang berfungsi untuk menghapus elemen dari antrian, dan fungsi `viewQueue()` yang berfungsi untuk menampilkan isi antrian. Fungsi lainnya yaitu `countQueue()` yang dapat untuk menghitung jumlah elemen dalam antrian dan `clearQueue()` untuk mengosongkan antrian. Dalam `main()`, operasi-operasi dasar seperti enqueue, dequeue, dan view dilakukan untuk menunjukkan kinerja antrian.


## Unguided 

### 1.  Ubahlah penerapan konsep queue pada bagian guided dari array menjadi linked list

Source Code:
```C++
#include <iostream>
using namespace std;

struct Node {
  string data;
  Node* next;
};

Node* front = nullptr; 
Node* back = nullptr;  

const int maksimalQueue = 5;

bool isFull() {
  return false;
}

bool isEmpty() {
  return (front == nullptr);
}

void enqueueAntrian(string data) {
  Node* newNode = new Node; 
  newNode->data = data;
  newNode->next = nullptr;

  if (isEmpty()) {
    front = back = newNode;
  } else {
    back->next = newNode;
    back = newNode;
  }
}

void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Antrian kosong" << endl;
  } else {
    Node* temp = front;
    front = front->next;
    delete temp; 
    if (front == nullptr) {
      back = nullptr;
    }
  }
}

int countQueue() {
  int count = 0;
  Node* current = front;
  while (current != nullptr) {
    count++;
    current = current->next;
  }
  return count;
}

void clearQueue() {
  while (!isEmpty()) {
    dequeueAntrian();
  }
}

void viewQueue() {
  cout << "Data antrian teller: " << endl;
  Node* current = front;
  int i = 1;
  while (current != nullptr) {
    cout << i << ". " << current->data << endl;
    current = current->next;
    i++;
  }
  if (isEmpty()) {
    cout << "Antrian kosong" << endl;
  }
}

int main() {
  enqueueAntrian("Andi");
  enqueueAntrian("Maya");
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  dequeueAntrian();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  clearQueue();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  return 0;
}

```
#### Output

![Screenshot 2024-05-06 115619](https://github.com/rennanvra/Praktikum-7/assets/162097323/f412cb14-2dae-4448-abaf-4210981b01cd)

#### Interpretasi:
Output di atas adalah contoh suatu program yang menggunakan queue. Program tersebut berfungsi melihat proses atau kinerja dari suatu antrian.

Program tersebut yang mencakup penambahan, penghapusan, menampilkan isi antrian, dan pengecekan status antrian. Pada awalnya, fungsi `enqueueAntrian()` memasukkan dua data, `Andi` dan `Maya,` ke dalam antrian. Kemudian, fungsi `viewQueue()` digunakan untuk menampilkan isi antrian, yang menghasilkan nomor urut dan nama setiap orang dalam antrian. Selanjutnya, fungsi `dequeueAntrian()` menghapus data pertama dalam antrian dan menampilkan isi antrian kembali. Jumlah orang dalam antrian muncul kembali setelah proses ini. Pada akhirnya, fungsi `clearQueue()` digunakan untuk mengosongkan keseluruhan antrian, dan status antrian kosong ditampilkan. 

### 2. Dari nomor 1 buatlah konsep antri dengan atribut Nama mahasiswa dan NIM Mahasiswa

Source Code:
```C++
#include <iostream>

using namespace std;

struct Mahasiswa {
  string nama;
  string nim;
  Mahasiswa* next;
};

Mahasiswa* front = nullptr; 
Mahasiswa* back = nullptr;  

const int maksimalQueue = 5;

bool isFull() {
  return false;
}

bool isEmpty() {
  return (front == nullptr);
}

void enqueueAntrian(string nama, string nim) {
  Mahasiswa* newMahasiswa = new Mahasiswa; 
  newMahasiswa->nama = nama;
  newMahasiswa->nim = nim;
  newMahasiswa->next = nullptr;

  if (isEmpty()) {
    front = back = newMahasiswa;
  } else {
    back->next = newMahasiswa;
    back = newMahasiswa;
  }
}

void dequeueAntrian() {
  if (isEmpty()) {
    cout << "Antrian kosong" << endl;
  } else {
    Mahasiswa* temp = front;
    front = front->next;
    delete temp; 
    if (front == nullptr) {
      back = nullptr;
    }
  }
}

int countQueue() {
  int count = 0;
  Mahasiswa* current = front;
  while (current != nullptr) {
    count++;
    current = current->next;
  }
  return count;
}

void clearQueue() {
  while (!isEmpty()) {
    dequeueAntrian();
  }
}

void viewQueue() {
  cout << "Data antrian mahasiswa: " << endl;
  Mahasiswa* current = front;
  int i = 1;
  while (current != nullptr) {
    cout << i << ". Nama: " << current->nama << endl; cout << "NIM: " << current->nim << endl;
    current = current->next;
    i++;
  }
  if (isEmpty()) {
    cout << "Antrian kosong" << endl;
  }
}

int main() {
  enqueueAntrian("Renna Novaria", "2311110047");
  enqueueAntrian("Yozza Rehan", "2311110048");
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  dequeueAntrian();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  clearQueue();
  viewQueue();
  cout << "Jumlah antrian = " << countQueue() << endl;
  return 0;
}
```
#### Output

![Screenshot 2024-05-13 080936](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/c74dc112-3514-40b9-90b8-cda040bcd4c8)

#### Interpretasi:
Output di atas adalah contoh suatu program yang menggunakan queue. Sedikit berdeda dengan nomor sebelumnya, pada program ini menggunakan konsep antrian dengan menggunakan Nama dan NIM Mahasiswa. 

Sama seperti sebelumnya, dengan menggunakan fungsi `enqueueAntrian`, data dua siswa, `"Renna Novaria"` dengan NIM `"2311110047"` dan `"Yozza Rehan"` dengan NIM `"2311110048"`, ditambahkan ke dalam antrian. Selanjutnya, fungsi `viewQueue()` menampilkan isi antrian, menampilkan nama dan NIM setiap siswa dalam antrian, dan fungsi `countQueue()` menampilkan jumlah siswa dalam antrian. Proses berlanjut dengan fungsi `dequeueAntrian()` menghapus data pertama dalam antrian, dan kemudian menampilkan kembali isi antrian. Setelah itu, fungsi `clearQueue()` mengosongkan keseluruhan antrian dan menunjukkan status kosongnya antrian. 

## Kesimpulan
Queue (antrian) adalah struktur data yang mengatur elemen-elemen dengan prinsip FIFO, di mana elemen yang pertama masuk akan menjadi yang pertama keluar. Berbeda dengan stack yang menggunakan prinsip LIFO, antrian memiliki karakteristik penting seperti penunjuk `"front"` dan `"rear"`, serta menggunakan array untuk menyimpan elemen-elemen data. Operasi dasar pada antrian meliputi enqueue untuk menambahkan elemen di belakang, dequeue untuk menghapus elemen di depan, peek untuk melihat elemen terdepan tanpa menghapusnya, dan fungsi lainnya untuk memeriksa status dan ukuran antrian. Kondisi utama yang perlu diperhatikan adalah antrian dapat menjadi penuh jika mencapai kapasitas maksimum dan kosong jika tidak ada elemen di dalamnya. Dengan sifatnya yang teratur dan terorganisir, antrian merupakan alat yang berguna dalam manajemen data, terutama dalam situasi di mana urutan kedatangan elemen penting untuk dipertahankan.

## Referensi
[1] Dharmayanti, D. (2011). Queue.

Available: https://repository.unikom.ac.id/35976/1/Bab%20IX%20-%20Queue.pdf

[2] Nurhasanah, Y. Kurniawan, and Sholihin, "Praktikum Struktur Data," Universitas Pamulang, Teknik Informatika S-1.

Available: https://repository.unpam.ac.id/10199/1/KB1101_ALGORITMA%20%20DAN%20STRUKTUR%20DATA.pdf

[3] Holle, K. F. H. (2022). Modul praktikum struktur data.

Available: http://repository.uin-malang.ac.id/15252/7/15252.pdf

[4] Adlaimi, N. (2019). STRUKTUR DATA MAJEMUK (QUEUE).

Available: https://osf.io/preprints/osf/cs53p

[5] Rizky, A. (2023). Penerapan Algoritma Queue Pada Aplikasi Pemesanan Obat Berbasis Mobile Pada Apotek Aruba Farma Depok. LOGIC: Jurnal Ilmu Komputer dan Pendidikan, 1(5), 1168-1177.

Available: https://www.journal.mediapublikasi.id/index.php/logic/article/view/2588/1752

