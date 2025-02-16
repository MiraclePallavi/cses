#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
   while(t--){
    ll num;
    cin>>num;
    ll cnt =0;
    
    for(ll i=1;i*i<=num;i++){
        if(num%i==0){
            cnt++;
            if (i != num / i) cnt++;
        }
    }
    cout<<cnt<<endl;
   }
    return 0;
}