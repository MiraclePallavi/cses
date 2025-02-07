#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
    vector<long>v(n);
    vector<long>pos(n + 1, -1);
    for(int i=0;i<n;i++){
        cin>>v[i];
        pos[v[i]] = i;
    }
    long ans = 1;
    for(int i=1;i<n;i++){
        if(pos[i+1]<pos[i]){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}