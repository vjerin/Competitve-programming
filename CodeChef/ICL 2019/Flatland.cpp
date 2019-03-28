/*
 * Author : Ankit Vashisht
 * Problem :
 */

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
const int N=1e5+5;

int32_t main(){
    IOS;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        int sqrt_n = ceil(sqrt(n));
        for(int i = sqrt_n; i >=1; i--)
        {
            if(n >= i*i){
                n -= i*i;
                c++;
            }
        }
        if(n==1) c++;
        if(n==2) c += 2;
    
        cout<<c<<endl;
        
    }

    return 0;
}
