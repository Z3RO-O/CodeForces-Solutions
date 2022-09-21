#include <iostream>
const int size = 1e5;
using namespace std;

int main()
{
    int n, a[size], start, end;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    start = end = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            start = i + 1;
        }
        else if (a[i + 1] > a[i])
        {
            end = i;
        }
    }
    if (start > end)
    {
        cout << "yes\n";
        cout << a[start] << a[end];
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}