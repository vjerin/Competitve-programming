/*
 * Author : Ankit Vashisht
 * Problem :https://www.spoj.com/problems/FCTRL/
 */



#include <bits/stdc++.h>
using namespace std;
 
int findZeros(unsigned long n){
    int sum =0;
    int i =1;
    
    while(floor(n/pow(5,i))){
        sum += floor(n/pow(5,i));
        i++;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        unsigned long n;
        cin>>n;
        int res = findZeros(n);
        cout<<res<<'\n';
    }
    return 0;
}
