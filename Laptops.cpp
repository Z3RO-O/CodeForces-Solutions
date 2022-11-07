#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define testcase while (t--)
#define for0 for (i = 0; i < n; i++)
#define for1 for (j = 1; j <= n; j++)
#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define ms map<string, int>
#define pb push_back
#define eb emplace_back
#define ull unsigned long long
#define ll long long
#define U unsigned int

const int I9 = 1e9;
const int I7 = 1e7;
const int I5 = 1e5;

main
{
    int n, val, a[I5 + 10], b[I5 + 10], i, price, quality, count = 0;
    cin >> n;
    mii m;
    for0
    {
        cin >> a[i] >> b[i];
        m[a[i]] = b[i];
    }
    auto it1 = m.begin();
    price = (*it1).first;
    quality = (*it1).second;
    for (auto it : m)
    {
        if (it.second < quality)
        {
            count++;
            break;
        }
    }
    if (count > 0)
    {
        cout << "Happy Alex" << endl;
    }
    else
    {
        cout << "Poor Alex" << endl;
    }
    return 0;
}