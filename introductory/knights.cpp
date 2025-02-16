#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll no_of_ways(int i){
    ll allPoss = (1LL*i*i*(i*i-1))/2;
    ll canAttack = 4LL*(i-1)*(i-2);
    return allPoss-canAttack;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
   ll k;
   cin>>k;
   for(ll i=1;i<=k;i++){
    ll ways = no_of_ways(i);
    cout<<ways<<endl;
   }
    return 0;
}