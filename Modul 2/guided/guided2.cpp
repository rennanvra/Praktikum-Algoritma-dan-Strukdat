#include <iostream>
using namespace std;

int main()
{
    // deklarasi variabel
    int maks, a, i = 1, lokasi;
    // masukkan data
    cout << "Masukkan array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " Angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array [0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di array ke " << lokasi << endl;
}