#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i]<= 'z'){
                cout<<s[i];
            }

            else{
               if(s[i] != ')')  st.push(s[i]);
                if(s[i] == ')'){
                    cout<<st.top();
                    st.pop();
                    if(st.top() == '(') st.pop();
                }
               

            }
           
        }
         cout<<'\n';
        
    }
    
    return 0;
}
