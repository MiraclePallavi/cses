#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool canmake(ll t,ll mid, ll n, vector<ll>& v){
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum+=mid/v[i];
        if(sum>=t){
            return true;
        }
    }
    return false;
}
int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll low = 1;
    ll high = t*(*max_element(v.begin(), v.end()));
    ll ans = high;
    while(low<=high){
        ll mid = (low+high)/2;
        if(canmake(t, mid, n, v)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    cout<<ans;
    return 0;
}
