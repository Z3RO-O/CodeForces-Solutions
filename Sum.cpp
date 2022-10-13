#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, a[3];
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 3);
        if ((a[0] + a[1]) == a[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}