#include <bits/stdc++.h>
using namespace std;
 
bool isValidIndex(int row, int col, int n, int m) {
    return row >= 0 && row < n && col >= 0 && col < m;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int now = 0;
                int ci = i, cj = j;
                while(isValidIndex(ci, cj, n, m)) {
                    now += a[ci][cj];
                    ci--;
                    cj--;
                }
                ci = i, cj = j;
                while(isValidIndex(ci, cj, n, m)) {
                    now += a[ci][cj];
                    ci++;
                    cj--;
                }
                ci = i, cj = j;
                while(isValidIndex(ci, cj, n, m)) {
                    now += a[ci][cj];
                    ci--;
                    cj++;
                }
                ci = i, cj = j;
                while(isValidIndex(ci, cj, n, m)) {
                    now += a[ci][cj];
                    ci++;
                    cj++;
                }
                now -= a[i][j] * 3;
                mx = max(mx, now);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
