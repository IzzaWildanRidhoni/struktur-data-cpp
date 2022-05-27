#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string nim;
    string alamat;
};

struct mahasiswa mhs[20];

int main(){
    cout<<"Masukkan data mahasiswa ke 1 :";
    cin>>mhs[0].nama;
    cout<<"Masukkan nim mahasiswa ke 1 :";
    cin>>mhs[0].nim;
    cout<<"Masukkan alamat mahasiswa ke 1 :";
    cin>>mhs[0].alamat;

    cout<<"Masukkan data mahasiswa ke 2 :";
    cin>>mhs[1].nama;
    cout<<"masukkan nim mahasiswa ke 2 :";
    cin>>mhs[1].nim;
    cout<<"Masukkan alamat mahasiswa ke 2 :";
    cin>>mhs[1].alamat;

    cout<<"data mahasiswa 1 : nama :"<<mhs[0].nama<<" nim : "<<mhs[0].nim<<" alamat : "<<mhs[0].alamat<<endl;
    cout<<"data mahasiswa 2 : nama :"<<mhs[1].nama<<" nim : "<<mhs[1].nim<<" alamat : "<<mhs[1].alamat<<endl;
    
}