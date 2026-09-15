#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        string hr=s.substr(0,2);
        string ans="";
        if(hr=="00")
        {
            cout<<"12"+s.substr(2,6)+" AM"<<endl;
        }
        else if(hr<"12" && hr>"00")
        {
            cout<<s<<" AM"<<endl;
        }
        else if(hr=="12")
        {
            cout<<s<<" PM"<<endl;
        }
        else
        {
            int h=stoi(hr);
            h-=12;
            string hh=to_string(h);
            if(hh.size()==1)
                hh="0"+hh;
            cout<<hh+s.substr(2,6)<<" PM"<<endl;
        }
    }
}