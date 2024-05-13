#include <iostream> 
using namespace std;

void selection_sort(float arr[], int n) {
    for (int i = 0; i < n-1; i++) { 
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) { 
                min = j;
        }
    }
    if (min != i) {
        float temp = arr[i]; 
        arr[i] = arr[min]; 
        arr[min] = temp;
        }
    }
    cout << endl; 
}

void print_array(float arr[], int n) { 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main() {
    int length = 5;
    float a[length] = {3.8, 2.9, 3.3, 4.0, 2.4};
    cout << "IPS mahasiswa sebelum sorting: " << endl; 
    print_array(a, length);
    selection_sort(a, length);
    cout << "IPS maha siswa setelah sorting: " << endl; 
    print_array(a, length);

return 0; 
}
