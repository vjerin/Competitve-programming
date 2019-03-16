/*
 * Author : Ankit Vashisht
 * Problem :https://www.spoj.com/problems/SAMER08F/
 */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{       
    int n;
    while(true){
        cin>>n;
        if(n!=0)
        cout<< (n*(n+1)*(2*n +1)/6)<<'\n';
        else break;
    }
    return 0;
}
