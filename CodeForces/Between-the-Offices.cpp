/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/867/A
 */

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N=1e5+5;

int32_t main(){
    IOS;
    int n; 
    cin>>n;
    char arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c=0;
    for(int i = 0; i < n-1; i++)
    {
        
        if(arr[i] == 'S' && arr[i+1] == 'F') c++;
        else if (arr[i]=='F' && arr[i+1] == 'S') c--;
    }
    if(c>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    return 0;
}
