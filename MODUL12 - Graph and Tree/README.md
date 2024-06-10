# <h1 align="center">Laporan Praktikum Modul 12 - Graph & Tree </h1>
<p align="center">Renna Novaria W - S1SD 04A - 2311110047</p>

## Dasar Teori

## Graph
Graph adalah kumpulan node (simpul) di dalam bidang dua dimensi yang dihubungkan dengan sekumpulan garis (sisi). Graph dapat digunakan untuk merepresentasikan objekobjek diskret dan hubungan antara objek-objek tersebut. Representasi visual dari graph adalah dengan menyatakan objek sebagai node, bulatan, atau titik (vertex), sedangkan hubungan antara objek dinyatakan dengan garis (edge)[1].

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/318005ef-082d-4417-8112-46c35d302734)

```
G = (V, E)

Keterangan:
G = graph
V = simpul atau titik (vertex atau node)
E = busur atau edge, atau arc
```

Jalur pada graph dinotasikan sebagai berikut:

```
P = (V0, V1, …, Vn)

Keterangan:
P = jalur
Vi = titik jalur
n = jumlah titik jalur
```

### Istilah pada Grpah

**1. Vertex**

Vertex yaitu himpunan node/titik pada sebuah graph[1].

**2. Edge**

Edge yaitu himpunan garis yang menghubungkan tiap
node/vertex[1].

**3. Adjacent**

Dua buah titik dikatakan berdekatan (adjacent) jika
keduanya terhubung dengan sebuah sisi[1]. 

**4. Weight**

Sebuah graph G = (V, E) disebut sebuah graph berbobot (weight graph) apabila terdapat sebuah fungsi bobot bernilai real W pada himpunan E[1].

**W : E -> R**

Nilai W(e) disebut bobot untuk sisi e, ∀ e ∈ E. Graph berbobot tersebut dinyatakan pula sebagai: G = (V, E, W).Graph berbobot G = (V, E, W) dapat menyatakan:

- Suatu sistem perhubungan udara, di mana:

    V = himpunan kota-kota

    E = himpunan penerbangan langsung dari satu kota ke kota lain

    W = fungsi bernilai real pada E yang menyatakan jarak atau ongkos atau waktu

- Suatu sistem jaringan komputer, di mana:

    V = himpunan komputer

    E = himpunan jalur komunikasi langsung antar dua komputer
    
    W = fungsi bernilai real pada E yang menyatakan jarak atau ongkos atau waktu

**5. Path**

Path adalah jalur dengan setiap vertex berbeda. Contoh: P = D5B4C2A. Sebuah jalur (W) didefinisikan sebagai urutan (tidak nol) vertex dan edge. Diawali origin vertex (vertex awal) dan diakhiri terminus vertex (vertex akhir). Dan, setiap dua garis berurutan adalah series. Contoh: W = A1B3C4B1A2[1].

**6. Cycle**

Cycle (siklus) atau circuit (sirkuit) merupakan lintasan yang berawal dan berakhir pada simpul yang sama[1].

### Jenis-Jenis Graph

**1. Graf tak berarah (undirected graph)**

Graf yang sisinya tidak mempunyai orientasi arah disebut graf tak berarah. Pada graf tak-berarah, urutan pasangan simpul yang dihubungkan oleh sisi tidak diperhatikan[2].

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/2a55e953-01f1-4116-8726-e5e5bc5388a3)

**2.  Graf Berarah (directed graph)**

Graf yang setiap sisinya memiliki orientasi arah disebut sebagai graf berarah. Sisi berarah dalam graf ini dapat dinamakan sebagai busur (arc). Lain halnya dengan graf tak-berarah, urutan pasangan simpul disini sangat diperhatikan karena dapat menyatakan hal yang berbeda. Pada graf berarah, (vj,vk) dan (vk,vj) menyatakan dua buah busur yang berbeda[2].

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/2c0d36f4-9875-4e43-be31-1b57e4d85ff3)


**3. Graph Berbobot (Weighted Graph)**

Jika setiap busur mempunyai nilai yang menyatakan hubungan antara dua buah simpul, maka busur tersebut dinyatakan memiliki bobot. Bobot sebuah busur dapat menyatakan panjang sebuah jalan dari dua buah titik, jumlah rata-rata kendaraan per hari yang melalui sebuah jalan, dan lain-lain[1].

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/f687e3c3-538a-48e4-bb85-c7e6074db1c6)


### Representasi Graph dengan Matriks (Array Dimensi 2)

Dalam pemrograman, agar data yang ada dalam graph dapat diolah, maka graph harus dinyatakan dalam suatu struktur data yang dapat mewakili graph tersebut. Dalam hal ini, graph perlu direpresentasikan ke dalam bentuk array dan dimensi yang sering disebut matrix[1]. 

Lintasan terpendek merupakan salah satu dari masalah yang dapat diselesaikan dengan graph. Jika diberikan sebuah graph berbobot, masalah lintasan terpendek adalah bagaimana kita mencari sebuah jalur pada graph yang meminimalkan jumlah bobot sisi pembentuk jalur tersebut[1].

Terdapat beberapa macam persoalan lintasan terpendek,
antara lain:
1. Lintasan terpendek antara dua buah simpul tertentu (*a pair shortest path*).
2. Lintasan terpendek antara semua pasangan simpul (*all pairs shortest path*).
3. Lintasan terpendek dari simpul tertentu ke semua simpul yang lain (*single-source shortest path*).
4. Lintasan terpendek antara dua buah simpul yang melalui beberapa simpul tertentu (*intermediate shortest path*).

## Tree

Struktur    pohon (tree)    merupakan    struktur  yang  penting  mengharuskan  kita      mengorganisasikan informasi  berdasarkan    struktur    lojik.  Struktur    data    tree    juga  memungkinkan  untuk  mengakses    suatu  elemen  dengan  khusus.    Struktur    tree  banyak    dipakai  untuk    menggambarkan    data    yang    memiliki  struktur seperti pohon atau ada disebut sebagai struktur yang hirarkis[3].

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/4a604bd0-548a-480f-89cf-5fe0c6340a1c)

Tree/pohon   merupakan   struktur   data   yang   tidak   linear/non   linear   yang   digunakan   terutama   untuk merepresentasikan hubungan data yang bersifat hierarkis antara elemen -elemennya[3].

### Implementasi Teori Pohon

Implementasi teori pohon merupakan salah satu
pilihan struktur data terbaik yang pernah ada dan
masing-masing implementasi tersebut tentunya
merupakan pilihan terbaik untuk kasus-kasus
tertentu[4]. Berikut beberapa contoh implementasi
dari teori pohon :
1. Binary Search Tree
    Binary Search Tree adalah sebuah pohon biner yang mempunyai properti tambahan. Properti ini adalah :
    - Semua elemen pada upapohon (subpohon) kiri nilainya lebih kecil atau sama dengan nilai akar.
    - Semua elemen pada upapohon kanan nilainya lebih besar dari nilai akar.
    - Upapohon kiri dan kanan merupakan Binary Search Tree.

    ![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/66b7f766-46bc-42b8-9cd9-84613c5e18f6)

2. AVL-Tree (The Height Balance Tree)

    Sebuah AVL-Tree merupakan Binary Search Tree yang upapohon kiri dan kanan dari akarnya tidak akan berselisih lebih dari 1 dan setiap upapohon dari AVL-Tree juga merupakan AVLTree. Dan setiap simpul di AVL-Tree mempunyai faktor penyeimbang (balance factor) yang bernilai left-higher (upapohon kiri > kanan), equal-height (upapohon kiri = kanan), righthigher (upapohon kiri < kanan)[4].

3. Splay-Tree (The Self-Adjusting Tree)

    Splay-Tree merupakan salah satu modifikasi binary search tree dengan tujuan tertentu. Tujuan utama dari konsep splay-tree ini adalah untuk memudahkan pencarian dan pengambilan data terutama data yang baru masuk dan yang paling aktif diakses atau dimodifikasi[4].

    
    Perbedaan utama splay-tree dibandingkan binary search tree ataupun AVL-Tree adalah data baru atau yang frekuensi aksesnya tinggi berada dekat dengan akar pohon sehingga untuk mengakses data tersebut tidak diperlukan waktu yang lama dibandingkan dengan binary search tree atau AVL-Tree yang membuat kita harus menelusuri pohon sampai ke daun karena data baru akan ditempatkan sebagai daun. Untuk jenis data seperti inilah splay-tree sangat dibutuhkan dimana setiap kali adanya operasi penambahan atau juga pengambilan data, struktur pohonnya akan dirombak ulang dengan menaikkan data tersebut (jika berada dibagian bawah pohon / daun) sesuai dengan tingkat frekuensi akses dan keterbaharuannya[4].

### Istilah pada Struktur Data Tree
![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/a155cc1a-d313-4161-bcdd-63b8885daaa3)

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/f66d4828-9c00-48f3-9856-d8834becfd92)


### Operasi pada Tree

**a.	Create**: digunakan untuk membentuk binary tree baru yang masih kosong.

**b.	Clear**: digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada binary tree.

**c.	isEmpty**: digunakan untuk memeriksa apakah binary tree masih kosong atau tidak.

**d.	Insert**: digunakan untuk memasukkan sebuah node kedalam tree.

**e.	Find**: digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree tidak boleh kosong.

**f.	Update**: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree tidak boleh kosong. 

**g.	Retrive**: digunakan untuk mengetahui isi dari node yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.

**h.	Delete Sub**: digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.

**i.	Characteristic**: digunakan untuk mengetahui karakteristik dari suatu tree. Yakni size, height, serta average lenght-nya.

**j.	Traverse**: digunakan untuk mengunjungi seluruh node-node pada tree dengan cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini yakni Pre-Order, In-Order, dan Post-Order.


**1. Pre-Order**

Penelusuran secara pre-order memiliki alur:

a.	Cetak data pada simpul root

b.	Secara rekursif mencetak seluruh data pada subpohon kiri

c.	Secara	rekursif	mencetak	seluruh	data	pada	subpohon	kanan Dapat kita turunkan rumus penelusuran menjadi:

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/62d1a757-dc3b-469f-a91a-31443f0ce86e)

**Alur Pre-Order**
![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/67d2f2d3-a8f5-4dc4-9f8a-4535469c1c2a)
![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/c4587887-418d-479f-8b2e-9cc9180ff54f)

**2. In Order**

Penelusuran secara in-order memiliki alur:

a.	Secara rekursif mencetak seluruh data pada subpohon kiri

b.	Cetak data pada root

c.	Secara	rekursif	mencetak	seluruh	data	pada	subpohon	kanan Dapat kita turunkan rumus penelusuran menjadi:

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/22c4fb26-7175-433c-8a46-f54de4b6e456)

**3. Post-Order**

Penelusuran secara in-order memiliki alur:

a.	Secara rekursif mencetak seluruh data pada subpohon kiri

b.	Secara rekursif mencetak seluruh data pada subpohon kanan

c.	Cetak data pada root

Dapat kita turunkan rumus penelusuran menjadi:

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/e1ff532e-429a-4cd5-92c5-386581664d7a)


## Guided 

### Guided 1 

Source code:
```C++
#include <iostream>
#include <iomanip>

using namespace std;

string simpul[7] = {
    "Ciamis", "Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"
};

int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << " " << setiosflags(ios::left) << setw(15) << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0) {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom] << ")";
            }
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```

#### Output

![Screenshot 2024-06-09 205118](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/f83fad27-2f50-446e-8390-5c752d7018c1)


#### Interpretasi:
Program di atas adalah sebuah program graph dengan tujuh simpul yang menjelaskan kota-kota di Indonesia dan beberapa busur yang menerangkan jarak antar kota-kota tersebut. Fungsi `tampilGraph` menampilkan graph dalam bentuk teks, yang mana setiap simpul diikuti oleh daftar simpul yang terhubung dengannya beserta jarak (berbobot) yang diwakili dalam kurung.

Output program akan menampilkan hubungan antar kota dengan format setiap baris dimulai dengan nama kota, diikuti oleh daftar kota yang terhubung dengannya serta bobot dari masing-masing busur. Misalnya, baris pertama akan menunjukkan bahwa "Ciamis" terhubung ke "Bandung" dengan bobot 7 dan "Bekasi" dengan bobot 8.

### Guided 2 

Source code:
```C++
#include<iostream>
using namespace std;

struct TNode {
    int data;
    TNode *left;
    TNode *right;

    // constructor
    TNode(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void preOrder(TNode *node) {
    if (node != NULL) {
        cout << node -> data << " ";
        preOrder(node -> left);
        preOrder(node -> right);
    }
}

void inOrder(TNode *node) {
    if (node != NULL) {
        inOrder (node -> left);
        cout << node -> data << " ";
        inOrder(node -> right);
    }
}

void postOrder(TNode *node) {
    if (node != NULL) {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }
}

int main() {
    TNode *zero = new TNode(0);
    // 0
    // /\
    // NULL NULL

    TNode *one = new TNode(1);
    TNode *five = new TNode(5);
    TNode *seven = new TNode(7);
    TNode *eight = new TNode(8);
    TNode *nine = new TNode(9);

    seven -> left = one;
    // 7
    // /\
    // 1 NULL

    seven -> right = nine;
    // 7
    // /\
    // 1 9

    one -> left = zero;
    // 7
    // /\
    // 1 9
    // /\
    // 0 NULL

    one -> right = five;
    // 7
    // /\
    // 1 9
    // /\
    // 0 5

    nine -> left = eight;
    // 7
    // /\
    // 1 9
    // / \ / \
    // 0 5 8 NULL

    preOrder(seven);
    cout << endl;

    inOrder(seven);
    cout << endl;

    postOrder(seven);
    cout << endl;

    return 0;
}
```
#### Output

![Screenshot 2024-06-09 205140](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/0e6d31b5-bb91-4915-9f73-7fb2d1a6ef9c)

#### Interpretasi:
Program di atas merupakan struktur data binary tree (`TNode`) dengan fungsi untuk traversal pre-order, in-order, dan post-order. Pada pohon biner terdapat simpul-simpul yang bernilai 0, 1, 5, 7, 8, dan 9. Akar pohon adalah simpul dengan nilai 7, yang memiliki anak kiri 1 dan anak kanan 9, dan seterusnya.

Output program adalah hasil dari traversal pohon dalam tiga urutan berbeda:

- Pre-order: 7 1 0 5 9 8
- In-order: 0 1 5 7 8 9
- Post-order: 0 5 1 8 9 7

Traversal ini mencetak nilai simpul sesuai dengan metode yang digunakan.

## Unguided

### 1.	Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya. Output Program:
![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/9d4f2fea-e595-451c-a286-2ed63c719ec7)



Source Code:
```C++
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct Graf {
    string *namaSimpul;
    int **jarak;
    int renna_2311110047; // NIM ditambahkan pada nama variabel
};

void tampilkanGraf(const Graf& g) {
    cout << "  ";
    for (int i = 0; i < g.renna_2311110047; i++) {
        cout << setw(6) << g.namaSimpul[i];
    }
    cout << endl;
    for (int i = 0; i < g.renna_2311110047; i++) {
        cout << setw(4) << g.namaSimpul[i];
        for (int j = 0; j < g.renna_2311110047; j++) {
            cout << setw(6) << g.jarak[i][j];
        }
        cout << endl;
    }
}

void buatGraph() {
    int renna_2311110047; // NIM ditambahkan pada nama variabel
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> renna_2311110047;
    cin.ignore();
    cout << "Silahkan masukkan nama simpul" << endl;

    // Membuat struktur Graf
    Graf g;
    g.renna_2311110047 = renna_2311110047; // NIM ditambahkan pada nama variabel
    g.namaSimpul = new string[g.renna_2311110047];
    g.jarak = new int *[g.renna_2311110047];
    for (int i = 0; i < g.renna_2311110047; i++) {
        g.jarak[i] = new int[g.renna_2311110047]();
    }

    // Mengisi nama simpul
    for (int i = 0; i < g.renna_2311110047; i++) {
        cout << "Simpul " << i + 1 << " : ";
        getline(cin, g.namaSimpul[i]);
    }

    // Mengisi bobot antar simpul
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 0; i < g.renna_2311110047; i++) {
        for (int j = 0; j < g.renna_2311110047; j++) {
            cout << g.namaSimpul[i] << " --> " << g.namaSimpul[j] << " = ";
            cin >> g.jarak[i][j];
        }
    }

    // Menampilkan graf
    tampilkanGraf(g);

    // Membersihkan memori
    for (int i = 0; i < g.renna_2311110047; i++) {
        delete[] g.jarak[i];
    }
    delete[] g.jarak;
    delete[] g.namaSimpul;
}

int main() {
    buatGraph();
    return 0;
}
```
#### Output

![Screenshot 2024-06-09 214556](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/a54e2d9b-00c6-4f91-b3db-2d926a8bb4f4)

#### Interpretasi:
Program di atas memungkinkan pengguna untuk membuat dan menampilkan graf dengan simpul dan bobot antar simpul. Pengguna dapat memasukkan jumlah simpul, kemudian memberikan nama untuk setiap simpul. Setelah itu, pengguna memasukkan bobot untuk setiap pasangan simpul, yang menunjukkan jarak atau hubungan antar simpul. Program menampilkan graf dalam bentuk matriks dengan nama simpul sebagai header baris dan kolom, serta bobot antar simpul sebagai elemen matriks. Setelah menampilkan graf, program membersihkan memori yang telah dialokasikan secara dinamis. Contoh output menampilkan graf dengan 2 simpul ("BALI", "PALU") dan bobot antar simpul yang diisi oleh pengguna, memvisualisasikan hubungan dan jarak antar simpul.

### 2.	Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan berikan fungsi tambahan untuk menampilkan node child dan descendant dari node yang diinput kan!


Source Code:
```C++
#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

class Tree {
private:
    Node* root;

    void preOrderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void inOrderTraversal(Node* node) {
        if (node == nullptr) return;
        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }

    Node* findNode(Node* node, const string& value) {
        if (node == nullptr) return nullptr;
        if (node->data == value) return node;
        Node* foundNode = findNode(node->left, value);
        if (foundNode == nullptr) {
            foundNode = findNode(node->right, value);
        }
        return foundNode;
    }

    void printChildren(Node* node) {
        if (node->left) {
            cout << "Left child: " << node->left->data << endl;
        } else {
            cout << "Left child: None" << endl;
        }
        if (node->right) {
            cout << "Right child: " << node->right->data << endl;
        } else {
            cout << "Right child: None" << endl;
        }
    }

    void printDescendants(Node* node) {
        if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        bool hasDescendants = false;
        cout << "Descendants of " << node->data << ": ";
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            if (current != node) {
                cout << current->data << " ";
                hasDescendants = true;
            }
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (!hasDescendants) {
            cout << "None";
        }
        cout << endl;
    }

    void deleteSubtree(Node* node) {
        if (node == nullptr) return;
        deleteSubtree(node->left);
        deleteSubtree(node->right);
        delete node;
    }

public:
    Tree() : root(nullptr) {}
    ~Tree() { deleteSubtree(root); }

    void insertRoot(const string& value) {
        if (root == nullptr) {
            root = new Node{value, nullptr, nullptr};
            cout << "Root node " << value << " berhasil ditambahkan." << endl;
        } else {
            cout << "Root sudah ada." << endl;
        }
    }

    void insertLeftChild(const string& parent, const string& leftChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak ditemukan." << endl;
            return;
        }
        if (leftChild != "None") {
            if (parentNode->left == nullptr) {
                parentNode->left = new Node{leftChild, nullptr, nullptr};
                cout << "Left child " << leftChild << " berhasil ditambahkan ke " << parent << endl;
            } else {
                cout << "Left child sudah ada untuk " << parent << endl;
            }
        }
    }

    void insertRightChild(const string& parent, const string& rightChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak ditemukan." << endl;
            return;
        }
        if (rightChild != "None") {
            if (parentNode->right == nullptr) {
                parentNode->right = new Node{rightChild, nullptr, nullptr};
                cout << "Right child " << rightChild << " berhasil ditambahkan ke " << parent << endl;
            } else {
                cout << "Right child sudah ada untuk " << parent << endl;
            }
        }
    }

    void updateNode(const string& oldValue, const string& newValue) {
        Node* node = findNode(root, oldValue);
        if (node != nullptr) {
            node->data = newValue;
            cout << "Node " << oldValue << " berhasil diupdate ke " << newValue << "." << endl;
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void findAndPrintNode(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            cout << "Node ditemukan: " << node->data << endl;
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void preOrderTraversal() {
        cout << "PreOrder Traversal: ";
        preOrderTraversal(root);
        cout << endl;
    }

    void inOrderTraversal() {
        cout << "InOrder Traversal: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void postOrderTraversal() {
        cout << "PostOrder Traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }

    void printChildren(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void printDescendants(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printDescendants(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void deleteTree() {
        deleteSubtree(root);
        root = nullptr;
        cout << "Tree berhasil dihapus." << endl;
    }

    void deleteSubtree(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            deleteSubtree(node);
            cout << "Subtree mulai dari node " << value << " berhasil dihapus." << endl;
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }
};

int main() {
    Tree tree;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Root Node\n";
        cout << "2. Left Child\n";
        cout << "3. Right Child\n";
        cout << "4. Find Node\n";
        cout << "5. PreOrder\n";
        cout << "6. InOrder\n";
        cout << "7. PostOrder\n";
        cout << "8. Print Child\n";
        cout << "9. Print Descendants\n";
        cout << "10. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        string value, leftChild, rightChild;
        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk root node: ";
                getline(cin, value);
                tree.insertRoot(value);
                break;
            case 2:
                cout << "Masukkan nama parent node: ";
                getline(cin, value);
                cout << "Masukkan nama left child (atau 'None'): ";
                getline(cin, leftChild);
                tree.insertLeftChild(value, leftChild);
                break;
            case 3:
                cout << "Masukkan nama parent node: ";
                getline(cin, value);
                cout << "Masukkan nama right child (atau 'None'): ";
                getline(cin, rightChild);
                tree.insertRightChild(value, rightChild);
                break;
            case 4:
                cout << "Masukkan nama node yang dicari: ";
                getline(cin, value);
                tree.findAndPrintNode(value);
                break;
            case 5:
                tree.preOrderTraversal();
                break;
            case 6:
                tree.inOrderTraversal();
                break;
            case 7:
                tree.postOrderTraversal();
                break;
            case 8:
                cout << "Masukkan node yang ingin dicetak child-nya: ";
                getline(cin, value);
                tree.printChildren(value);
                break;
            case 9:
                cout << "Masukkan nama node yang ingin dicetak descendants-nya: ";
                getline(cin, value);
                tree.printDescendants(value);
                break;
            case 10:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilihan != 10);

    return 0;
}
```
#### Output

![image](https://github.com/rennanvra/Praktikum-Algoritma-dan-Strukdat/assets/162097323/86cf918b-30b0-4ba0-b0db-325fec4afef8)

#### Interpretasi:
Program di atas adalah implementasi pohon biner yang bisa kita modifikasi. Jadi, kita bisa tambahkan, update, atau hapus simpul sesuai keinginan. Saat kita jalankan program, kita diminta untuk pilih aksi yang ingin kita lakukan. Misalnya, kita bisa tambahkan simpul, lalu lihat bagaimana penelusuran pohonnya, atau mungkin kita ingin hapus bagian tertentu dari pohon. Program ini memberi kita kontrol penuh atas pohon biner kita dan memberi tahu kita tentang apa yang terjadi setiap kali kita lakukan sesuatu. Jadi, itu sangat membantu untuk memahami dan mengelola struktur pohon biner kita sendiri.


## Kesimpulan
Graph adalah struktur yang terdiri dari kumpulan node (simpul) yang dihubungkan oleh garis (sisi) dan digunakan untuk merepresentasikan objek diskret serta hubungan antar objek. Ada beberapa jenis graph seperti graf tak berarah, graf berarah, dan graf berbobot, yang masing-masing memiliki karakteristik khusus. Jalur pada graph dinotasikan sebagai urutan vertex dan edge, dan konsep seperti vertex, edge, adjacent, weight, path, dan cycle adalah fundamental dalam memahami struktur graph.

Selain graph, struktur data pohon (tree) juga penting untuk mengorganisasikan informasi secara hierarkis. Contoh implementasi pohon termasuk Binary Search Tree, AVL-Tree, dan Splay-Tree, yang masing-masing memiliki kelebihan untuk kasus tertentu, seperti pencarian data efisien dan penyeimbangan otomatis. Struktur pohon memfasilitasi akses data yang cepat dan efisien, terutama dalam konteks data yang sering diakses atau dimodifikasi.

## Referensi
[1] Mulyana, A. (2023). E-Books Cara Mudah Mempelajari Algoritma dan Struktur Data.

Available: (https://repository.mercubuana.ac.id/80729/1/Cara%20Mudah%20Mempelajari%20Algoritma%20dan%20Struktur%20Data.pdf)

[2] Anggara, F. D. (2009). Studi dan Implementasi Struktur Data Graf. Jurnal Sekolah Teknik Elektro dan Informatika Institut Teknologi Bandung, Bandung.

Available: (https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2008-2009/Makalah2008/Makalah0809-097.pdf)


[3] Agustin, S., Permana, A. Y., Fazri, H. N., Robi, M., & Firmansyah, R. (2022). IMPLEMENTASI STRUKTUR DATA TREE PADA WEB BLOG SEBAGAI MEDIA PEMBELAJARAN. Jurnal Informatika Dan Tekonologi Komputer (JITEK), 2(2), 206-212.

Available: (https://journal.amikveteran.ac.id/index.php/jitek/article/view/316/251).


[4] Akbar, K. S. R. (2006). Penerapan Teori Pohon Dalam Kajian Struktur Data. Insitut Teknologi Bandung.

Available: (https://informatika.stei.itb.ac.id/~rinaldi.munir/Matdis/2006-2007/Makalah/Makalah0607-24.pdf).
