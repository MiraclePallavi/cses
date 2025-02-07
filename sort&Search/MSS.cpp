#include <bits/stdc++.h>
using namespace std;

int main(){
   long long n;
   cin>>n;
   vector<long long>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   
    long long maxi = *max_element(arr.begin(), arr.end());
   long long sum = 0;
   for(int i=0;i<n;i++){
      sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0) {
            sum = 0; 
        }
   }
    cout<<maxi;
    return 0;
}