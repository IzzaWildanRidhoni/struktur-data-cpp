#include <iostream>
using namespace std;
int main() {
    int x, y;
    int *px;
    x = 89;
    y = x;
    px = &x;
    
    cout<<"Nilai y = " << y << endl;
    cout<<"Alamat x = " << &x << endl;
    cout<<"Alamat px = " << px << endl;
    cout<<"Nilai px = " << *px << endl;

    x = 108;
    cout << "\nNilai x = " << x << endl;
    cout << "Nilai y = " << y << endl;
    cout << "Alamat x = " << &x << endl;
    cout << "Alamat px = " << px << endl;
    cout << "Nilai px = " << *px << endl;

    *px = 123;
    cout << "\nNilai x = " << x << endl;
    cout << "Nilai y = " << y << endl;
    cout << "Alamat x = " << &x << endl;
    cout << "Alamat px = " << px << endl;
    cout << "Nilai px = " << *px << endl;
}