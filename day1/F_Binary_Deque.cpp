#include <iostream>
#include <vector>
using namespace std;

int minOperations(int n, int s, vector<int>& arr) {
    int sum = 0, minOps = n + 1;
    int left = 0, right = 0;
    
    while (right < n) {
        sum += arr[right];
        
        while (sum > s) {
            sum -= arr[left];
            left++;
        }
        
        if (sum == s) {
            int ops = right - left + 1;
            minOps = min(minOps, ops);
        }
        
        right++;
    }
    
    return minOps == n + 1 ? -1 : minOps;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << minOperations(n, s, arr) << endl;
    }
    
    return 0;
}
