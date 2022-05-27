#include <iostream>
#define max 3

using namespace std;

struct mahasiswa{
    string nim[max];
    string nama[max];
    int rear;int front;
};

struct mahasiswa b;

bool isFull(){
    if(b.rear == max-1) return true; 
    else return false;
}
bool isEmpty(){
    if(b.rear == -1) return true; 
    else return false;    
}
void queue(){   
        b.rear++;
        cout<<"Masukkan nim mahasiswa : ";
        cin>>b.nim[b.rear];
        cout<<"Masukkan nama mahasiswa : ";
        cin>>b.nama[b.rear];
        cout<<"data berhasil di masukkan"<<endl;
        cin.ignore();cin.get();
}
void dequeue(){
    cout<<endl;
    cout<<"antrian  dengan nim  "<<b.nim[b.front]<<", nama : "<<b.nama[b.front]<<"telah keluar"<<endl;
    for(int i=b.front;i<=b.rear;i++){
        b.nim[i] = b.nim[i+1];
        b.nama[i] = b.nama[i+1];
    }
    b.rear--;
    cin.ignore();cin.get();
}
void printmahasiswa(){
    cout<<" Daftar antrian mahasiswa "<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"posisi    nim     nama"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    for(int i=0;i<=b.rear;i++){
        cout<<i+1<<"          "<<b.nim[i]<<"          "<<b.nama[i]<<endl;
    }
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Saat ini ada "<<b.rear<<" mahasiswa di antrian"<<endl;
    cin.ignore();cin.get();
}

int main(){
    // inisialisasi
    b.rear = -1;
    b.front = 0;
    int pil;
    do
    {
        system("clear");
        cout<<"manipulasi antrian mahasiswa"<<endl;
        cout<<"1. queue  mahasiswa"<<endl;
        cout<<"2. dequeue mahasiswa"<<endl;
        cout<<"3. cetak antrian"<<endl;
        cout<<"0. selesai"<<endl;
        cout<<"masukkan pilihan : ";
        cin>>pil;

        switch (pil)
        {
        case 1:
            if (isFull() == true){
                cout<<"antrian sudah penuh"<<endl; cin.get();cin.ignore();
            }  else queue();
            break;
        case 2:
            if(isEmpty() == true){
               cout<<"antrian kosong"<<endl; cin.get();cin.ignore(); 
            } else dequeue();
            break;
        case 3:
            if(isEmpty() == true){
              cout<<"antrian kosong"<<endl; cin.get();cin.ignore();  
            } else printmahasiswa();
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