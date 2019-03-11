#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    while(true){
        int n; 
        cin>>n;
        if(n != 42) cout<<n<<'\n';
        else break;
    }
    return 0;
}
