#include<bits/stdc++.h>
using namespace std;

bool isPrime(int i){
    if(i==1) return false;
    if(i==2 || i==3)return true;
    else{
        int f =1;
        for(int j = 2; j*j <= i; j++)
            {
                if(i%j == 0) {
                    
                    f=0;

                    break;

                    }
                else f =1;
                
            }
            return f;
    }
    
}

int main(int argc, char const *argv[])
{
    int t; 
    cin>>t;
    while(t--){
        long m,n;
        cin>>m>>n;
        for(int i =m; i<=n; i++){
            if(isPrime(i)) cout<<i<<'\n';
        }
        cout<<'\n';
    }
    return 0;
}
