#include <iostream>
using namespace std;

struct Siswa{
    string nama;
    string sekolah;
    unsigned int uangSaku;
};

int main(){
    struct Siswa siswa1;
    siswa1.nama = "Budi";
    siswa1.sekolah = "SMK Telkom Malang";
    siswa1.uangSaku = 100000;

    cout<<siswa1.nama<<" bersekolah di "<<siswa1.sekolah<<endl;
    cout<<"Uang saku "<<siswa1.nama<<" adalah "<<siswa1.uangSaku<<endl;
}