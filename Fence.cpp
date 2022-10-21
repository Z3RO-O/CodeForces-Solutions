#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll k, n, sum = 0, minm = INT64_MAX, index;
int main()
{
    int val;
    cin >> n >> k;
    vector<int> h;
    for (ll i = 0; i < n; i++)
    {
        cin >> val;
        h.emplace_back(val);
    }
    for (ll j = 0; j < n - k; j++)
    {
        sum = 0;
        for (int i = j; i < j + k; i++)
        {
            sum += h[i];
        }
        if (sum < minm)
        {
            minm = sum;
            index = j;
        }
    }
    cout << index+1;
    return 0;
}