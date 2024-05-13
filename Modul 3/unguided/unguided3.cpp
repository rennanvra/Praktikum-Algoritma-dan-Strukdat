#include<iostream>
using namespace std;

void bubble_sort_ascending(char arr[], int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubble_sort_descending(char arr[],int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "input (n): "; cin >> n;
    char karakter[n];
    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i+1 << ":";
        cin >> karakter[i];
    }
    cout << "\nUrutan karakter sebelum sorting:"<< endl;
    for (int i = 0; i < n; i++) {
        cout << karakter[i] << " ";
    }
    cout << endl;
    bubble_sort_ascending(karakter, n);
    cout << "\nUrutan karakter setelah ascending sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << karakter[i] << " ";
    }
    cout << endl;
    bubble_sort_descending(karakter, n);
    cout << "\nUrutan karakter setelah descending sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << karakter[i] << " ";
    }
    cout << endl;

return 0;
}