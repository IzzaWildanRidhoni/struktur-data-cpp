// struct of array

#include <iostream>
using namespace std;

struct orang{
    char nama[30];
    short umur;
};

orang saya[5];

int main(){

    for (int i = 0; i <=4; i++)
    {
        cout<<"Nama : ";cin>>saya[i].nama;
        cout<<"Umur : ";cin>>saya[i].umur;
    }
    for (int  x = 0; x <=4; x++)
    {
        cout<<"Data Ke ["<<x<<"] bernama "<<saya[x].nama<<" dan berumur "<<saya[x].umur<<endl;
    }
}