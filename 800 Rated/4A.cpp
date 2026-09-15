#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<4)
    {
        cout<<"NO"<<endl;
    }
    else if(n%2==0 && n>=4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}