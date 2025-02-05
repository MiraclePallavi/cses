#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long p = 2 * b - a;
        long long q = 2 * a - b;

        if (p >= 0 && q >= 0 && p % 3 == 0 && q % 3 == 0) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}