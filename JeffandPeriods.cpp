#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n, val, d = 0, count = 0, valid;
    cin >> n;
    map<int, vector<int>> m;
    map<int, int> print;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        m[val].emplace_back(i);
    }
    for (auto it : m)
    {
        if (it.second.size() > 1)
        {
            d = it.second[1] - it.second[0];
            valid = 0, count = 0;
            for (int i = 0; i < it.second.size() - 1; i++)
            {
                if ((it.second[i + 1] - it.second[i]) != d)
                {
                    break;
                }
                else
                {
                    valid++;
                }
            }
            if ((valid + 1) == it.second.size())
            {
                count++;
                print[it.first] = d;
            }
        }
        else
        {
            print[it.first] = 0;
        }
    }
    if (count > 0)
    {
        cout << count << endl;
        for (auto it : print)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}