#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    long n, q;
    cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> psum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        psum[i] = psum[i-1] + v[i-1];
    }
    vector<vector<ll>>queries;
    while (q--) {
        ll a, b;
        cin >> a >> b;
        cout << (psum[b] - psum[a - 1]) << '\n'; 
    }
    return 0;
}