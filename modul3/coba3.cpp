#include <iostream>
using namespace std;

struct mahasiswa{
    string nama;
    string sekolah;
    unsigned int uangSaku;
};

int main(){
    struct mahasiswa mhs;

    cout<<"Masukkan nama :";
    cin>>mhs.nama;

    cout<<"Masukkan sekolah :";
    cin>>mhs.sekolah;

    cout<<"Masukkan uang saku :";
    cin>>mhs.uangSaku;

    cout<<mhs.nama<<" bersekolah di "<<mhs.sekolah<<endl;

}