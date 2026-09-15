#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>5)
    {
        count++;
        n-=5;
    }

    if(n>0 && n<=5)
    {
        count++;
    }
    cout<<count<<endl;
}