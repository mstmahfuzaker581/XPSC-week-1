#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int pre = 0;
        int current = 1;
        for (int i = 0; i < n; ++i) {
            if (a[i] > current) {
                pre += a[i] - current; 
                current = a[i];
            }
            current++; 
        }
        
        cout << pre << endl;
    }
    
    return 0;
}
