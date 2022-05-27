#include <iostream>
using namespace std;

int n =0;
int pil;
int maksimal = 10;
string nama[10];
string prodi[10];
int ipk[10];
bool ada;

void tambah_data(){
    cout<<"menambahkan data baru  "<<endl;
    n++;
    cout<<"Masukkan nama baru : ";
    cin>>nama[n];
    cout<<"Masukkan prodinya : ";
    cin>>prodi[n];
    cout<<"Data sudah ditambahkan";
	cin.ignore();cin.get();
}

void cetak_data(){
    cout<<"DAFTAR MAHASISWA DAN IPNYA"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"No   Nama           Prodi          IPK"<<endl;
    cout<<"---------------------------------------------"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" "<<nama[i]<<"    "<<prodi[i]<<"    "<<ipk[i]<<endl;
    }
    cout<<"---------------------------------------------"<<endl;
    cout<<"Saat ini tercatat "<<n<<" mahasiswa";
    cin.ignore();
	cin.get();
}

void isi_ipk(){
	string nama_isi;
	ada = false;
	cout<<"mengisi ip mahasiswa "<<endl;
	cout<<"masukkan nama mahasiswa yang akan disi ipnya : ";cin>>nama_isi;
	for(int i = 1 ; i<=n;i++){
		if(nama[i]==nama_isi){
			ada = true;
			if(ipk[i]!= 0)cout<<"nama "<<nama_isi<<" pernah diisi ipknya";
			else{
				ulang :
				cout<<"masukkan ipk mahasiswa tersebut:";
				cin>>ipk[i];
				if((ipk[i]<=0.0) || (ipk[i] > 4.0)){
					cout<<"data tidak valid, ulangi pengisian"<<endl;
					goto ulang;
				}
			} 
		}
	}
	cin.ignore();cin.get();
}

int main(){
    
    do
    {
		system("clear");
        cout<<"Pengelolaan Data Mahasiswa "<<endl;
        cout<<"1.Input data"<<endl;
        cout<<"2.Cetak data"<<endl;
        cout<<"3.Input IP"<<endl;
        cout<<"0.Selesai"<<endl;
        cout<<"Pilih Menu : ";
        cin>>pil;
        switch (pil)
        {
            case 1: if (n == maksimal) cout<<"kelas sudah penuh"<<endl; else tambah_data();break;
            case 2: if (n == 0 ) {
					cout<<"Data masih kosong"<<endl; 
					cin.ignore();cin.get();
				}else cetak_data();break;
            case 3: if(n == 0){
					cout<<"Belum ada mashasiswa yang terdaftar"<<endl; 
					cin.ignore();cin.get();
				}
				 else isi_ipk();
				 break;
            case 0: cout<<"Terimakasih"<<endl;break;
            default:
				cout<<"anda salah pilih menu"<<endl;
				cin.ignore();cin.get();
				break;
        }
    } while (pil != 0);
}
