#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a[100], b[100], v, pos = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    v = a[n - 1];
    for (int i = 0; i < m; i++)
    {
        if (b[i] <= v)
        {
            cout << -1;
            pos = 0;
            break;
        }
    }
    if (pos == 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (2 * a[i] <= v)
            {
                cout << v;
                pos = 1;
                break;
            }
            else
                pos = 0;
        }
        if (pos == 0)
            
            cout << -1;
    }
    return 0;
}