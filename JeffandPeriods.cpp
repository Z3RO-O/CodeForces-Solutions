#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, val;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        a.emplace_back(val);
    }
    sort(a.begin(), a.end());
    return 0;
}