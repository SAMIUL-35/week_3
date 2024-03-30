#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<string> s(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
            mp[s[i]] = true;
        }

        
        string result = "";
        for (int i = 0; i < n; i++) {
            bool ok = false;
            for (int j = 1; j < s[i].length(); j++) {
                string prefix = s[i].substr(0, j);
                string suffix = s[i].substr(j);
                if (mp[prefix] && mp[suffix]) {
                    ok = true;
                    break;
                }
            }
            
            result += (ok ? "1" : "0");
        }

        cout << result << endl;
    }

    return 0;
}
