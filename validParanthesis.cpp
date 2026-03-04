#include<bits/stdc++.h>
using namespace std;

void validParanthesis()
{
    string s = "()[]{}";
    stack<char> st;
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else 
        {
            if(st.empty())
            {
                cout << "false";
                return;
            }
            char top = st.top();
            st.pop();
            if ( (s[i] == ')' && s[i] != top) || (s[i] == '{' && s[i] != top) || (s[i] == '[' != top))
            {
                cout << "false";
                return;
            }
        }
    }
    if (st.empty()) 
    {
        cout << "true";
    }else 
    {
        cout << "false";
    }
}
 
int main() {
    validParanthesis();
  return 0;
}
