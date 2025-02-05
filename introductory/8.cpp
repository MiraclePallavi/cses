#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll s = (n * (n + 1)) / 2;

    if (s % 2 != 0) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    vector<ll> a, b;
    ll target = s / 2;

    for (ll i = n; i >= 1; i--) {
        if (target >= i) {
            a.push_back(i);
            target -= i;
        } else {
            b.push_back(i);
        }
    }

    cout << a.size() << "\n";
    for (ll i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    cout << b.size() << "\n";
    for (ll i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << "\n";

    return 0;
}
