/*
 * Author : Ankit Vashisht
 * Problem :
 */

#include <bits/stdc++.h>
using namespace std;
//#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
const int N=1e5+5;

map<ll , ll> dp;


ll countCoins(ll n){
      
        if (n == 1)
            return 1;
        if (n == 0)
            return 0;

        if(dp[n] != 0 ) return dp[n];

        ll inter = countCoins(n / 2) + countCoins(n / 3) + countCoins(n / 4);
        if (inter < n)
        {   
            dp[n] = n;
            
        }
        else
        {   
            dp[n] = inter; 
            
        }
        return dp[n];
    
}


int32_t main(){

    ll n;
    while (cin>>n)
    {   
        cout << countCoins(n) << endl;
    }

    return 0;
}
