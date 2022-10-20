#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, val;
    map<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        m[val]++;
    }
    auto it = m.end();
    it--;
    if ((n % 2 == 0) && (*it).second <= n / 2)
        cout << "YES";
    else if ((*it).second <= n / 2 + 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}