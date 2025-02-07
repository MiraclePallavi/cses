#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> customers(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        cin >> customers[i][0] >> customers[i][1];
    }

    vector<int> arr(N), dep(N);
    for (int i = 0; i < N; i++) {
        arr[i] = customers[i][0];
        dep[i] = customers[i][1];
    }
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i = 0, j = 0;
    int currentCustomers = 0, maxCustomers = 0;
    
    while (i < N && j < N) {
        if (arr[i] < dep[j]) {
            currentCustomers++;
            maxCustomers = max(maxCustomers, currentCustomers);
            i++;
        } else {
            currentCustomers--;
            j++;
        }
    }
    
    cout << maxCustomers << endl;
    return 0;
}
