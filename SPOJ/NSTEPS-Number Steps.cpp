/*
 * Author : Ankit Vashisht
 * Problem :https://www.spoj.com/problems/FCTRL/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(((x-y) == 0) || (x-y) == 2){
             if(x %2 ==0) cout<<(x+y)<<'\n';
             else cout<<(x+y)-1<<'\n';
             
        }
        else 
        {
            cout<<"No Number"<<endl;
        }
        
    }
    return 0;
}