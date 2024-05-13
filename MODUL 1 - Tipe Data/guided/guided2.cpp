#include <stdio.h>
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *addres;
    int age;
};

int main()
{

    // Menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    mhs1.name = "Dian";
    mhs1.addres = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.addres = "Surabaya";
    mhs2.age = 23;

    // Mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.addres);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.addres);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}