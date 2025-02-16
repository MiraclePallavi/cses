#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll x, n;
    cin>>x>>n;
    vector<ll>pos(n);
    for(ll i=0;i<n;i++){
        cin>>pos[i];
    }
    set<ll>positions = {0, x};
    multiset<ll>gaps = {x};
    for(ll i=0;i<n;i++){
        ll p = pos[i];
        auto upper = positions.upper_bound(p);
        auto lower = prev(upper);
        gaps.erase(gaps.find(*upper-*lower));
        gaps.insert(*upper-p);
        gaps.insert(p-*lower);
        positions.insert(p);
        cout<<*gaps.rbegin()<<" ";
    }
    return 0;
}