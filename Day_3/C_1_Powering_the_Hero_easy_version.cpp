#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    vector<int> v(n);
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long ans=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=0)
        {
pq.push(v[i]);
        }
        else 
        {
if(!pq.empty())
{
    ans+=pq.top();
    pq.pop();
}
        }
    }
    cout<<ans<<endl;
  }
  


    return 0;
}