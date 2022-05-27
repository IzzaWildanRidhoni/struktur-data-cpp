#include <iostream>
using namespace std;

int main()
{
    int x[3][3] = {
        // Tahun
        {2012, 2013, 2014}, 
        //Informatika
        {4, 5, 6},
        // Kimia
        {3, 2, 1}
    }; // insialisasi data

    string s[3] = {"Tahun", "Informatika", "Kimia"};


    cout << "Jumlah Mahasiswa" << endl;
    int i, j;
    for (i = 0; i < 3; i++)
    { // for yang pertama
            cout<< s[i] << ": ";
        for (j = 0; j < 3; j++)
        {              // for yang kedua
            printf("%d ", x[i][j]); // mencetak isi array
        }
        printf("\n"); // mencetak enter pada baris terakhir.
    }
}