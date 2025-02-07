#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL); 

    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    unordered_map<ll, ll> mp;  

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        int complement = x - v[i];

        if (mp.count(complement)) {
            cout << mp[complement] + 1 << " " << i + 1;  
            return 0; 
        }
        mp[v[i]] = i;
    }

    cout << "IMPOSSIBLE"; 
    return 0;
}
