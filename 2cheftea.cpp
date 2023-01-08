#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int d = x / y;
        if (x % y == 0)
        {
            if (d == 0)
            {
                cout << z << endl;
            }
            else
            {
                cout << z * d << endl;
            }
        }
        else
        {
            cout << z * (d + 1) << endl;
        }
        return 0;
    }
}
