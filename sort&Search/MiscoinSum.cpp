#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll miss = 1ll;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(v[i]>miss){
            cout<<miss;
            return 0;
        }
        miss+=v[i];
    }
    
    cout<<miss;
    return 0;
}