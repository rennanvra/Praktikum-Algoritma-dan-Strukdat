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