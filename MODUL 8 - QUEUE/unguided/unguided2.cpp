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
