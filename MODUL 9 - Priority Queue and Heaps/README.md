# <h1 align="center">Laporan Praktikum Modul 9 - Priority Queue and Heaps </h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

### Priority Queue
Priority queue adalah bentuk suatu struktur data yang berbasiskan struktur queue. Pada dasarnya priority queue memiliki tiga jenis prioritas yaitu tinggi, sedang, dan rendah[1]. Pada priority queue,  elemen  dengan  prioritas  lebih  tinggi  disajikan  sebelum  elemen  dengan  prioritas  lebih  rendah. Pada beberapa implementasi, ketika dua elemen memiliki prioritas yang sama, maka mereka dilayani sesuai  dengan  urutan  di  mana  mereka  masuk,  akantetapi  dalam  implementasi  lainnya,  penempatan elemen dengan prioritas yang sama tidak di izinkan [2].Priority queue umumnya diikuti dengan beberapa set instruksi, seperti insert dan delete, serta mencari nilai maksimum atau minimum. Algoritma ini dapat dijalankan secara parelel untuk mencapai kecepatan waktu eksekusi yang tinggi dari sebuah struktur data. Algoritma priority queue bekerja berdasarkan prinsip Higher Priority In First Out (HPIFO) dimana pekerjaan yang memiliki prioritas tertinggi akan diselesaikan lebih dulu[1]. Terdapat dua jenis algoritma priority queue, yaitu:

- Ascending Priority Queue, dimana data diurutkan dengan prioritas naik
- Descending Priority Queue, dimana data diurutkan dengan prioritas menurun

Selain itu terdapat dua operasi dasat yang digunakan untuk mengubah data pada algoritma
priority queue, yaitu :

- Enqueue, yaitu proses menambahkan data ke akhir urutan data.
- Dequeue, yaitu proses menghapus data pada awal urutan data

#### Perbedaan Priority Queue dan Queue
```
Priority Queue[3]
- Memproses elemen dengan prioritas tertinggi
- Tidak ada prinsip yang diterapkan
- Jika ada lebih dari satu elemen dengan prioritas yang sama, urutan antrian diambil
```
```
Queue[3]
- Tidak ada prioritas
- Mengikuti prinsip FIFO
- Tidak ada proses seperti itu yang terjadi
```

#### Kelebihan Priority Queue
- Membantu untuk mengakses elemen dengan cara yang lebih cepat. Ini karena elemendalam antrian prioritas diurutkan berdasarkan prioritas, seseorang dapat dengan mudahmengambil elemen dengan prioritas tertinggi tanpa harus mencari di seluruh antrian[3].
- Pengurutan elemen dalam Priority Queue dilakukan secara dinamis. Elemen-elemendalam antrean prioritas dapat diperbarui nilai prioritasnya, yang memungkinkan antreanuntuk mengurutkan ulang secara dinamis saat prioritas berubah[3].
- Algoritma yang efisien dapat diimplementasikan. Antrean prioritas digunakan dalam banyak algoritme untuk meningkatkan efisiensinya, seperti algoritme Dijkstra untukmenemukan jalur terpendek dalam graf dan algoritme pencarian A* untuk pencarian jalur[3].
- Termasuk dalam sistem real-time. Ini karena antrean prioritas memungkinkan Andamengambil elemen dengan prioritas tertinggi dengan cepat, antrean tersebut seringdigunakan dalam sistem waktu nyata di mana waktu adalah hal yang sangat penting[3].

#### Kekurangan Priority Queue
- Kompleksitas tinggi. Antrean prioritas lebih kompleks daripada struktur data sederhanaseperti larik dan daftar tertaut, dan mungkin lebih sulit untuk diterapkan dan dipelihara[3].
- Konsumsi memori yang tinggi. Menyimpan nilai prioritas untuk setiap elemen dalamantrian prioritas dapat menghabiskan memori tambahan, yang mungkin menjadi perhatian dalam sistem dengan sumber daya terbatas[3].
- Itu tidak selalu merupakan struktur data yang paling efisien. Dalam beberapa kasus,struktur data lain seperti tumpukan atau pohon pencarian biner mungkin lebih efisienuntuk operasi tertentu, seperti menemukan elemen minimum atau maksimum dalamantrean[3].
- Kadang-kadang kurang dapat diprediksi :. Ini karena urutan elemen dalam antrean prioritas ditentukan oleh nilai prioritasnya, urutan pengambilan elemen mungkinkurang dapat diprediksi dibandingkan dengan struktur data lain seperti tumpukan atauantrean, yang mengikuti first-in, first-out ( FIFO) atau last-in, first-out (LIFO)[3]


### Heap

Pohon heap adalah struktur data yang berbentuk pohon yang memenuhi sifat-sifat heap yaitu jika B adalah anak dari A, maka nilai yang tersimpan di simpul A lebih besar atau sama dengan nilai yang tersimpan di simpul B. Hal ini mengakibatkan elemen dengan nilai terbesar selalu berada pada posisi akar, dan heap ini disebut max heap. (Bila perbandingannya diterbalikkan yaitu elemen terkecilnya selalu berada di simpul akar, heap ini disebut adalah min heap). Karena itulah, heap biasa dipakai untuk mengimplementasikan priority queue[4]. 

#### Operasi Pada Heap
- `Delete-max atau delete-min`: menghapus simpul akar dari sebuah max- atau minheap[4].

    Contoh maxheap:
    ![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/0c862e18-3be4-4164-9243-3f3b0894f4d3)

- `Increase-key atau decrease-key`: mengubah nilai yang tersimpan di suatu simpul[4].
- `Insert`: menambahkan sebuah nilai ke dalam heap[4].
- `Merge`: menggabungkan dua heap untuk membentuk sebuah heap baru yang berisi semua elemen pembentuk heap tersebut[4].

#### Jenis-Jenis Heap
**a. Binary heap**

Binary heap adalah heap yang dibuat dengan
menggunakan pohon biner[4].

**b. Binomial heap**

Binomial heap adalah heap yang dibuat dengan menggunakan pohon binomial. Pohon binomial bila didefinisikan secara rekursif adalah:
- Sebuah pohon binomial dengan tinggi 0 adalah simpul tunggal
- Sebuah pohon binomial dengan tinggi k mempunyai sebuah simpul akar yang anak-anaknya adalah akar-akar pohonpohon binomial dengan tinggi k-1,k2,…,2,1,0[4].

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/140d2778-6be1-4616-af72-cf5485486986)

pohon-pohon binomial dengan tinggi (order)
0 sampai 3 

**c. Fibonacci Heap**

Fibonacci heap adalah kumpulan pohon yang membentuk minimum heap. Pohon dalam struktur data ini tidak memiliki bentuk yang tertentu dan pada kasus yang ekstrim heap ini memiliki semua elemen dalam pohon yang berbeda atau sebuah pohon tunggal dengan tinggi n. Keunggulan dari Fibonacci heap adalah ketika menggabungkan heap cukup dengan menggabungkan dua list pohon[4]. Contoh Fibonacci Heap:

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/10a97712-6145-422a-afc2-79d3856a25fe)

#### Kelebihan Struktur Data Heap.
- Kompleksitas waktu pada struktur data heap cenderung lebih sedikit. Untuk memasukkan atau menghapus elemen di heap, kompleksitas waktunya hanya O(log N)[5].
- Membantu untuk menemukan jumlah minimum dan jumlah terbesar[5].
- Untuk operasi peek elemen paling awal, kompleksitas waktunya konstan O(1)[5].
- Dapat diimplementasikan menggunakan array, tidak memerlukan ruang ekstra untuk pointer[5].
- Binary heap adalah pohon biner yang seimbang, dan mudah diterapkan[5].
- Heap dapat dibuat dengan O(N) waktu[5].

#### Kekurangan Struktur Data Heap.
- Kompleksitas waktu untuk mencari elemen di Heap adalah O(N)[5].
- Untuk menemukan penerus atau pendahulu dari suatu elemen, heap membutuhkan waktu O(N), sedangkan BST hanya membutuhkan waktu O(log N)[5].
- Untuk mencetak semua elemen heap dalam urutan kompleksitas waktu adalah O(N*log N), sedangkan untuk BST, hanya dibutuhkan waktu O(N)[5].
- Manajemen memori lebih kompleks dalam tumpukan memori karena digunakan secara global. Memori heap dibagi menjadi dua bagian - generasi lama dan generasi muda dll. pada garbage collection milik java[5].

## Guided 

### Guided 1

Source code:
```C++
#include <iostream>
#include <algorithm>

 int H[50];
 int heapSize = -1;

 int parent(int i) {
    return (i - 1) / 2;
 }

 int leftChild(int i) {
    return ((2 * i) + 1);
 }

 int rightChild(int i) {
    return ((2 * i) + 2);
 }

 void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
 }

 void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
 }

 void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
 }

 int extracMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
 }

 void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
 }

 int getMax() {
    return H[0];
 }

 void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extracMax();
 }

 int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);

    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority : " << extracMax() << "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    remove(3);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
 }
```

#### Output

![Screenshot 2024-05-20 094357](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/732f08fc-a2cf-4140-af95-cee202fa3bdb)


#### Interpretasi:
Kode di atas menunjukkan penggunaan Max-Heap. Max-Heap memastikan bahwa setiap elemen parent lebih besar daripada elemen anak. Kode ini memiliki fungsi untuk menambahkan elemen (`insert`), menghapus elemen maksimum (`extractMax`), mengubah prioritas elemen (`changePriority`), dan menghapus elemen tertentu. Ketika program dimulai, beberapa elemen (45, 20, 14, 12, 31, 7, 11, 13, 7) dimasukkan ke dalam heap, menghasilkan susunan: "45 31 14 13 20 7 11 12 7". Setelah elemen maksimum dihapus, heap menjadi: "31 20 14 13 7 7 11 12". Mengubah prioritas elemen pada indeks 2 menjadi 49, mengubah heap menjadi: "49 20 31 13 7 7 11 12", dan menghapus elemen pada indeks 3 menghasilkan susunan: "49 20 31 12 7 7 11".

## Unguided 

### 1.  Modifikasi guided diatas yang mana heap dikonstruksi secara manualberdasarkan user.

Source Code:
```C++
#include <iostream>
#include <algorithm>

using namespace std;

int H[50];
int heapSize = -1;

int parent(int i) {
  return (i - 1) / 2;
}

int leftChild(int i) {
  return ((2 * i) + 1);
}

int rightChild(int i) {
  return ((2 * i) + 2);
}

void shiftUp(int i) {
  while (i > 0 && H[parent(i)] < H[i]) {
    swap(H[parent(i)], H[i]);
    i = parent(i);
  }
}

void shiftDown(int i) {
  int maxIndex = i;
  int l = leftChild(i);
  if (l <= heapSize && H[l] > H[maxIndex]) {
    maxIndex = l;
  }
  int r = rightChild(i);
  if (r <= heapSize && H[r] > H[maxIndex]) {
    maxIndex = r;
  }
  if (i != maxIndex) {
    swap(H[i], H[maxIndex]);
    shiftDown(maxIndex);
  }
}

void insert(int p) {
  heapSize++;
  H[heapSize] = p;
  shiftUp(heapSize);
}

int extractMax() {
  int result = H[0];
  H[0] = H[heapSize];
  heapSize--;
  shiftDown(0);
  return result;
}

void changePriority(int i, int p) {
  int oldp = H[i];
  H[i] = p;
  if (p > oldp) {
    shiftUp(i);
  } else {
    shiftDown(i);
  }
}

int getMax() {
  return H[0];
}

void remove(int i) {
  H[i] = getMax() + 1;
  shiftUp(i);
  extractMax();
}

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  cout << "Enter " << n << " elements ";
  for (int i = 0; i < n; ++i) {
    int element;
    cout << "Enter a number for the element " << i + 1 << ": ";
    cin >> element;
    insert(element);
  }

  cout << "Priority Queue: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  cout << "Node with maximum priority: " << extractMax() << endl;

  cout << "Priority queue after extracting maximum: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  changePriority(0, 15);
  cout << "Priority queue after priority change: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  remove(11);
  cout << "Priority queue after removing the element: ";
  for (int i = 0; i <= heapSize; ++i) {
    cout << H[i] << " ";
  }
  cout << endl;

  return 0;
}
```
#### Output

![Screenshot 2024-05-20 095626](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/09dc2003-5c0e-49d5-a798-d5a6f8e911d7)

#### Interpretasi:
Kode di atas adalah contoh penerapan Max-Heap. Ada beberapa fungsi yang dimiliki program ini, yaitu `insert` berfungsi untuk menambahkan elemen, fungsi `extractMax` berfungsi untuk menghapus elemen maksimum, fungsi `changePriority` berfungsi untuk mengubah prioritas elemen, dan fungsi `remove` berfungsi untuk menghapus elemen tertentu. Dalam fungsi `main`, pengguna dapat menginputkan jumlah elemen, lalu elemen tersebut dimasukkan ke dalam heap. Heap kemudian dicetak, menunjukkan susunan prioritas. Kemudian, elemen dengan nilai maksimum dihapus, dan heap dicetak lagi. Selanjutnya, prioritas elemen pada indeks 0 diubah menjadi 15, dan heap diperbarui. Terakhir, elemen pada indeks 11 dihapus, dan heap dicetak untuk menunjukkan susunan akhir. 

## Kesimpulan
Priority queue adalah struktur data yang memprioritaskan elemen berdasarkan tingkat prioritasnya, dengan elemen prioritas tinggi disajikan terlebih dahulu. Ini dapat diimplementasikan dengan memperhatikan urutan masuk atau mengabaikannya. Operasi-operasi seperti insert, delete, dan pencarian nilai maksimum atau minimum didukung oleh priority queue, yang dijalankan dengan prinsip Higher Priority In First Out (HPIFO). Heap, di sisi lain, adalah struktur data berbentuk pohon yang memenuhi sifat-sifat heap, di mana elemen dengan nilai tertinggi selalu berada pada posisi akar. Heap memiliki berbagai jenis, seperti binary heap, binomial heap, dan Fibonacci heap, dengan kelebihan kompleksitas waktu yang lebih sedikit dan kemampuan menemukan jumlah minimum dan maksimum, namun juga memiliki kekurangan seperti kompleksitas waktu yang tinggi untuk pencarian elemen dan manajemen memori yang kompleks.

## Referensi
[1] Nurhadi, M. I., Saputra, R. E., & Setianingsih, C. (2021). Manajemen Dan Kendali Beban Perangkat Elektronik Berbasis Web Dengan Algoritma Priority Queue. eProceedings of Engineering, 8(2).


[2] Sholeh, I. (2021). Penerapan Decrease And Conquer Untuk Memanajemen Tugas Kuliah Informatika. JURNAL TEKNIK INFORMATIKA DAN SISTEM INFORMASI, 1(2), 1-10.

Available: https://jurtisi.stmikmpb.ac.id/index.php/jurtisi/article/view/13/1 


[3] B. B. Pangestu, G. S. H. Barata, E. W. Lay, dan M. Alghifari, "Makalah Priority Queue Revisi," FAKULTAS TEKNIK UNIVERSITAS TANJUNGPURAPONTIANAK, 2023.

Available: https://id.scribd.com/document/657230171/Makalah-Priority-Queue-revisi


[4] Mulia, F. Penerapan Pohon Dalam Heap Sort.

Available: https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2008-2009/Makalah2008/Makalah0809-046.pdf


[5] T. Trivusi, "Struktur Data Heap: Pengertian, Karakteristik, dan Operasinya," 2023.
Available: https://www.trivusi.web.id/2023/01/struktur-data-heap.html