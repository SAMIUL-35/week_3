#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int, pair<int, int>> mp;

        
        for (int i = 0; i < n; i++) {
            int u;
            cin >> u;
            if (!mp.count(u)) {
                mp[u] = {i, i};
            } else {
                mp[u].second = i;
            }
        }

        
        while (m--) {
            int l, r;
            cin >> l >> r;

            
            if (mp.count(l) && mp.count(r)) {
                
                if (mp[l].first < mp[r].second) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl; 
            }
        }
    }

    return 0;
}
