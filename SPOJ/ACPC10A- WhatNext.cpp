/*
 * Author : Ankit Vashisht
 * Problem : https://www.spoj.com/problems/ACPC10A/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1= "AP ",s2 = "GP ";
    float a,b,c;
    while(true){
        cin>>a>>b>>c;
       
        if(a != b && b != c && a != 0 && b!=0 && c!=0){
           
                if( b-a == c-b) cout<<s1<<c+(c-b)<<'\n';
                else cout<<s2<<(c*(b/a))<<'\n';
               
        }
        else break;
    }
    return 0;
}
