#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll N;
    cin >> N;

    queue<ll> q;
    for (ll i = 1; i <= N; i++)
        q.push(i);

    bool flag = false;
    while (!q.empty()) {
        ll ele = q.front();
        q.pop();
        if (flag) {
            cout << ele << " ";
        } else {
            q.push(ele);
        }
        flag = !flag;
    }
    cout << endl;

    return 0;
}
