#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node *head = NULL;

int main(){
    // buat simpul
    node *satu; satu = new node; 
    node *dua; dua = new node; 
    node *tiga; tiga = new node;

    // isi data simpul
    satu->data = 3; 
    dua->data = 5; 
    tiga->data = 7; 

    // isi alamat data simpul selanjutnya
    satu->next = dua; 
    dua->next = tiga;
    tiga->next = NULL;
    head = satu;

    // tampilkan simpul datanya 
    node *temp = head;
    while( temp!=NULL ){
        cout<< temp->data<<" ";
        temp = temp->next;
    } 
    cout<<"\n"; 
    return 0;
}