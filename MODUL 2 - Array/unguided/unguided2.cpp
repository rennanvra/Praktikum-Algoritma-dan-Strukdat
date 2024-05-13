#include <iostream> 
using namespace std;

int main() 
{
    int X, Y, Z;

    cout << "\nMasukkan ukuran X: "; cin >> X; 
    cout << "Masukkan ukuran Y: "; cin >> Y; 
    cout << "Masukkan ukuran Z: "; cin >> Z; cout << endl;
    
    int data_array[X][Y][Z];
    
    for (int x = 0; x < X; x++) { 
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                cout << "Input Array [" << x << "][" << y <<
"][" << z << "] = "; cin >> data_array[x][y][z]; 
            }
        }
    }
    cout << endl;

    cout << "Data Array :\n"; 
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) { 
            for (int z = 0; z < Z; z++) {
                cout << "Data Array [" << x << "][" << y << 
"][" << z << "] = " << data_array[x][y][z] << endl;
            } 
        }
    }
    cout << endl;

    cout << "Array :\n";
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) { 
            for (int z = 0; z < Z; z++) {
                cout << data_array[x][y][z] << ' '; 
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}