/*
 * Author : Ankit Vashisht
 * Problem : https://www.spoj.com/problems/CPTTRN1/
 */

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N=1e5+5;

int32_t main(){
    IOS;
    int t; 
    cin>>t;
    while(t--){
        int l,col;
        cin>>l>>col;
        char c;
        for(int i = 0; i < l; i++)
        {   if(i%2==0) c='*';
            else c='.';
            for(int j = 0; j < col; j++)
            {
                if(j==0) cout<<c;
                else{
                    if(c == '*') c='.';
                    else c='*';
                    cout<<c;
                }
                    
            }
            cout<<endl;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
