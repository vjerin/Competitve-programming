/*
 * Author : Ankit Vashisht
 * Problem :https://www.spoj.com/problems/FCTRL2/
 */
// Not Working above n>25 ! :(


#include <bits/stdc++.h>
using namespace std;
#define MAX 500
unsigned long long temp[MAX] = {0};

long long Factorial(int n){
    
    if(n ==1 || n==0 ) return 1;
    else{
        if(temp[n] != 0) {
            //cout<<"temp : "<<temp[n]<<endl;
            return temp[n];
            }
        else{
            temp[n] = (n*Factorial(n-1));
            return temp[n];
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int t,n;
    
    cin>>t;
    while(t--){
        cin>>n;
        cout<<Factorial(n)<<'\n';
    }
    return 0;
}
