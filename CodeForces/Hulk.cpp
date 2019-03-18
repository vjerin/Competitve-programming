/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/705/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string hatelove[2] = {"I hate", "I love"};
    string s = "";
    int j =0;
    while(n){
        s+= hatelove[j];
        j++;
        if(j==2) j=0;
        n--;
        if( n != 0)
        s += " that ";
    }
    
    cout<<s<<" it"<<'\n';
    return 0;
}
