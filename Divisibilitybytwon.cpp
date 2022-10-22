#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, val, mul, rem, i, ops;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a;
        mul = 1;
        for (i = 0; i < n; i++)
        {
            cin >> val;
            a.emplace_back(val);
            mul *= a[i];
        }
        rem = mul % int(pow(2, n));
        if (rem == 0)
            cout << 0 << endl;
        else
        {
            ops = 0;
            i = 1;
            while (mul % int(pow(2, n)) != 0 && ops <= n && i < n)
            {
                mul *= (i + 1);
                i += 2;
                ops++;
            }
            if (ops <= n && mul % int(pow(2, n)) == 0)
                cout << ops << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}