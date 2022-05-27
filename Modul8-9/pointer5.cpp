#include <iostream>
#define MAX 5
using namespace std;
int main() {
    int a[MAX];
    int *pa; 
    pa = a; //atau pa = &a[0]

    for (int i = 0; i < MAX; i++) {
        cout << "Masukkan Nilai "<<i+1<<":";
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < MAX; i++) {
        cout << "Nilai a["<<i<<"]="<<*pa<<endl;
        pa++;
    }
}