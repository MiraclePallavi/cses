#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int sum = (n*(n+1))/2;
    int cursum = 0;
   
   for(int i=0;i<n-1;i++){
    int num;
    cin>>num;
    cursum+=num;

   }
   cout<<sum-cursum;
    return 0;
}