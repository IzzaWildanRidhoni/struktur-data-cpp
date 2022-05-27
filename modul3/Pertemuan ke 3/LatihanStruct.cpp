#include <iostream>
using namespace std;

struct siswa{
    string nama;
    string nis;
    string kelas;
};

int main(){
    struct siswa budi,thoriq;
    budi.nama = "budi";
    budi.nis = "2604";
    budi.kelas = "XII RPL C";

    thoriq.nama = "Mr Thoriq";
    thoriq.nis = "2605";
    thoriq.kelas ="X TKJ C";

    cout<<"Nama Siswa 1 :"<<budi.nama<<endl;
    cout<<"NIS Siswa 1 :"<<budi.nis<<endl;
    cout<<"Kelas Siswa 1 :"<<budi.kelas<<endl;

    cout<<"Nama siswa 2 :"<<thoriq.nama<<endl;
    cout<<"NIS siswa 2 :"<<thoriq.nis<<endl;
    cout<<"Kelas siswa 2 :"<<thoriq.kelas<<endl;
}