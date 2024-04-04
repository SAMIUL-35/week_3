#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int n;
  cin>>n;
  stack<string> st;
  map<string,int> mp;
  while (n--)
  {
    string s;
    cin>>s;
    st.push(s);
    mp[s]++;

  }
  string k=" ";
 while (!st.empty())
 {
    if(mp[st.top()]>=1)
    {string j=st.top();
        k+=j[j.size()-2];
        k+=j[j.size()-1];
        // cout<<st.top()<<endl;
      mp[st.top()]=0;

    }
    st.pop();
 }
 
cout<<k<<endl;

    return 0;
}