#include <iostream>
using namespace std;


int main()
{
    string nims[5] = {"201055001", "210552001", "19405332", "1834232", "173234123"};
    string golek;
    string hasil;
    int index;
    bool ada = false;

    cout << "Masukkan Nim yang anda cari: ";
    cin >> golek;

    for (index = 0; index <= sizeof(nims); index++)
    {
        if (nims[index] == golek)
        {
            hasil = nims[index];
            ada = true;
            break;
        }
    }

    if (ada)
    {
        cout << "Data ditemukan!" << endl;
        cout << "Nim: " << hasil;
        cout << "Ada di index: " << index << endl;
    } else {
        cout << "Data tidak ada!" << endl;
    }
    
    cout << endl;
    cout << "Terima kasih :)" << endl;

    return 0;
}