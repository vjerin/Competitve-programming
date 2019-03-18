/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemsets/acmsguru/problem/99999/123
 */

#include <bits/stdc++.h>
using namespace std;
int s =0;
int Fibo(int n){
    
    if(n==1 || n==0) return 1;
    int Fn = Fibo(n-1)+Fibo(n-2);
    s += Fn;
    
    return s;
}

int main()
{
    int n;
    int sum =0;
    cin>>n;
    cout<<Fibo(n-1)<<'\n';
    return 0;
}
