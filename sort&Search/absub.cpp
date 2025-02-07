#include <bits/stdc++.h>
using namespace std;
void solve() {
    string original, target;
    cin >> original >> target;

    int targetIdx = target.size() - 1;
    for (int i = original.size() - 1; targetIdx >= 0 && i >= 0; i--) {
        if (original[i] == target[targetIdx]) {
            original[i] = '*';  
            targetIdx--;
        }
    }

    if (targetIdx >= 0) {
        cout << -1 << endl;  
    } else {
        long long deletionCost = 0, weight = 1;
        for (char c : original) {
            if (c != '*') {
                deletionCost += weight;
            } else {
                weight++; 
            }
        }
        cout << deletionCost << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
