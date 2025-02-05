#include <bits/stdc++.h>
using namespace std;

long long minDiff(vector<long long>& apples, int n, int i, long long sum1, long long sum2) {
    if (i == n) {
        return abs(sum1 - sum2);
    }
    long long take = minDiff(apples, n, i + 1, sum1 + apples[i], sum2);
    long long nottake = minDiff(apples, n, i + 1, sum1, sum2 + apples[i]);
    return min(take, nottake);
}

int main() {
    long long n;
    cin >> n;  

    vector<long long> apples(n);
    for (int i = 0; i < n; i++) {
        cin >> apples[i];
    }

    long long ans = minDiff(apples, n, 0, 0, 0);  
    cout << ans;

    return 0;
}

