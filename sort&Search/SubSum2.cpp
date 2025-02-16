#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    long n, x;
    cin>>n>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   int s = 0;
   ll sum = 0;
    map<ll, ll>prefsum;
    ll ans = 0;
    prefsum[0] = 1;
    for(int i=0;i<n;i++){
        sum+=v[i];
        ans+=prefsum[sum-x];
        prefsum[sum]+=1;
    }
    cout<<ans;
    return 0;
}