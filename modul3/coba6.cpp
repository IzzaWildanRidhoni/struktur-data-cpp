// crud toko barang
#include <iostream>
using namespace std;

struct barang{
    string kode;
    string nama;
    float harga;
};

int n =0;
struct barang brg[20];

void tambah_barang(){
    string kd;
    char tanya;
    do
    {
        ulang:
        cout<<"masukkan kode barang :"; cin>>kd;
        for (int i = 0; i< n; i++)
        {
            if(brg[i].kode == kd){
                cout<<"kode sudah digunakan ! gunakan kode lain"<<endl;
                goto ulang;
            }
        }
        brg[n].kode =kd;
        cout<<"masukkan nama barang :";cin>>brg[n].nama;
        cout<<"masukkan harga barang :";cin>>brg[n].harga;
        n++;
        cout<<"Apakah akan memasukkan barang yang lain? (y/n) :";
        cin>>tanya;
    } while (tanya=='y');    
    cin.ignore();cin.get();
}


// ceatak data
void cetak_data(){
    cout<<"Laporan kondisi gudang"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"no  kode  nama_barang harga  "<<endl;
    cout<<"-----------------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"  "<<brg[i].kode<<"  "<<brg[i].nama<<"  "<<brg[i].harga<<endl;
    }
    cout<<"------------------------------------------"<<endl;
    cin.ignore();cin.get();
}

void edit_barang(){
    string kd;
    bool ada = false;
    int pos;
    ulang:
    cout<<"masukkan kode barang : ";
    cin>>kd;
    for (int i = 0; i < n; i++)
    {
        if (brg[i].kode == kd)
        {
            ada = true;
            pos = i;
        }
    }
    
    if (!ada)
    {
        cout<<"Mohon maaf kode barang tidak ditemukan ,Ulangi !"<<endl;
        goto ulang;
    }else{
        cout<<endl;
        cout<<"Edit Barang Dengan Kode "<<brg[pos].kode<<endl; 
        cout<<"Nama : ";cin>>brg[pos].nama;
        cout<<"Harga : ";cin>>brg[pos].harga;
        cout<<"data berhasil di edit :)"<<endl;
        cin.ignore();cin.get();
    }
    
}

void hapus_barang(){
    string kd; bool ada = false; int pos; string tanya;
    cout<<endl;
    ulang:
    cout<<"masukkan kode barang : ";
    cin>>kd;
    for (int i = 0; i < n; i++)
    {
        if (brg[i].kode == kd)
        {
            ada = true;
            pos =i;
        }
        
    }


    if (ada)
    {
        cout<<"apakah yakin data "<<brg[pos].nama<<" akan dihapus ? y/t :";cin>>tanya;
        if(tanya =="Y" || tanya =="y"){
            // hapus barang
            brg[pos].kode = brg[pos+1].kode;
            brg[pos].nama = brg[pos+1].nama;
            brg[pos].harga = brg[pos+1].harga;
            n--;
            cout<<"Data berhasil dihapus"<<endl;
        }else{
            cout<<"data gagal dihapus";
        }
        
    }else{
        cout<<"Data tidak ditemukan"<<endl;
        goto ulang;
    }

    cin.ignore();cin.get();
}

int main(){
    int pil;
    do
    {
        system("clear");
        cout<<"Pengeloalaan Gudang pada Toko balapan Jaya"<<endl;
        cout<<"1. Tambah Barang"<<endl;
        cout<<"2. tampilkan Barang"<<endl;
        cout<<"3. Edit Barang"<<endl;
        cout<<"4. Hapus Barang"<<endl;
        cout<<"0. Keluar"<<endl;
        cout<<"Pilihan : ";
        cin>>pil;
        switch (pil)
        {
        case 1:
            tambah_barang();
            break;
        case 2:
            cetak_data();
            break;
        case 3:
            edit_barang();
            break;
        case 4:
            hapus_barang();
            break;
        case 0:
            cout<<"Terima kasih telah menggunakan program ini"<<endl;
            break;
        default:
            cout<<"pilihan tidak ada"<<endl;
            break;
        }
    } while (pil!=0);
}