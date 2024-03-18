#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a + b << endl;
    }
    else
    {
        int ans = max(a + (a - 1), b + (b - 1));
        cout << ans << endl;
    }
    return 0;
}
