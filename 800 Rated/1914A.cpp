#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int count=0;
        unordered_map<char,int> mp;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(char c:s)
        {
            mp[c]++;
        }

        for(auto it:mp)
        {
            int x=it.first-'A';
            x=x+1;
            if(it.second>=x)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}