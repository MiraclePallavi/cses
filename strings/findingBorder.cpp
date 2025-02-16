#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll> pi(n, 0);

    for (ll i = 1, j = 0; i < n; i++) {
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1]; 
        }
        if (s[i] == s[j]) {
            j++; 
        }
        pi[i] = j;
    }

    vector<ll> borders;
    ll len = pi[n - 1];  
    while (len > 0) {
        borders.push_back(len);
        len = pi[len - 1];  
    }
    reverse(borders.begin(), borders.end());
    for (ll border : borders) {
        cout << border << " ";
    }
    return 0;
}
