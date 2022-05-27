#include <iostream>
using namespace std;

struct mhs{
    char nama[20],nim[10],jurusan[2];
    int sks,program;
};

struct mhs bayar[2];

int main(){
    int bts,var,tetap;
    for (int i = 0; i < 2; i++)
    {
        // input data
        cout<<"------------------------------"<<endl;
        cout<<"Nama mhs = ";cin>>bayar[i].nama;
        cout<<"NIM = ";cin>>bayar[i].nim;
        cout<<"Jurusan[m1, S1] = ";cin>>bayar[i].jurusan;
        input:
            cout<<"Program [1=D3, 2=S1] = ";cin>>bayar[i].program;

            if(bayar[i].program <0 || bayar[i].program>2){
                cout<<"Program tidak sesuai"<<endl;
                goto input;
            }
            cout<<"Jumlah sks =";cin>>bayar[i].sks;

            if(bayar[i].program==1){
                tetap = 500000;
                var = bayar[i].sks*25000;
            }else if(bayar[i].program==2){
                tetap = 750000;
                var = bayar[i].sks*50000;
            }cout<<endl;


            // output data
            cout<<"------------------------------"<<endl;
            cout<<"     Output"<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"Nama = "<<bayar[i].nama<<endl;
            cout<<"NIM = "<<bayar[i].nim<<endl;
            cout<<"Jurusan = "<<bayar[i].jurusan<<endl;
            cout<<"Program = "<<bayar[i].program<<endl;
            cout<<"Jumlah sks = "<<bayar[i].sks<<endl;
            cout<<"Spp Tetap = "<<tetap<<endl;
            cout<<"Spp Variabel = "<<var<<endl;
            cout<<"------------------------------"<<endl;
    }
    
}