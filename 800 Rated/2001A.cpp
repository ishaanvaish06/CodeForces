#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int> mp;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        int maxima=0;
        for(auto it:mp)
        {
            maxima=max(maxima,it.second);
        }
        cout<<n-maxima<<endl;
    }
}