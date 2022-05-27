#include <iostream>
using namespace std;

struct Siswa{
    string nama;
    string sekolah;
    unsigned int uangSaku;
};

int main(){
    struct Siswa siswa1,siswa2,siswa3;

    siswa1.nama = "Budi";
    siswa1.sekolah = "SMK Telkom Malang";
    siswa1.uangSaku = 100000;

    siswa2.nama = "Andi";
    siswa2.sekolah = "SMK 1 Yogyakarta";
    siswa2.uangSaku = 200000;

    siswa3.nama = "Siti";
    siswa3.sekolah = "SMK bantul";
    siswa3.uangSaku = 300000;

    cout<<siswa1.nama<<" bersekolah di "<<siswa1.sekolah<<endl;
    cout<<"Uang saku "<<siswa1.nama<<" adalah "<<siswa1.uangSaku<<endl;

    cout<<siswa2.nama<<" bersekolah di "<<siswa2.sekolah<<endl;
    cout<<"Uang saku "<<siswa2.nama<<" adalah "<<siswa2.uangSaku<<endl;

    cout<<siswa3.nama<<" bersekolah di "<<siswa3.sekolah<<endl;
    cout<<"Uang saku "<<siswa3.nama<<" adalah "<<siswa3.uangSaku<<endl;

}