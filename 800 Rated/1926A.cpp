#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int arr[2]={0,0};
        for(char c:s)
        {
            if(c=='A') arr[0]++;
            else arr[1]++;
        }

        if(arr[0]>arr[1]) cout<<"A"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}