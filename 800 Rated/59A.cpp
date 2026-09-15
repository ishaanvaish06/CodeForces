#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int up=0;
    int low=0;
    for(char x:s)
    {
        if(isupper(x))
        {
            up++;
        }
        else if(islower(x))
        {
            low++;
        }
    }

    if(up>low)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    cout<<s<<endl;
    return 0;
}