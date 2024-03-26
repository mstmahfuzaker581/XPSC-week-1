#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    long long total_sum = 0;
    int min_odd = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
        total_sum += num[i];
        if (num[i] % 2 != 0 && num[i] < min_odd)
        {
            min_odd = num[i];
        }
    }
    if (total_sum % 2 == 0)
    {
        cout << total_sum << endl;
    }
    else
    {
        cout << total_sum - min_odd << endl;
    }

    return 0;
}
