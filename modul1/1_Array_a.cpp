#include <iostream>
using namespace std;

int main(){
    string lagi;
    int i = 0,total=0;
    int x[10];
    do
    {
        cout<<"Isi Angka ke  "<<i<<" : ";
        cin>>x[i]; total = total+x[i];
        cout<<"Apakah anda akan mengisi lagi ? y/t : ";
        cin>>lagi;
        i++;
    } while (lagi != "t");

    int jum = i;

    // cetak data array
    cout<<"Data yang telah anda masukkkan "<<endl;
    cout<<"==============================="<<endl;
    cout<<"no                Nilai "<<endl;
    for (int j = 0; j < jum; j++)
    {
        cout<<j<<"           "<<x[j]<<endl;
    }
    cout<<"==============================="<<endl;


    cout<<"jumlah :"<<jum<<endl;
    cout<<"Total nilai : "<<total<<endl;
    int rata=total/jum;
    cout<<"Rata -Rata : "<<rata<<endl;

    // mencari nilai terbesar dan terkecil
    int max = x[0],min = x[0];
    for (int i = 0; i < jum; i++)
    {
        if(x[i] > max ) max = x[i];
        if(x[i] < max ) min = x[i];
    }

    cout<<"nilai terbesar adalah : "<<max<<endl;
    cout<<"nilai terkecil adalah : "<<min;
}
