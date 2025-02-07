#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

   ll n;
   cin>>n;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   map<ll, ll>mp;
   ll l = 0;
   ll maxi = 0;
    for (int r = 0; r < n; r++) {
        if (mp.find(arr[r]) != mp.end()) {
            l = max(l, mp[arr[r]] + 1);
        }
        mp[arr[r]] = r;

        maxi = max(maxi, r - l + 1);
    }
    cout<<maxi;
    return 0;
}