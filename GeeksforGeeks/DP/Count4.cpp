/*
 * Author : Ankit Vashisht
 * Problem : https://practice.geeksforgeeks.org/problems/count-numbers-containing-4/0
 * Note : Done by bruteforce;
 */                                                                                                                                     

#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000



int Count4(int n){
    if (n < 4) return 0;                                                                                                                                                                                                                                                                                                                                                                                                
    else{
        
            int c =0;
            for(int j = 4; j <= n; j++)
            {    int no = j;
                while(no){
                
                    if ( no % 10== 4) {
                   c++;
                   break;
                   }
                    no /= 10;
            
                }
                
            }
            return c;
      
       
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<Count4(n)<<'\n';
    }
    return 0;
}
