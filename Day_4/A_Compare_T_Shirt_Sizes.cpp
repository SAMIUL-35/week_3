#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string a,b;
      cin>>a>>b;
      char s=a[a.size()-1];
      char k=b[b.size()-1];
      int cnt1=0,cnt2=0;
      for(int i=0;i<a.size();i++)
      {
          if(a[i]=='X')cnt1++;
      }
      for(int i=0;i<b.size();i++)
      {
          if(b[i]=='X')cnt2++;
      }
   
     if((s-'A')<(k-'A'))
     {
         cout<<">"<<endl;
     }
    else if((s-'A')>(k-'A'))
     {
          cout<<"<"<<endl;
     }
     else 
     {
       if(s=='S'  )
       {
           if(cnt1>cnt2) cout<<"<"<<endl;
       else if(cnt1<cnt2) cout<<">"<<endl;
       else cout<<"="<<endl;
       }
       else 
       {
         if(cnt1>cnt2) cout<<">"<<endl;
       else if(cnt1<cnt2) cout<<"<"<<endl;
       else cout<<"="<<endl;  
       }
     }
    }
 
    return 0;
}