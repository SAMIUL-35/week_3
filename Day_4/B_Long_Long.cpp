#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        long long sum = 0;
        long long cnt = 0;
        bool ok=false;
        for (long long i = 0; i < n; i++) {
            sum+=abs(v[i]);
            if(ok== false && v[i]<0)
            {
                cnt++;
                ok=true;
            }
            if(v[i]>0) ok=false;
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}