#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, bool> w;
    for (int i = 0; i < n; i++)
    {
        w[v[i]] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (w.find(i) == w.end())
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
