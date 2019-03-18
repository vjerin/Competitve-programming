/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/977/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,k;
    cin>>n>>k;
    while(k--){
        if(n%10 != 0) n--;
        else n = n/10;    
    }
    cout<<n<<'\n';
    return 0;
}
