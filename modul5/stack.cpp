#include <iostream>
#define max 3

using namespace std;

struct buku{
    string judul[max];
    string pengarang[max];
    int tos;
};

struct buku b;

bool isFull(){
    if(b.tos == max-1) return true; 
    else return false;
}
bool isEmpty(){
    if(b.tos == -1) return true; 
    else return false;    
}
void pushBuku(){   
        b.tos++;
        cout<<"Masukkan judul buku : ";
        cin>>b.judul[b.tos];
        cout<<"Masukkan pengarang buku : ";
        cin>>b.pengarang[b.tos];
        cout<<"data berhasil di masukkan"<<endl;
        cin.ignore();cin.get();
}
void popBuku(){
    char ya;
    cout<<"Mengambil data dari stack buku "<<endl;
    cout<<"Berikut adalah buku di posisi teratas stack buku : "<<endl;
    cout<<"Judul buku : "<<b.judul[b.tos]<<endl;
    cout<<"Pengarang buku : "<<b.pengarang[b.tos]<<endl;
    cout<<"Yakin akan diambil buku tsb ? y/t = ";
    cin>>ya;
    if(ya == 'y'){
        b.tos--;
        cout<<"data berhasil diambil"<<endl;
    }else{
        cout<<"data tidak jadi diambil"<<endl;
    }
    cin.ignore();cin.get();
}
void printBuku(){
    cout<<"daftar buku di tumpukan saat ini dan posisinya"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"posisi    judul     Pengarang"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    for(int i=b.tos;i>=0;i--){
        cout<<i+1<<"          "<<b.judul[i]<<"          "<<b.pengarang[i]<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Saat ini ada "<<b.tos<<" buku di tumpukan"<<endl;
    cin.ignore();cin.get();
}

int main(){
    // inisialisasi
    b.tos = -1;
    int pil;
    do
    {
        system("clear");
        cout<<"manipulasi stack buku"<<endl;
        cout<<"1. push data ke stack buku"<<endl;
        cout<<"2. pop data ke stack buku"<<endl;
        cout<<"3. cetak data stack buku"<<endl;
        cout<<"0. selesai"<<endl;
        cout<<"masukkan pilihan : ";
        cin>>pil;

        switch (pil)
        {
        case 1:
            if (isFull() == true){
                cout<<"stack sudah penuh"<<endl; cin.get();cin.ignore();
            }  else pushBuku();
            break;
        case 2:
            if(isEmpty() == true){
               cout<<"stack kosong"<<endl; cin.get();cin.ignore(); 
            } else popBuku();
            break;
        case 3:
            if(isEmpty() == true){
              cout<<"stack kosong"<<endl; cin.get();cin.ignore();  
            } else printBuku();
            break;
        case 4:
            cout<<"terimakasih";
            break;
        default:
            cout<<"anda salah pilih menu"<<endl;
            break;
        }

    } while (pil != 0);
}