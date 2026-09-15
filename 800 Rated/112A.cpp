#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    for(int i=0;i<s.size();i++)
    {
        if(tolower(s[i])==tolower(t[i]))
        {
            continue;
        }
        else if(tolower(s[i])<tolower(t[i]))
        {
            cout << -1;
            return 0;
        }
        else
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}