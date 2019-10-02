/*
Alice got a number written in seven segment format where each segment was creatted used a matchstick.

Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.

Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.

*/

//SOLUTION

#include<bits/stdc++.h>
using namespace std;

int num[]={6,2,5,5,4,5,6,3,7,6};

int zero='0';
void findmax(int cost)
{   
    int x;
    if(cost%2==0)
    {
        x=cost/2;
    }
    
    else
    {
        x=(cost-1)/2-1;
        cout<<"7";
    }
    for(int i=0;i<x;i++)
    cout<<"1";
    
    cout<<"\n";
    
   
}

int findcost(string s)
{   
    int cost=0;
    int ch;
    for(int i=0;i<s.size();i++)
    {
       ch=s[i];
       cost+=num[ch-zero];
       
    }
    
    return cost;
}

int main()
{
   int t;
   string m;
   cin>>t;
   while(t--)
   {
       cin>>m;
       findmax(findcost(m));
       
   }
   
   
    return 0;
}
