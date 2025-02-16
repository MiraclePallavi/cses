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
    ll seclastsum = 0;
    for(int i=0;i<n-1;i++){
        seclastsum+=v[i];
    }
    ll largest = v[n-1];
    if(largest>seclastsum){
        cout<<2*largest;
       
    }
    else{
        cout<<seclastsum+v[n-1];
    }
    return 0;
}