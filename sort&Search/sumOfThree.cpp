#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n, x;
    cin >> n >> x;

    vector<ll> num(n); 
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<pair<ll, ll>> vpos(n);
    for (int i = 0; i < n; i++) {
        vpos[i] = {num[i], i + 1};
    }

    sort(vpos.begin(), vpos.end());  
    for (int i = 0; i < n; i++) {
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            ll sum = vpos[i].first + vpos[j].first + vpos[k].first;
            if (sum == x) {
                cout << vpos[i].second << " " << vpos[j].second << " " << vpos[k].second << endl;
                return 0;
            } else if (sum < x) {
                j++;
            } else {
                k--;
            }
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
