#include <bits/stdc++.h>
using namespace std;

long long findExpo(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {  
            result = (result * base) % mod;
        }
        base = (base * base) % mod;  
        exp /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
     const unsigned int mod = 1000000007; 
    cout << findExpo(2, n, mod) << endl;  
    return 0;
}