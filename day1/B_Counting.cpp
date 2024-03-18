#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=b-a+1;
    ans=max(0,ans);
    cout<<ans<<endl;
}