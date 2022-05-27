#include <iostream>
using namespace std;

int main()
{
    /*
        LINEAR SEARCHING
    */
    int nims[5] = {201055001, 201067002, 201058003, 201054002, 20135009};
    int golek;
    cout << "Masukkan Nim yang dicari: "; cin >> golek;

    int index = 0;
    bool ada = false;

    for (index = 0; index <= sizeof(nims); index++)
    {
        if (nims[index] == golek)
        {
            ada = true;
            break;
        }
    }
    if (ada)
    {
        cout << "Data: " << nims[index] << " Ada di index: " << index << endl;
    }
    else
    {
        cout << "data tidak ada!" << endl;
    }


    return 0;
}