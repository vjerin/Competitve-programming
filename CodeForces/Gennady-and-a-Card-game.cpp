/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/1097/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int f=0;
    for(int i = 0; i < 5; i++)
    {
        string s2;
        cin>>s2;
        if(s[0] == s2[0] || s[0] == s2[1] || s[1] == s2[1] || s[1] ==s2[0]){
            f=1;
        }
    }
    if(f==0) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    
    return 0;
}
