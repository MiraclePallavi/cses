#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll left = 0;
    ll right = 0;
    ll ans = 0;
    unordered_map<ll, ll>mp;
    ll uniquecnt = 0;
    while(right<n){
        if(mp.find(arr[right])==mp.end() || mp[arr[right]]==0){
            uniquecnt++;
        }
        mp[arr[right]]++;
        while(uniquecnt>k){
            mp[arr[left]]--;
            if(mp[arr[left]]==0){
                uniquecnt--;
            }
            left++;
        }
        ans+=right-left+1;
        right++;
    }
    cout<< ans<<endl;
    return 0;
}
