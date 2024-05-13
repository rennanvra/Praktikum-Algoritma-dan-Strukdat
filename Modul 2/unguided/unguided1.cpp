#include <iostream>
using namespace std;

int main(){
    int data [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Data Array :" ;
    for(int i = 0; i < 10; i++){
        cout<< data[i]<< " ";

    }
    cout<<endl;
    cout<<"Nomor Genap :";
    for (int i = 0; i < 10; i++){
        if (data[i] % 2 ==0)
    {
        cout << data[i]<< " ";
    }
}
cout<<endl;
    cout<<"Nomor Ganjil :";
    for(int i = 0; i < 10; i++)

    {
        if(data[i] % 2 ==1)
    {
        cout<< data[i]<< " ";

    }
    }
    cout<<endl;
    return 0;
}