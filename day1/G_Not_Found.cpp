#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_set<char> letters;
    for (char c : s)
    {
        letters.insert(c);
    }
    for (char letter = 'a'; letter <= 'z'; ++letter)
    {
        if (letters.find(letter) == letters.end())
        {
            cout << letter << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
