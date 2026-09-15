#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        int a[1]={0};
        string s,r;
        cin>>s>>r;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && r[i]=='0')
            {
                count++;
                a[0]++;
            }
            else if(s[i]=='0' && r[i]=='1')
            {
                if(a[0]>0)
                {
                    a[0]--;
                }
                else
                {
                    count++;
                }
            }

        }
        cout<<count<<endl;
    }

}