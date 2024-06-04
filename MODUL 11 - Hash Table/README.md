# <h1 align="center">Laporan Praktikum Modul 11 - Hash Table </h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

Tabel hash merupakan salah satu struktur data yang digunakan dalam penyimpanan data sementara. Tujuan penggunaan tabel hash adalah mempercepat pencarian kembali dari banyak data yang disimpan. Tabel hash menggunakan suatu teknik penyimpanan sehingga waktu yang dibutuhkan untuk penambahan data (insertions), penghapusan data (deletions), dan pencarian data (searching) relatif sama dibanding struktur data atau algoritma yang lain[1]. Table diimplementasikan menggunakan array. Penambahan dan pencarian sebuah key pada hash table berdasarkan fungsi hash yang digunakan. Fungsi hash memetakkan elemen pada indek hash table[2].

Tabel hash menggunakan memori penyimpanan utama berbentuk array dengan tambahan algoritma untuk mempercepat pemrosesan data. Pada intinya, tabel hash merupakan penyimpanan data menggunakan key value yang didapat dari nilai data itu sendiri. Dengan key value tersebut, diperoleh hash value. Jadi, hash function merupakan suatu fungsi sederhana untuk mendapatkan hash value dari key value suatu data. Beberapa hal yang perlu diperhatikan untuk membuat hash function adalah[1]:
- ukuran array/table size(m),
- key value/nilai yang didapat dari data(k), dan
- hash value/hash index/indeks yang dituju(h).

Sistem hash table bekerja dengan cara mengambil input kunci dan memetakkannya ke nilai indeks array menggunakan fungsi hash. Kemudian, data disimpan pada posisi indeks array yang dihasilkan oleh fungsi hash. Ketika data perlu dicari, input kunci dijadikan sebagai parameter untuk fungsi hash, dan posisi indeks array yang dihasilkan digunakan untuk mencari data. Dalam kasus hash collision, di mana dua atau lebih data memiliki nilai hash yang sama, hash table menyimpan data tersebut dalam slot yang sama dengan Teknik yang disebut chaining.

![Screenshot 2024-06-04 082258](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/1f9ee4ee-8593-4583-aa8d-8a316547661a)

Sebuah  fungsi hashing yang  bagus  memiliki  dua  kriteria  yakni  harus  dapat  cepat  dihitung  dan  harus meminimalkan terjadinya collisoin. Collision adalah jika dua buah key atau lebih di petakan pada sel data yang sama. Ada dua strategi umum untuk meminimalisir terjadinya collision yakni Close Hashing(Opening Addres) dan Open Hashing(Chaining).

### Collision

Collision berarti ada lebih dari satu data yang memiliki hash index yang sama. Padahal sebagaimana kita ketahui, satu alamat/satu index array hanya dapat menyimpan satu data[1]. Pada beberapa kasus, dimana beberapa kunci memetakan data ke  dalam integer yang sama, maka elemen-elemen tersebut akan disimpan pada slot yang sama pada sebuah tabel hash[3]. 

### Cara Mengatasi Collision
Keterbatasan tabel hash adalah jika dua angka dimasukkan ke dalam fungsi hash menghasilkan nilai yang sama. Hal ini disebut dengan collision. Ada dua teknik untuk menyelesaikan masalah ini diantaranya :

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/af8617f3-e519-4e63-ba5b-51bc03eb2023)

#### a. Closed Hashing (Open Addressing)

Close hashing menyelesaikan collision dengan menggunakan memori yang masih ada tanpa menggunakan memori di luar array yang dipakai. Closed hashing mencari alamat lain apabila alamat yang akan dituju sudah terisi oleh data. Terdapat tiga cara untuk mencari alamat lain tersebut, yaitu linear probing, quadratic probing, dan double hashing[1].

- Linear Probing (Metode Pembagian)

    Apabila telah terisi, linear probing mencari alamat lain dengan bergeser satu indeks dari alamat sebelumnya hingga ditemukan alamat yang belum terisi data, dengan rumus sebagai berikut[1]:

    ![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/636d3976-f59e-4948-8f2a-5488e7144d40)


- Quadratic Probing (Metode Midsquare/Nilai Tengah) 

    Quadratic probing mencari alamat baru untuk ditempati dengan proses perhitungan kuadratik yang lebih kompleks. Tidak ada formula baku pada quadratic probing ini[1]. 

- Double Hashing (Metode Penjumlahan Digit)

    Sesuai dengan namanya, alamat baru untuk menyimpan  data yang belum dapat masuk ke dalam tabel diperoleh    dengan menggunakan hash function lagi. Hash function kedua yang digunakan setelah alamat yang dihasilkan oleh hash function awal telah terisi tentu saja berbeda dengan hash function awal itu sendiri[1].

Metode closed hashing memiliki kelemahan yaitu ukuran array yang disediakan harus lebih besar dari jumlah data. Selain itu, dibutuhkan memori yang lebih besar untuk meminimalkan collision. Pada metode ini, kunci yang diketahui bisa dipecah menjadi beberapa kelompok. Pemecahan dan penjumlahan terus dilakukan jika keseluruhan kelompok yang ada masih lebih besar dari banyaknya alamat yang akan dipakai[1].

#### b. Open Hashing (Separate Chaining)
Pada dasarnya, open hashing atau separate chaining membuat tabel yang digunakan untuk proses hashing menjadi sebuah array of pointer yang masing-masing pointernya diikuti oleh sebuah linked list, dengan chain (mata rantai) 1 terletak pada array of pointer, sedangkan chain 2 dan seterusnya berhubungan dengan chain 1 secara memanjang. Kelemahan metode ini yaitu terjadi linked list yang panjang apabila data menumpuk pada satu atau sedikit indeks[1].

### Operasi Hash Table
1.	Insertion:
Memasukkan data baru ke dalam hash table dengan memanggil fungsi hash untuk menentukan posisi bucket yang tepat, dan kemudian menambahkan data ke bucket tersebut.
2.	Deletion:
Menghapus data dari hash table dengan mencari data menggunakan fungsi hash, dan kemudian menghapusnya dari bucket yang sesuai.
3.	Searching:
Mencari data dalam hash table dengan memasukkan input kunci ke fungsi hash untuk menentukan posisi bucket, dan kemudian mencari data di dalam bucket yang sesuai.
4.	Update:
Memperbarui data dalam hash table dengan mencari data menggunakan fungsi hash, dan kemudian memperbarui data yang ditemukan.
5.	Traversal:
Melalui seluruh hash table untuk memproses semua data yang ada dalam tabel.


## Guided 

### Guided 1 

Source code:
```C++
#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

// Fungsi hash sederhana
int hash_func(int key) {
    return key % MAX_SIZE;
}

// Struktur data untuk setiap node
struct Node {
    int key;
    int value;
    Node* next;
    Node(int key, int value) : key(key), value(value), next(nullptr) {}
};

// Class hash table
class HashTable {
private:
    Node** table;
public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }
    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Insertion
    void insert(int key, int value) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                current->value = value;
                return;
            }
            current = current->next;
        }
        Node* node = new Node(key, value);
        node->next = table[index];
        table[index] = node;
    }

    // Searching
    int get(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return -1;
    }

    // Deletion
    void remove(int key) {
        int index = hash_func(key);
        Node* current = table[index];
        Node* prev = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    // Traversal
    void traverse() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << current->key << ": " << current->value << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable ht;
    // Insertion
    ht.insert(1, 10);
    ht.insert(2, 20);
    ht.insert(3, 30);

    // Searching
    cout << "Get key 1: " << ht.get(1) << endl;
    cout << "Get key 4: " << ht.get(4) << endl;
   
    // Deletion
    ht.remove(4);
   
    // Traversal
    ht.traverse();
   
    return 0;
}
```

#### Output

![Screenshot 2024-06-04 090643](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/a46bc38e-179e-44fd-99b7-d1ccf9a0b914)


#### Interpretasi:
Program ini menggunakan tabel hash dengan teknik chaining, dengan ukuran tabel 10 dan fungsi hash memakai beberapa operasi. Kelas `HashTable` menggunakan operasi dasar seperti `insert` untuk menginputkan kunci-nilai, get untuk mencari nilai dari key, `remove` untuk menghapus kunci-nilai, dan `traverse` untuk menampilkan semua kunci-nilai yang ada.

Di fungsi `main`, program ini dijalankan dengan beberapa operasi, seperti menginputkan tiga pasangan kunci-nilai (1, 10), (2, 20), dan (3, 30); mencari nilai untuk kunci 1 (ketemu) dan kunci 4 (gak ketemu); mencoba hapus kunci 4 (yang gak ada); dan menampilkan semua kunci-nilai yang ada di tabel hash. Hasilnya menunjukkan nilai 10 untuk kunci 1, -1 untuk kunci 4 yang tidak ada, dan menampilkan semua pasangan kunci-nilai yang ada, yaitu 1:10, 2:20, dan 3:30.

### Guided 2 

Source code:
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;

class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;

    employee_map.print();

    return 0;
}
```
#### Output

![Screenshot 2024-06-04 090701](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/21d81240-ef17-4846-af46-843f1cfd351e)

#### Interpretasi:
Program di atas membuat hash map untuk menyimpan data nama dan nomor telepon dengan tabel hash yang memiliki ukuran 11. Program hash map di atas memiliki fungsi `insert` untuk menambah, `remove` untuk menghapus, `search` untuk mencari, dan `print` untuk menampilkan data. Dalam fungsi `main`, program dijalankan dengan menambahkan tiga pasangan nama-nomor telepon, yaitu "Mistah" dengan "1234", "Pastah" dengan "5678", dan "Ghana" dengan "91011". Kemudian, program mencari nomor telepon "Mistah" dan "Pastah", lalu menghapus data "Mistah", dan mencari lagi nomor telepon "Mistah" yang sudah dihapus. Terakhir, program menampilkan seluruh isi tabel hash. Hasilnya menunjukkan nomor telepon "Mistah" dan "Pastah", lalu "Mistah" menjadi tidak ditemukan setelah dihapus, dan menampilkan seluruh isi tabel hash yang tersisa.

## Unguided

### 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan : a.	Setiap mahasiswa memiliki NIM dan nilai. b.	Program memiliki tampilan pilihan menu berisi poin C. c.	Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).

Source Code:
```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX_SIZE = 10; // Ukuran Hash Table

// Struktur data Node untuk menyimpan data mahasiswa
struct Node {
    string NIM;
    string name;
    int nilai;
    Node* next;

    Node(string NIM, string name, int nilai) : NIM(NIM), name(name), nilai(nilai), next(nullptr) {}
};

// Deklarasi Class Hash Table
class HashTable {
private:
    Node** table;

public:
    HashTable() {
        table = new Node*[MAX_SIZE]();
    }

    ~HashTable() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    // Fungsi hash sederhana
    int hash_function(string NIM) {
        int hash_value = 0;
        for (int i = 0; i < NIM.length(); i++) {
            hash_value += (int)NIM[i];
        }
        return hash_value % MAX_SIZE;
    }

    // Menambahkan data mahasiswa baru
    void insert_student(string NIM, string name, int nilai) {
        int index = hash_function(NIM);
        Node* current = table[index];

        while (current != nullptr) {
            if (current->NIM == NIM) {
                cout << "NIM sudah ada!" << endl;
                return;
            }
            current = current->next;
        }

        Node* node = new Node(NIM, name, nilai);
        node->next = table[index];
        table[index] = node;
    }

    // Menghapus data mahasiswa berdasarkan NIM
    void delete_student(string NIM) {
        int index = hash_function(NIM);
        Node* prev = nullptr;
        Node* current = table[index];

        while (current != nullptr) {
            if (current->NIM == NIM) {
                if (prev == nullptr) {
                    table[index] = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                return;
            }
            prev = current;
            current = current->next;
        }

        cout << "NIM tidak ditemukan!" << endl;
    }

    // Mencari data mahasiswa berdasarkan NIM
    void search_by_NIM(string NIM) {
        int index = hash_function(NIM);
        Node* current = table[index];

        while (current != nullptr) {
            if (current->NIM == NIM) {
                cout << "NIM: " << current->NIM << ", Nama: " << current->name << ", Nilai: " << current->nilai << endl;
                return;
            }
            current = current->next;
        }

        cout << "NIM tidak ditemukan!" << endl;
    }

    // Mencari data mahasiswa berdasarkan rentang nilai (80-90)
    void search_by_range(int min_nilai, int max_nilai) {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                if (current->nilai >= min_nilai && current->nilai <= max_nilai) {
                    cout << "NIM: " << current->NIM << ", Nama: " << current->name << ", Nilai: " << current->nilai << endl;
                }
                current = current->next;
            }
        }
    }

    // Menampilkan semua data mahasiswa
    void display_all() {
        for (int i = 0; i < MAX_SIZE; i++) {
            Node* current = table[i];
            while (current != nullptr) {
                cout << "NIM: " << current->NIM << ", Nama: " << current->name << ", Nilai: " << current->nilai << endl;
                current = current->next;
            }
        }
    }
};

int main() {
    HashTable mahasiswa; // Objek Hash Table untuk mahasiswa

    int pilihan;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Cari Data Mahasiswa (NIM)" << endl;
        cout << "4. Cari Data Mahasiswa (Rentang Nilai)" << endl;
        cout << "5. Tampilkan Semua Data Mahasiswa" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string NIM, name;
                int nilai;
                cout << "Masukkan NIM: ";
                cin >> NIM;
                cout << "Masukkan Nama: ";
                cin.ignore();
                getline(cin, name);
                cout << "Masukkan nilai: ";
                cin >> nilai;
                mahasiswa.insert_student(NIM, name, nilai);
                break;
            }
            case 2: {
                string NIM;
                cout << "Masukkan NIM yang ingin dihapus: ";
                cin >> NIM;
                mahasiswa.delete_student(NIM);
                break;
            }
            case 3: {
                string NIM;
                cout << "Masukkan NIM yang ingin dicari: ";
                cin >> NIM;
                mahasiswa.search_by_NIM(NIM);
                break;
            }
            case 4: {
                cout << "Cari mahasiswa dengan nilai antara 80 - 90" << endl;
                mahasiswa.search_by_range(80, 90);
                break;
            }
            case 5: {
                cout << "Tampilkan semua data mahasiswa" << endl;
                mahasiswa.display_all();
                break;
            }
            case 6: {
                cout << "Keluar dari program." << endl;
                break;
            }
            default: {
                cout << "Pilihan tidak valid!" << endl;
            }
        }
    } while (pilihan != 6);

    return 0;
}
```
#### Output

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/41e77afe-a2e2-4878-8f58-1e3bc7d0d6ed)

#### Interpretasi:
Program di atas mengimplementasikan Hash Table untuk menyimpan data mahasiswa, yang berisi informasi NIM, nama, dan nilai. Fungsi hash digunakan untuk menentukan indeks penyimpanan data dalam tabel. Terdapat beberapa fungsi seperti menambahkan, menghapus, dan mencari data mahasiswa, dan dapat menampilkan semua data mahasiswa. Pengguna dapat memilih berbagai opsi dari menu utama, termasuk menambahkan data baru, menghapus data berdasarkan NIM, mencari data berdasarkan NIM atau rentang nilai, dan menampilkan semua data yang tersimpan.

Program ini menggunakan konsep pointer untuk mengimplementasikan Hash Table. Pointer digunakan untuk mengaitkan node-node dalam tabel, sementara struktur data node digunakan untuk menyimpan informasi setiap mahasiswa. Ini memungkinkan program untuk efisien menyimpan dan mengelola data mahasiswa dalam tabel hash.


## Kesimpulan
Tabel hash adalah struktur data yang digunakan untuk penyimpanan data sementara, dengan tujuan mempercepat pencarian kembali dari banyak data yang tersimpan. Implementasinya menggunakan array yang dipetakan oleh fungsi hash, memungkinkan operasi penambahan, penghapusan, dan pencarian data dalam waktu yang relatif konstan. Fungsi hash menghasilkan indeks array berdasarkan kunci data, dan collision, di mana dua atau lebih data memiliki hash index yang sama, diatasi dengan teknik seperti chaining atau open addressing. Open addressing mencari alamat baru jika terjadi collision, sementara chaining menyimpan data dalam linked list di slot yang sama. Operasi pada hash table meliputi penambahan, penghapusan, pencarian, pembaruan, dan penelusuran data. Dalam kesimpulannya, tabel hash merupakan solusi efisien untuk menyimpan dan mengelola data dengan cepat dan efektif.

## Referensi
[1] Yazdani, Rinaldi Munir. "Cara Mudah Mempelajari Algoritma dan Struktur Data." Jakarta: PT. Elex Media Komputindo, 2019.

Available: https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf

[2] Holle, K. F. H. (2022). Modul praktikum struktur data.

Available: http://repository.uin-malang.ac.id/15252/7/15252.pdf 


[3] J. Prestiliano. Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data. Fakultas Teknologi Informasi Universitas Kristen Satya Wacana, 2019.

Available: (https://repository.uksw.edu/bitstream/123456789/1012/2/ART_Jasson%20Prestiliano_Aplikasi%20tabel%20hash_Full%20text.pdf).

