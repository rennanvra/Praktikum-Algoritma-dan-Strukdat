#include <iostream>
using namespace std;

int main (){
    int pilihan, n;
    cout << "======================================="<<endl;
    cout << "           Program Menu Array          "<<endl;
    cout << "======================================="<<endl;

    cout<<endl;
    cout<<endl;

    cout <<"Masukkan jumlah elemen array:";
    cin >> n;
    int arr[n];
    cout <<"Masukkan " << n <<" elemen array: ";
    for (int x= 0; x < n; x++){
        cin >> arr[x];
    }
    while (true){
        cout << "\nMenu: \n1. Cari nilai maksimum\n2. Cari nilai minimum\n3. Cari nilai rata-rata\n4. Keluar\n";
        cout << "Pilihan:";
        cin >> pilihan;
        switch(pilihan){
            case 1: {
                int max = arr[0];
                for (int x = 1; x < n; x++){
                    if(arr [x]> max){
                        max = arr[x];
                    }
                }
                cout << "Nilai maksimum:" << max << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for(int x =1; x < n; x++){
                    if (arr[x]< min){
                        min = arr[x];
                    }
                }
                cout << "Nilai minimum:" << min << endl;
                break;
            }
            case 3: {
                int sum = 0;
                double avg;
                for (int x = 0; x < n; x++){
                    sum += arr[x];
                }
                avg = (double)sum / n;
                cout << "Nilai rata-rata:" << avg << endl;
                break;
            }
            case 4: {
                cout << "Terima kasih!" << endl;
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid, silahkan coba lagi!" << endl;
            }
        }
    }
    return 0;
}