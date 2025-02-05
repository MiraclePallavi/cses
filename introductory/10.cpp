#include <bits/stdc++.h>
using namespace std;
long long findFac(int n){
    if(n==1){
        return n;
    }
    return n*findFac(n-1);
}
int main(){
    int n;
    cin>>n;
    long long factorial = findFac(n);
   
    int cnt = 0;
    while(factorial%10==0){
        cnt++;
        factorial = factorial/10;
    }
    cout<< cnt;
}