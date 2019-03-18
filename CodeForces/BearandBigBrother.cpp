/*
 * Author : Ankit Vashisht
 * Problem : https://codeforces.com/problemset/problem/791/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    int c=0;
    while(true){
        a*= 3;
        b*= 2;
        c++;
        if(a>b){
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
