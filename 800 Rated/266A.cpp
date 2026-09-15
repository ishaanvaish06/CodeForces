#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int final=0;
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
            final++;
        }
        else
        {
            count=0;
        }
    }
    cout<<final<<endl;
    return 0;
}