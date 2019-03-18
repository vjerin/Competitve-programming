/*
 * Author : Ankit Vashisht
 * Problem : https://www.spoj.com/problems/LASTDIG/
 */

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long

ll POW(ll a, ll b){
    ll res = 1;
    while(b > 0 ){                                                                                                          
        if( b%2 != 0 )
            res = (res * a);//%MOD;
        a = (a*a);//%MOD;
        b /= 2;
        
    }
    return res;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a;// =20;
        ll b;// = 2147483000;
        cin>>a>>b;
        cout<<(POW(a,b) % 10)<<'\n';
    }
    
    return 0;
}
