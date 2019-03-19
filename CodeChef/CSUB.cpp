/*
 * Author : Ankit Vashisht
 * Problem : https://www.codechef.com/problems/CSUB
 * Note : TLE with this approach :(
 */

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int t; 
    cin>>t; 
    while(t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        int c=0;
        int n = s.length();
        if(n == len){
            for(int i = 0; i < n; i++)
        {
            if(s[i]  == '1'){
                c++;
                for(int j = i+1; j < n; j++)
                {
                    if(s[j] == '1') c++;
                }
                
            } 
        }
         cout<<c<<endl;
        }
       
        
    }
    
    return 0;
}
