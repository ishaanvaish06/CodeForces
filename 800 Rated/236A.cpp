#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count=0;
    unordered_map<char,int> mp;
    for(char c : s){
        if(mp.find(c) == mp.end()){
            mp[c] = 1;
            count++;
        }
    }
    if(count % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}