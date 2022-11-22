#include <bits/stdc++.h>
using namespace std;

#define main int main()
#define sf scanf
#define pf printf
#define T     \
    cin >> t; \
    while (t--)
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
/* direction array */
/*int dx4[] = {1, -1, 0, 0};
int dy4[] = {0, 0, 1, -1};
int dx6[] = {0, 0, 1, -1, 0, 0};
int dy6[] = {1, -1, 0, 0, 0, 0};
int dz6[] = {0, 0, 0, 0, 1, -1};
int dx8[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dy8[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dkx8[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int dky8[] = {2, 2, -2, -2, 1, -1, 1, -1};*/
/* direction array */

// Toh Chaliye Shuru karte...
main
{
    int t, n, i, j;
    T
    {
        cin >> n;
        vi a(n), b(n);
        for0
        {
            cin >> a[i];
        }
        b = a;
        sort(b.begin(), b.end());
        if (a == b || n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int pos = 0, l, r, max1 = -1 * I9, max2 = -1 * I9;
        for (i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
                l = i, max1 = a[i];
        }
        for (i = l; i < n; i++)
        {
            if (a[i] < a[i + 1])
            {
                r = i, max2 = a[i];
                pos = 1;
                break;
            }
        }

        if (pos == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}