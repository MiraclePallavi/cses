#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<int>applicant(n);
    vector<int>appartment(m);
    for(int i=0;i<n;i++){
        cin >> applicant[i];
    }
    for(int i=0;i<m;i++){
      cin >> appartment[i];
    }
    sort(applicant.begin(), applicant.end());
    sort(appartment.begin(), appartment.end());
    int pcnt = 0;
    int apcount = 0;
    int ans = 0;
    while(pcnt<n && apcount<m){
        if(abs(appartment[apcount]-applicant[pcnt])<=k){
            ans++;
            pcnt++;
            apcount++;
        }
        else if(appartment[apcount]>applicant[pcnt]){
            pcnt++;

        }
        else{
            apcount++;
        }
    }
    cout<<ans;
    return 0;
}