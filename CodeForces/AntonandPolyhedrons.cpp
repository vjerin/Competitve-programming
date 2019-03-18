/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/785/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string , int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;
    
    int c=0;
    while(n--){
        
        string s;
        cin>>s;
        for(auto itr = m.begin(); itr != m.end(); itr++){
                if(itr->first == s){
                c += itr->second;
            }
        }
        
    }
    cout<<c<<'\n';
    
    return 0;
}
