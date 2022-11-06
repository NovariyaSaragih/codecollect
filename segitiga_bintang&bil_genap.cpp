#include <iostream>
using namespace std;
int main()
{
    int bilangan, x, y;
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    for (x = 1; x <= bilangan; x++)
    {
        for (y = 1; y <= x; y++)
        {
            if (y % 2 == 0)
            {
                cout << y;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}
