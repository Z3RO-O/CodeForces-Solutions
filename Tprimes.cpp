#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
// cin.tie & cout.tie automatically flushes
// sync disables synchronization between c & c++
// as a side effect it makes execution of code faster
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define testcase while (t--)
#define for0 for (i = 0; i < n; i++)
#define for1 for (i = 1; i <= n; i++)
#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int, int>
#define mii map<int, int>
#define pb push_back
#define eb emplace_back
#define ull unsigned long long
#define ll long long
#define U unsigned int

const int I9 = 1e9;
const int I7 = 1e7;
const int I5 = 1e5;
ll x[I5 + 10];
main
{
    // Start Code
    int n, i, count = 0;
    sf("%d", &n);
    for0
    {
        cin >> x[i];
    }
    for0
    {
        count = 0;
        for (int j = 2; j <= x[i] / 2; j++)
        {
            if (x[i] % j == 0 && count <= 2)
                count++;
            if (count == 2)
                break;
        }
        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}