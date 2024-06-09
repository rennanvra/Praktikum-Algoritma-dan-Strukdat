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
