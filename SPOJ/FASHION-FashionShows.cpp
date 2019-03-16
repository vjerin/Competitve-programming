/*
 * Author : Ankit Vashisht
 * Problem : https://www.spoj.com/problems/FASHION/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum =0;
        int M[n], F[n];
        for(int i=0; i<n; i++) cin>>M[i];
        for(int i=0; i<n; i++) cin>>F[i];
        sort(M, M+n);
        sort(F, F+n);
        for(int i=0; i<n; i++) sum += M[i]*F[i];
        cout<<sum<<"\n";
    }    
    return 0;
}
