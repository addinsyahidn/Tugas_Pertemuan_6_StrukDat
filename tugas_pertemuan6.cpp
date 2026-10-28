#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data;

    cout << "Masukkan string : ";
    getline(cin, data);
    int n = data.size();

    for (int i = 1; i < n; i++)
    {
        int key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;

        cout << "Putaran " << i << " : ";
        for (int k = 0; k < n; k++)
        {
            cout << data[k] << " ";
        }
        cout << endl;
    }

    return 0;
}