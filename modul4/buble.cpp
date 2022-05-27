#include <iostream>
using namespace std;

int main()
{
    int nims[] = {60, 30, 92, 100, 1};
    int index, j_index, temp, pass = 0;
    int length = sizeof(nims) / sizeof(*nims);

    cout << "Sebelum diurutkan:" << endl;
    for (index = 0;  index < length; index++)
    {
        cout << nims[index] << " ";
    }

    for (index = 0; index < length ; index++)
    {
        for (j_index = index + 1; j_index < length; j_index++)
        {
            if (nims[j_index] < nims[index])
            {
                temp = nims[index];
                nims[index] = nims[j_index];
                nims[j_index] = temp;
            }
        }
        pass++;
    }

    cout << endl;
    cout << "Telah diurutkan: " << endl;
    for (index = 0; index < length; index++)
    {
        cout << nims[index] << " ";
    }
    
    

    return 0;
}