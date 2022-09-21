#include <iostream>
using namespace std;

int main()
{
    int n, a[100], sum_f = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum_f += a[i];
    }
    if (sum_f % 2 == 0)
    {
        if ((n + 1) % 2 != 0)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else
    {
        if ((n + 1) % 2 != 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}