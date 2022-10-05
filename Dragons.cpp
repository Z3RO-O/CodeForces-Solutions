#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int s, n, x[1001], y[1001];
    cin >> s >> n;
    int sum_strength = s, sum_dragon = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(y, y + n);
    if (n != 1&&s>x[])
    {
        for (int i = 0; i < n - 1; i++)
        {
            sum_strength += y[i];
        }
        cout << "YES" << endl;
    }
    else if (n == 1 && x[0] <= s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}