#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    vector<pair<ll, ll>>arr;
    for(int i=0;i<n;i++){
        ll a, d;
        cin>>a>>d;
        arr.push_back({a, d});
    }
    sort(arr.begin(), arr.end());
    ll start = 0;
    ll treward = 0;
    for(int i=0;i<n;i++){
        treward+=(arr[i].second-(start+arr[i].first));
        start+=arr[i].first;
    }
    cout<<treward;
}