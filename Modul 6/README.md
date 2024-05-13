# <h1 align="center">Laporan Praktikum Modul 6 Linked List</h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori
Linked list (senarai bertautan; daftar bertautan) adalah salah satu cara untuk menyimpan sekumpulan elemen. Sama halnya dengan array, elemen yang disimpan dapat berupa karakter atau integer. Masing-masing elemen dalam linked list disimpan dalam bentuk sebuah node.Node adalah gabungan dua sub-elemen atau komponen; Bagian datayang menyimpan elemen dan bagian nextyang menyimpan link ke node selanjutnya.Linked list terbentuk saat terdapat banyak node yang saling tertaut dan membentuk sebuah rantai. Setiap node menunjuk pada node selanjutnya sesuai urutan. Node pertama yang selalu digunakan sebagai referensi saat melakukan traversing pada list (senarai; daftar) disebut HEAD. Node terakhir akan menunjuk ke NULL.Mendeklarasikan Linked list: Dalam bahasa pemrograman C, linked list dapat diimplementasikan menggunakan struktur dan pointer.Definisi di atas digunakan untuk membuat node pada list. Bidang datamenyimpan elemen dan nextmenjadi pointer yang menyimpan alamat node selanjutnya[1].

![Screenshot 2024-04-29 111047](https://github.com/rennanvra/Praktikum-4/assets/162097323/1ed84eb5-6b8a-424a-bd8b-59ea76fe730d)

## 1. Single Linked List
Single Linked List adalah sebuah LINKED LIST yang menggunakan sebuah variabel pointer  saja  untuk  menyimpan  banyak  data  dengan  metode  LINKED  LIST,  suatu daftar isi yangsaling berhubungan.Single Linked List adalah sekumpulan dari node yang saling terhubung dengan node lain melalui sebuah pointer.Single Linked List hanya memiliki satu arah dan tidak memiliki dua arah atau bulak balik, dua arah tersebut disebut dengan double linked list.Pada Implementasinya, Single Linked List terdapat dua variasi yaitu circular dan non-circular[2].

Dalam operasi Single Linked List, umumnya dilakukan operasi penambahan dan penghapusan simpul pada awal atau akhir daftar, serta pencarian dan pengambilan nilai pada simpul tertentu dalam daftar. Karena struktur data ini hanya memerlukan satu pointer untuk setiap simpul, maka Single Linked List umumnya lebih efisien dalam penggunaan memori dibandingkan dengan jenis Linked List lainnya, seperti Double Linked List dan Circular Linked List.

Ilustrasi Single Linked List:

![Screenshot 2024-04-29 111902](https://github.com/rennanvra/Praktikum-4/assets/162097323/c5b207fe-bfa1-403f-b2ae-aef914a1c44f)

Pada gambar diatas,data terletak pada sebuah lokasi dalam sebuah memory,tempat yang disediakan memory untuk menyimpan data di sebut node? simpul,setiap node memiliki pointer(penunjuk) yang menunjuk ke node berikutnya sehingga terbentuk suatu untaian yang disebut single LINKED LIST[2].

## 2. Double Linked List
Double Linked List merupakan Linked List dimana setiap simpul dibagi menjadi  tiga bagian yaitu bagian isi, bagian pointer kiri, dan bagian pointer kanan. Bagian isi merupakan bagian yang berisi data yang disimpan oleh simpul, sedangkan bagian pointer kiri merupakan bagian yang berisi alamat dari simpul sebelumnya dan bagian pointer kanan merupakan bagian yang berisi alamat dari simpul berikutnya. Terdapat tambahan satu pointer pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.

Gambar berikut merupakan simpul untuk Double Linked List:

![Screenshot 2024-04-29 133125](https://github.com/rennanvra/Praktikum-6/assets/162097323/a5d1d583-43cb-4444-82bf-1c4a7a240bf7)
Dari gambar di atas dapat kita lihat bahwa pointer kanan suatu simpul menunjuk ke simpul berikutnya dan pointere kiri menunjuk simpul sebelumnya. Tetapi untuk pointer kiri simpul pertama tidak menunjuk ke simpul yang lain (NULL) dan pointer kanan dari simpul terakhir juga tidak menunjuk simpul yang lain (NULL). Dalam pembahasan artikel sebelumnya telah diperkenalkan Single Linked List, yakni linked list dengan sebuah pointer penghubung.Dalam artikel ini, dibahas pula varian linked list dengan 2 pointer penunjuk, yakni Doubly linked list yang memiliki pointer penunjuk 2 arah, yakni ke arah node sebelum (previous/prev) dan node sesudah (next).

Representasi sebuah doubly linked list dapat dilihat pada gambar berikut ini:

![Screenshot 2024-04-29 133047](https://github.com/rennanvra/Praktikum-6/assets/162097323/08ba3ae4-e8d4-4cba-87f5-ba79c34423f6)

Di dalam sebuah linked list, ada 2 pointer yang menjadi penunjuk utama, yakni pointer HEAD yang menunjuk pada node pertama di dalam linked list itu sendiri dan pointer TAIL yang menunjuk pada node paling akhir di dalam linked list. Sebuah linked list dikatakan kosongapabila isi pointer head adalah NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama. Begitu puladengan pointer next dari TAIL yang selalu bernilai NULL sebagai penanda data terakhir

## 3. Linked List Non Circular 
Linked list non circular merupakan linked list dimana antara kepala (head) dan node terakhir (tail) tidak memeiliki hubungan. Pada Linked List ini maka pointer terakhir selaku menunjuk ‘NULL’ sebagai pertanda data terakhir dalam listnya. Linked list non circular dapat digambarkan sebagai berikut.

![Screenshot 2024-04-29 142347](https://github.com/rennanvra/Praktikum-6/assets/162097323/3a8fcd1f-ea32-4593-96a7-9726630074d8)

OPERASI PADA LINKED LIST NON CIRCULAR 
1. Deklarasi Simpul (Node) 
```C++
struct node 
{ 
int data; 
node *next; 
}; 
```

2. Membuat dan Menginisialisasi Pointer Head dan Tail 
```C++
node *head, *tail; 
void init() 
{ 
head = NULL; 
tail = NULL; 
};
```

3. Pengecekan Kondisi Linked List
```C++ 
bool isEmpty() 
{ 
    if (head == NULL && tail == NULL) { 
        return true; 
    } 
    else 
    { 
        return false; 
    } 
} 
```

4. Penambahan Simpul (Node) 
```C++
void insertBelakang(string dataUser) { 
    if (isEmpty() == true) 
    { 
        node *baru = new node; 
        baru->data = dataUser; 
        head = baru; 
        tail = baru; 
        baru->next = NULL; 
    } 
    else 
    {  
        node *baru = new node; 
        baru->data = dataUser; 
        baru->next = NULL; 
        tail->next = baru; 
        tail = baru; 
    } 
};
```
5. Penghapusan Simpul (Node) 
```C++
void hapusDepan() 
{ 
    if (isEmpty() == true) 
    { 
        cout << "List kosong!" << endl; } 
    else 
    { 
        node *helper; 
        helper = head; 
        if (head == tail) 
        { 
            head = NULL; 
            tail = NULL; 
            delete helper; 
        } 
        else 
            head = head->next; 
        helper->next = NULL; 
        delete helper; 
        } 
    } 
}
```

6. Tampil Data Linked List 
```C++
void tampil() 
{ 
    if (isEmpty() == true) 
    { 
        cout << "List kosong!" << endl; 
    } 
    else 
    { 
        node *helper; 
        helper = head; 
        while (helper != NULL) 
        { 
            cout << helper->data << ends; 
            helper = helper->next; 
        } 
    } 
}
```

## 4. Linked List Circular
Circular linked list adalah daftar tertaut yang semua nodenya terhubung membentuk lingkaran. Dalam daftar tertaut melingkar, simpul pertama dan simpul terakhir dihubungkan satu sama lain sehingga membentuk lingkaran. Tidak ada NULL di akhir[3].

Linked list circular merupakan linked list yang tidak memiliki akhir karena node  terakhir (tail) tidak bernilai ‘NULL’, tetapi terhubung dengan node pertama (head).  Saat menggunakan linked list circular kita membutuhkan dummy node atau node  pengecoh yang biasanya dinamakan dengan node current supaya program dapat  berhenti menghitung data ketika node current mencapai node pertama (head). 

Linked list circular dapat digunakan untuk menyimpan data yang perlu diakses  secara berulang, seperti daftar putar lagu, daftar pesan dalam antrian, atau  penggunaan memori berulang dalam suatu aplikasi. Linked list circular dapat  digambarkan sebagai berikut. 


![Screenshot 2024-04-29 144220](https://github.com/rennanvra/Praktikum-6/assets/162097323/ac8f7dc8-b9ad-4242-ad5a-d188d1587572)

Umumnya ada dua jenis Linked List Circular:

- Single Linked List Circular: Dalam daftar tertaut tunggal melingkar, simpul terakhir dari daftar berisi penunjuk ke simpul pertama dari daftar. Kami melintasi daftar tertaut tunggal melingkar hingga kami mencapai simpul yang sama tempat kami memulai. Daftar tertaut tunggal melingkar tidak memiliki awal atau akhir. Tidak ada nilai null di bagian selanjutnya dari node mana pun[3].
![Screenshot 2024-04-29 144504](https://github.com/rennanvra/Praktikum-6/assets/162097323/c8fd06cf-18ab-464d-b0f9-7635315390b0)

- Double Linked List: Daftar Tertaut Ganda Melingkar memiliki properti daftar tertaut ganda dan daftar tertaut melingkar di mana dua elemen berurutan dihubungkan atau dihubungkan oleh penunjuk sebelumnya dan berikutnya dan simpul terakhir menunjuk ke simpul pertama dengan penunjuk berikutnya dan juga simpul pertama menunjuk ke simpul terakhir dengan penunjuk sebelumnya[3].
![Screenshot 2024-04-29 144516](https://github.com/rennanvra/Praktikum-6/assets/162097323/9f75d0b6-8783-4e99-b549-e07bc424ccc6)

OPERASI PADA LINKED LIST CIRCULAR 

1. Deklarasi Simpul (Node) 
```C++
struct Node 
{ 
    string data; 
    Node *next; 
}; 
```
2. Membuat dan Menginisialisasi Pointer Head dan Tail Node *head, *tail, *baru, *bantu, *hapus; 
```C++
void init() 
{ 
    head = NULL; 
    tail = head; 
} 
```

3. Pengecekan Kondisi Linked List 

```C++
int isEmpty() 
{ 
    if (head == NULL) 
        return 1; // true 
    else 
        return 0; // false 
} 
```

4. Pembuatan Simpul (Node)  

```C++
void buatNode(string data) 
{ 
    baru = new Node; 
    baru->data = data; 
    baru->next = NULL; 
}
```
5. Penambahan Simpul (Node) 

```C++
// Tambah Depan 
void insertDepan(string data) { 
    // Buat Node baru 
    buatNode(data); 
    
    if (isEmpty() == 1) 
    { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } 
    else 
    { 
        while (tail->next != head) 
        { 
        tail = tail->next; 
        } 
        baru->next = head; 
        head = baru; 
        tail->next = head; 
    } 
}
```

6. Penghapusan Simpul (Node) 
void 

```C++
hapusBelakang() 
{ 
    if (isEmpty() == 0) 
    { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) 
        { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } 
        else 
        { 
            while (hapus->next != head) 
            { 
                hapus = hapus->next; 
            } 
            while (tail->next != hapus) 
            { 
                tail = tail->next; 
            } 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
}
```

7. Menampilkan Data Linked List 

```C++
void tampil() 
{ 
    if (isEmpty() == 0) 
    { 
        tail = head; 
        do 
        { 
            cout << tail->data << ends; 
            tail = tail->next; 
        } while (tail != head); 
        cout << endl; 
    } 
}
```

## Guided 

### 1. PROGRAM SINGLE LINKED LIST NON-CIRCULAR

Source code:
```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    return 0;
}
```

#### Output

![Screenshot 2024-04-29 151338](https://github.com/rennanvra/Praktikum-6/assets/162097323/a1c4876b-eade-4713-b524-5ccab604aad5)

#### Interpretasi:
Program di atas adalah contoh dari implementasi single linked list non-circular. Program tersebut akan menambahkan suatu nilai atau elemen ke dalam linked list, termasuk di depan, di belakang, dan di tengah. Setelah itu, pada program tersebut juga akan menghapus dan diubah nilainya baik di depan, di belakang, maupun di tengah. Setiap kali ada perubahan, isi linked list akan di tampilkan. Sehingga output pada program tersebut menunjukkan langkah-langkah yang dijalankan pada linked list tersebut dari awal hingga akhir.

### 2. Double Linked List

```C++
#include <iostream>
using namespace std;

///PROGRAM DOUBLE LINKED LIST
class Node {
public:
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }
        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

#### Output:

![Screenshot 2024-04-29 151450](https://github.com/rennanvra/Praktikum-6/assets/162097323/c1d82418-a46a-4e0f-b200-707e507d8241)

#### Interpretasi:
Program di atas adalah contoh dari implementasi double linked list. Pada program di atas memungkinkan pengguna untuk menambahkan data, menghapus data, memperbarui data, menghapus data, dan menampilkan data yang ada dalam linked list. Terdapat beberapa opsi dalam program tersebut, seperti menginputkan data baru, menghapus data, memperbarui data, ataupun menghapus data. 

### 3. PROGRAM SINGLE LINKED LIST CIRCULAR

```C++
#include <iostream> 
using namespace std; 
/// PROGRAM SINGLE LINKED LIST CIRCULAR
// Deklarasi Struct Node 
struct Node { 
    string data; 
    Node *next; 
}; 

Node *head, *tail, *baru, *bantu, *hapus; 

void init() { 
    head = NULL; 
    tail = head; 
} 

// Pengecekan apakah Linked List kosong 
int isEmpty() { 
    return head == NULL; 
} 

// Buat Node Baru 
void buatNode(string data) { 
    baru = new Node; 
    baru->data = data; 
    baru->next = NULL; 
} 

// Hitung Jumlah Node 
int hitungList() { 
    bantu = head; 
    int jumlah = 0; 
    while (bantu != NULL) { 
        jumlah++; 
        bantu = bantu->next; 
    } 
    return jumlah; 
} 

// Tambah Node di Depan 
void insertDepan(string data) { 
    buatNode(data); 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 
        baru->next = head; 
        head = baru; 
        tail->next = head; 
    } 
} 

// Tambah Node di Belakang 
void insertBelakang(string data) { 
    buatNode(data); 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        while (tail->next != head) { 
            tail = tail->next; 
        } 
        tail->next = baru; 
        baru->next = head; 
    } 
} 

// Tambah Node di Tengah 
void insertTengah(string data, int posisi) { 
    if (isEmpty() == 1) { 
        head = baru; 
        tail = head; 
        baru->next = head; 
    } else { 
        baru->data = data; 
        int nomor = 1; 
        bantu = head; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 
        baru->next = bantu->next; 
        bantu->next = baru; 
    } 
} 

// Hapus Node di Depan 
void hapusDepan() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 
            head = head->next; 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Node di Belakang 
void hapusBelakang() { 
    if (isEmpty() == 0) { 
        hapus = head; 
        tail = head; 
        if (hapus->next == head) { 
            head = NULL; 
            tail = NULL; 
            delete hapus; 
        } else { 
            while (hapus->next != head) { 
                hapus = hapus->next; 
            } 
            while (tail->next != hapus) { 
                tail = tail->next; 
            } 
            tail->next = head; 
            hapus->next = NULL; 
            delete hapus; 
        } 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Node di Tengah 
void hapusTengah(int posisi) { 
    if (isEmpty() == 0) { 
        int nomor = 1; 
        bantu = head; 
        while (nomor < posisi - 1) { 
            bantu = bantu->next; 
            nomor++; 
        } 
        hapus = bantu->next; 
        bantu->next = hapus->next; 
        delete hapus; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

// Hapus Seluruh Node 
void clearList() { 
    if (head != NULL) { 
        hapus = head->next; 
        while (hapus != head) { 
            bantu = hapus->next; 
            delete hapus; 
            hapus = bantu; 
        } 
        delete head; 
        head = NULL; 
    } 
    cout << "List berhasil terhapus!" << endl; 
} 

// Tampilkan Isi Linked List 
void tampil() { 
    if (isEmpty() == 0) { 
        tail = head; 
        do { 
            cout << tail->data << ends; 
            tail = tail->next; 
        } while (tail != head); 
        cout << endl; 
    } else { 
        cout << "List masih kosong!" << endl; 
    } 
} 

int main() { 
    init(); 
    insertDepan("Ayam"); 
    tampil(); 
    insertDepan("Bebek"); 
    tampil(); 
    insertBelakang("Cicak"); 
    tampil(); 
    insertBelakang("Domba"); 
    tampil(); 
    hapusBelakang(); 
    tampil(); 
    hapusDepan(); 
    tampil(); 
    insertTengah("Sapi", 2); 
    tampil(); 
    hapusTengah(2); 
    tampil(); 
    return 0; 
}
```

#### Output
![Screenshot 2024-04-29 151510](https://github.com/rennanvra/Praktikum-6/assets/162097323/283c072e-a1a5-4efd-84bc-60fea55d8582)

#### Interpretasi

Program di atas adalah implementasi Linked List Circular. Inisialisasi program dengan head dan tail yang masih 'NULL', kemudian tersedia fungsi untuk menambah, menghapus, dan menampilkan isi linked list. Fungsi insertDepan dan insertBelakang digunakan untuk menambah node di depan dan di belakang, sedangkan insertTengah untuk menambah node di tengah. Fungsi hapusDepan, hapusBelakang, dan hapusTengah digunakan untuk menghapus node di depan, di belakang, dan di tengah. Fungsi clearList digunakan untuk menghapus seluruh isi linked list. Program akan menampilkan output sesuai dengan fungsi apa yang dilakukan.

## Unguided 

### Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa, dengan menggunakan input dari user. 

### 1. Buatlah program menu Linked List Non Circular untuk menyimpan Nama dan NIM mahasiswa, dengan menggunakan input dari user. 

```C++
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void init() {
    head = NULL;
    tail = NULL;
}

bool isEmpty() {
    return head == NULL;
}

void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}

```

#### Output:
![Screenshot 2024-04-29 153937](https://github.com/rennanvra/Praktikum-6/assets/162097323/0569604d-e5c7-4a1c-8093-abcbcdc29617)


#### Interpretasi:
Program di atas menggunakan single linked list non circular untuk membuat suatu menu yang menampilkan fungsi yang dapat menambahkan, mengubah, menghapus, dan melihat Nama dan NIM Mahasiswa. Terdapat beberapa operasi yang dapat dijalankan dalam program tersebut, antara lain adalah operasi tambah, kurang, ubah, tampil data. Operasi tersebut mencakup nilai awal, belakang, maupun tengah.

### 2. Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu  tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau tengah) 

```C++
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void init() {
    head = NULL;
    tail = NULL;
}

bool isEmpty() {
    return head == NULL;
}

void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}
```

#### Output:

![Screenshot 2024-04-29 132235](https://github.com/rennanvra/Praktikum-6/assets/162097323/1922d47c-5bb4-4831-965a-edc32286cf0f)


#### Interpretasi:
Output di atas adalah hasil dari program di atas yang telah dijalankan oleh pengguna dengan menjalankan beberapa fungsi pada menu program, seperti memasukkan data Nama dan NIM Mahasiswa sesuai urutan, dan kemudian menampilkan data yang sudah diinputkan tersebut.

### 3.  Lakukan perintah berikut: 
a) Tambahkan data berikut diantara Farrel dan Denis: 
Wati 2330004 
b) Hapus data Denis 
c) Tambahkan data berikut di awal: 
Owi 2330000 
d) Tambahkan data berikut di akhir: 
David 23300100 
e) Ubah data Udin menjadi data berikut: 
Idin 23300045 
f) Ubah data terkahir menjadi berikut: 
Lucy 23300101 
g) Hapus data awal 
h) Ubah data awal menjadi berikut: 
Bagas 2330002 
i) Hapus data akhir 
j) Tampilkan seluruh data



```C++
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    string nim;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void init() {
    head = NULL;
    tail = NULL;
}

bool isEmpty() {
    return head == NULL;
}

void tambahDepan(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

void tambahBelakang(string nama, string nim) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

void tambahTengah(string nama, string nim, int posisi) {
    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        tambahDepan(nama, nim);
        return;
    }

    Node *baru = new Node;
    baru->nama = nama;
    baru->nim = nim;
    baru->next = NULL;

    Node *temp = head;
    for (int i = 1; i < posisi - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
}

void ubahDepan(string nama, string nim) {
    if (!isEmpty()) {
        head->nama = nama;
        head->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void ubahTengah(string nama, string nim, int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    temp->nama = nama;
    temp->nim = nim;
}

void ubahBelakang(string nama, string nim) {
    if (!isEmpty()) {
        tail->nama = nama;
        tail->nim = nim;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusDepan() {
    if (!isEmpty()) {
        Node *hapus = head;
        head = head->next;
        delete hapus;
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusBelakang() {
    if (!isEmpty()) {
        if (head == tail) {
            delete head;
            head = tail = NULL;
        } else {
            Node *temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    } else {
        cout << "List masih kosong!" << endl;
    }
}

void hapusTengah(int posisi) {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    if (posisi < 1) {
        cout << "Posisi harus lebih dari 0" << endl;
        return;
    }

    if (posisi == 1) {
        hapusDepan();
        return;
    }

    Node *hapus = head;
    Node *sebelum = NULL;
    for (int i = 1; i < posisi && hapus != NULL; i++) {
        sebelum = hapus;
        hapus = hapus->next;
    }

    if (hapus == NULL) {
        cout << "Posisi diluar jangkauan" << endl;
        return;
    }

    sebelum->next = hapus->next;
    delete hapus;
}

void hapusList() {
    while (!isEmpty()) {
        hapusDepan();
    }
    cout << "List berhasil terhapus!" << endl;
}

void tampil() {
    if (isEmpty()) {
        cout << "List kosong!" << endl;
        return;
    }

    cout << "DATA MAHASISWA" << endl;
    cout << "NAMA\tNIM" << endl;

    Node *temp = head;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->nim << endl;
        temp = temp->next;
    }
}

int main() {
    init();

    int operasi;
    string nama, nim;
    int posisi;

    do {
        cout << "PROGRAM SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. Tampil Data" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih Operasi: ";
        cin >> operasi;

        switch (operasi) {
            case 1:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahDepan(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                tambahBelakang(nama, nim);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 3:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                tambahTengah(nama, nim, posisi);
                cout << "Data telah ditambahkan" << endl;
                break;
            case 4:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahDepan(nama, nim);
                cout << "Data depan berhasil diubah" << endl;
                break;
            case 5:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                ubahBelakang(nama, nim);
                cout << "Data belakang berhasil diubah" << endl;
                break;
            case 6:
                cout << "Masukkan Nama: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                ubahTengah(nama, nim, posisi);
                cout << "Data tengah berhasil diubah" << endl;
                break;
            case 7:
                hapusDepan();
                cout << "Data depan berhasil dihapus" << endl;
                break;
            case 8:
                hapusBelakang();
                cout << "Data belakang berhasil dihapus" << endl;
                break;
            case 9:
                cout << "Masukkan Posisi: ";
                cin >> posisi;
                hapusTengah(posisi);
                cout << "Data tengah berhasil dihapus" << endl;
                break;
            case 10:
                hapusList();
                break;
            case 11:
                tampil();
                break;
            case 0:
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Operasi tidak valid!" << endl;
        }
    } while (operasi != 0);

    return 0;
}
```
#### Output

![Screenshot 2024-04-29 132149](https://github.com/rennanvra/Praktikum-6/assets/162097323/33a71fec-de45-4578-bca5-5dd64bf69a00)

#### Interpretasi:
Output di atas adalah hasil dari program di atas yang telah dijalankan oleh pengguna dengan menjalankan beberapa fungsi pada menu program, seperti memasukkan data baru di awal,tengah, maupun belakang.  Menghapus data baik di awal, tengah, maupun belakang. Mengubah data baik data awal, tengah, maupun belakang. Kemudian menampilkan seluruh data sesuai dengan operasi yang dijalankan tadi.

## Kesimpulan
Linked list adalah struktur data yang terdiri dari node-node yang saling terhubung. Setiap node memiliki dua bagian utama: bagian data yang menyimpan elemen, dan bagian next yang menyimpan alamat node selanjutnya dalam linked list. Ada dua jenis linked list yang umum digunakan: single linked list yang hanya memiliki satu arah dan double linked list yang memungkinkan setiap node memiliki pointer ke node sebelumnya dan node berikutnya. Linked list non-circular memiliki node terakhir yang tidak terhubung kembali ke node pertama, sementara linked list circular memiliki node terakhir yang terhubung kembali ke node pertama. Kedua jenis linked list ini memiliki kegunaan yang berbeda tergantung pada kebutuhan aplikasi.

## Referensi
[1] kurniman Putra, A. List linier (linked list) dan variasinya_struktur data.

[2] kurniman Putra, A. Single linked list.

[3] GeeksforGeeks. (n.d.). Circular Linked List. Diakses pada 29 April 2024, dari https://www.geeksforgeeks.org/circular-linked-list/
