#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll minimumElements(vector<ll>& arr, ll T, ll n) {
    vector<ll> dp(T + 1, 1e18);
    dp[0] = 0;  
    for (ll i = 0; i < n; i++) {
        for (ll target = arr[i]; target <= T; target++) {
            dp[target] = min(dp[target], 1 + dp[target - arr[i]]);
        }
    }

    return (dp[T] >= 1e18) ? -1 : dp[T];  
}

int main() {
    ll n, x;
    cin >> n >> x;

    vector<ll> arr(n);  
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll result = minimumElements(arr, x, n);
    cout << result << endl;

    return 0;
}
