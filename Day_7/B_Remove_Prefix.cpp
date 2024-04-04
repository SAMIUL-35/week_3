#include <bits/stdc++.h>

using namespace std;

int minmoves(int n, vector<int> s) {
    unordered_set<int> seen;
    int moves = 0; 
    for (int i = 0; i < n; ++i) {
        if (seen.find(s[i]) != seen.end()) {
            break;
        }
        seen.insert(s[i]);
        moves++;
    }
    return n - moves;
}


int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n; 
        vector<int> s(n);
        for (int i = 0; i < n; ++i) {
            cin >> s[i]; 
        }
        int result = minmoves(n, s);
        cout << result << endl;
    }
    return 0;
}
