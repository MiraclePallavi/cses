#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);

    }
    long long cnt = 0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            cnt+=v[i-1]-v[i];
            v[i] = v[i-1];
        }
        

    }
    cout<<cnt;
    return 0;
}
