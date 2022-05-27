#include <iostream>
#define MAX 5
using namespace std;
int main() {
    char nama[] = "Albert Einstein";
    char *pNama = nama;
    cout << "Nama = " << nama << endl;
    cout << "pNama = " << pNama << endl;
    pNama += 7; cout <<"\nSetelah pNama += 7"<<
    endl;
    cout << "Nama = " << nama << endl;
    cout << "pNama = " << pNama << endl;
}