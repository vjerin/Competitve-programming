#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        string a,b;
        cin>>a>>b;
        int count = 0;
        for(int j = 0; j < a.length(); j++)
        {
            for(int k = 0; k < b.length(); k++)
            {
                if(a[j] == b[k])
                {
                    count+=2;
                    b[k] = '0';
                    break;
                }
            }
        }
        cout<<a.length() + b.length() - count<<endl;
    }
}
