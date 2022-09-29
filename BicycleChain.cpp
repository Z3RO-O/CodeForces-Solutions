#include <iostream>
using namespace std;

int main()
{
    int n, m, a[50], b[50], max = 0, min = 10001, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (min > a[i])
        {
            min = a[i];
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        if (max < b[i])
        {
            max = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((max / min) == (b[j] / a[i]) && b[j] % a[i] == 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}