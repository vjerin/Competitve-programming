/*
 * Author : Ankit Vashisht
 * Problem : https://www.spoj.com/problems/CANDY/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(true){
        cin>>t;
        if(t == -1) break;
        int arr[t],  total=0,res=0;
        for(int i=0; i<t; i++){
            cin>>arr[i];
            total += arr[i];
        }
        if(total%t != 0) cout<<"-1\n";
        else{
            for(int i=0; i<t; i++){
                if(( (total/t)- arr[i]) >0)
                res += (total/t)- arr[i];
            }
            cout<<res<<'\n';
        }
        
    }
    return 0;
}
