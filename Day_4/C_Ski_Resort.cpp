#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long cnt = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] <= k) {
                cnt++;
            } else {
                if (cnt >= m) {
                    ans += ((cnt - m + 1) * (cnt - m + 2)) / 2;
                }
                cnt = 0;
            }
        }
        if (cnt >= m) {
            ans += ((cnt - m + 1) * (cnt - m + 2)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}
