#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

int main() {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> dp(x + 1, 0);
    dp[0] = 1;  

    for(int j = 1; j <= x; j++) {  
        for(int i = 0; i < n; i++) {  
            if (j >= v[i]) {
                dp[j] = (dp[j] + dp[j - v[i]]) % MOD; 
            }
        }
    }

    cout << dp[x] << endl;
    return 0;
}
