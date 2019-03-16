/*
 * Author : Ankit Vashisht
 * Problem :https://www.spoj.com/problems/ADDREV/
 */


#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    
    while(n--){
        int res,resres =0,r=0;
        string a,b;
        cin>>a>>b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        res = stoi(a)+stoi(b);
        while(res){
            r = res%10;
            resres = resres*10+r;
            res = res/10;
        }
        cout<<resres<<'\n';
    }
    return 0;
}
