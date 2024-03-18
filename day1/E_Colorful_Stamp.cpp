#include <iostream>
#include <string>
using namespace std;

string canMakePicture(int n, string s) {
    // Count the number of distinct colors in the picture
    int distinct_colors = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1]) {
            distinct_colors++;
            i++; // Skip the next cell since it's part of the stamp
        }
    }
    
    // If there are only two distinct colors or if the colors alternate, it's possible
    if (distinct_colors <= 2 || (s[0] != s[1] && s[n - 2] != s[n - 1]))
        return "YES";
    else
        return "NO";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << canMakePicture(n, s) << endl;
    }
    
    return 0;
}
