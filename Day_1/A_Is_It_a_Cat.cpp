#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
      
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
        auto it = unique(s.begin(), s.end());
        s.erase(it, s.end());

        if(s=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
