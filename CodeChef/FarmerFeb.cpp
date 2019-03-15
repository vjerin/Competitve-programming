//  https://www.codechef.com/submit/POTATOES

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x == 2 || x == 3) return true;
    for(int i = 2; i*i <= x; i++)
    {
        if(x % i == 0 ) return false;
        
    }
    return true;
    
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    int x,y;
    while(t--){
        cin>>x>>y;
        int i=1;
        while(true){
            if(isPrime(x+y+i)){
                cout<<i<<'\n';
                break;
            }
            else i++;
        }
        
        
    }
    
    return 0;
}
