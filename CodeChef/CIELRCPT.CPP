/*
 * Author : Ankit Vashisht
 * Problem : https://www.codechef.com/problems/CIELRCPT
 */

#include <bits/stdc++.h>
using namespace std;
//#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
//#define int long long
const int N=1e5+5;

int32_t main(){
    // IOS;
    int t;
    int arr[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    cin>>t;
    while(t--){
        int p ;
        cin>>p;
        int c=0;
        for(int i = 11; i >=0; i--)
        {
           c += p/arr[i];
           p %= arr[i]; 
        }
        
        cout<<c<<endl;

    }
    return 0;
}
