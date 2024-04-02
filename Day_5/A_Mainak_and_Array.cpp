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
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    
    int ans=INT_MIN;
    for(int i = 0; i < n; i++){
		ans = max(ans, v[(i - 1 + n) % n] - v[i]);
	}

	for(int i = 1; i < n; i++){
		ans = max(ans, v[i] - v[0]);
	}

	for(int i = 0; i < n - 1; i++){
		ans = max(ans, v[n - 1] - v[i]);
	}
cout<<ans<<endl;
  }
  


    return 0;
}