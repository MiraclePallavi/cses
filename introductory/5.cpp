#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(i%2==0){
         ans.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2!=0){
         ans.push_back(i);
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}