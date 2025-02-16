#include<bits/stdc++.h>
using namespace std;
#include <numeric>
#define ll long long 

bool possible( ll mid, ll k, vector<ll>& v, ll n){
    ll partition = 1, currsum = 0;
    for(int i=0;i<n;i++){
        currsum+=v[i];
        if(currsum>mid){
            currsum = v[i];
            partition++;
        }
    }
    return partition<=k;
}
int main(){
    ll n, k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll low = *max_element(v.begin(), v.end());
    ll high = 0;
    for(ll i=0;i<n;i++){
       high +=v[i];
    }
    ll ans = 0;

    while(low<=high){
        ll mid = (low+high)/2;
        if(possible(mid, k, v, n)){
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