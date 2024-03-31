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
        
        vector<int> d; 
       long long total = 0; 

        int change = 0; 
        
        
        for (int i = 0; i < n; i++) {
            int L = i;
            int ri = n - i - 1;
            if (s[i] == 'L') {
                if (ri > L) {
                    total += ri;
                    change++;
                    d.push_back(ri - L);
                } else {
                    total += L;
                }
            } else {
                if (L > ri) {
                    total += L;
                    change++;
                    d.push_back(L - ri);
                } else {
                    total += ri;
                }
            }
        }
        
        
        vector<long long> ans(n+1, total); 
        
       
        sort(d.begin(), d.end(), greater<int>());
        
       
       for (int i = change - 1; i >= 1; i--) {
        // cout<<d.back(); 
    total -= d.back();
    ans[i] = total;
    d.pop_back();
}

        
     
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
