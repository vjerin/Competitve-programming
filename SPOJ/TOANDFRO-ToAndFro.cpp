/*
 * Author : Ankit Vashisht
 * Problem : https://www.spoj.com/problems/TOANDFRO/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(true){
        cin>>n;
        if(n !=0){
            string s;
            cin>>s;
            
             
            for(int  i = 0; i < n; i++)
            {
                int j=i;
                int f =0; 
                while(j < s.length()){
                    cout<<s[j];
                    if( f % 2 ==0 ) {
                        f =1;
                        j+=((2*n)-1)-(2*i);
                        }
                    else {
                        f =0;
                        j+= 1+(2*i) ;
                        }
                }
                
            }
            cout<<'\n';
             
        }
        else break;
    }
    return 0;
}
