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
   int e = -1;
   ll sum = 0;
   ll ans = 0;
    while(e<n){
        while(e<n && sum<x){
            e+=1;
            sum+=v[e];
        }
        while(s<=e && sum>x){
            sum-=v[s];
            s+=1;         
        }
        if(sum==x){
            ans+=1;
            sum-=v[s];
            s++;
        }
    }
    cout<<ans<<endl;
    return 0;
}