/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/935/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int c =0;
    for(int i = 2; i <= n/2; i++)
    {
        if((n-i) % i == 0) c++;
    }
    cout<<c+1<<"\n";
    
    return 0;
}
