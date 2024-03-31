#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
    
        vector<vector<int>> v(n, vector<int>(n - 1));


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> v[i][j];
            }
        }

        vector<int> f(101, 0);
        int first = 0, k = 0;

        for (int i = 0; i < n; i++) {
            int val = v[i][0];
            f[val]++;
            if (f[val] > 1) {
                first = val;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (v[i][0] != first) {
                
                v[i].resize(n);
                
                v[i].insert(v[i].begin(), first);
                k = i;
                break;
            }
        }

        for (int j = 0; j < n; j++) {
            cout << v[k][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
