#include <iostream>
using namespace std;

struct barang{
    string kd_barang;
    string nama;
    int harga;
};

int n=0;
struct barang brg[20];

void tambah_barang(){
    cout<<"masukkan kode barang = ";
    cin>>brg[n].kd_barang;
    cout<<"masukkan nama barang = ";
    cin>>brg[n].nama;
    cout<<"masukkan harga barang =";
    cin>>brg[n].harga;
    n++;

    cout<<" data berhasil ditambahkan"<<endl;
    cin.ignore();cin.get();
}

void tampil_barang(){
    cout<<"tampil data barang"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"no  kode_barang  nama_barang  harga"<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i = 0;i < n;i++){
        cout<<i+1<<"  "<<brg[i].kd_barang<<"  "<<brg[i].nama<<"  "<<brg[i].harga<<endl;
    }
    cout<<"--------------------------------"<<endl;
    cin.ignore();cin.get();
}

int main(){
    int pil;
    
    do{
        system("clear");
        cout<<"Program CRUD Barang"<<endl;
        cout<<"1. Tambah Barang"<<endl;
        cout<<"2. Tampil Barang"<<endl;
        cout<<"3. Edit Barang"<<endl;
        cout<<"4. Hapus Barang"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"----------------------------";
        cout<<"Masukkan pilihan anda : ";
        cin>>pil;

        switch(pil){
            case 1:
                tambah_barang();
                break;
            case 2:
                tampil_barang();
                break;
            case 3:
                // edit_barang();
                break;
            case 4:
                // hapus_barang();
                break;
        }
    } while(pil != 0);
}