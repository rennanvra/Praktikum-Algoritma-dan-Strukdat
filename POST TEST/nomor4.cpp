// Buatlah program C++ untuk mengimplementasikan struktur data single linked list yang dapat melakukan operasi berikut:
// a. Menambahkan elemen di akhir linked list
// b. Mencetak semua elemen dalam linked list
// c. Menghapus elemen pertama (head) dalam linked list

#include <iostream>
using namespace std;

struct Node {
    string data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;