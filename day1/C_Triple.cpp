#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        int ans = -1;
        for (auto it : freq)
        {
            if (it.second >= 3)
            {
                ans = it.first;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
