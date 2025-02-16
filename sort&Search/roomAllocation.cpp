#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<vector<int>>& timing, int n) {
    vector<vector<int>> v(n, vector<int>(3));
    for(int i = 0; i < n; i++) {
        v[i][0] = timing[i][0];
        v[i][1] = timing[i][1];
        v[i][2] = i;
    }
    sort(v.begin(), v.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> occupiedRooms;
    int cnt = 0;
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++) {
        int arrTime = v[i][0];
        int departTime = v[i][1];
        int ind = v[i][2];
        if(occupiedRooms.empty() || occupiedRooms.top().first > arrTime) {
            cnt++;
            occupiedRooms.push({departTime, cnt});
            ans[ind] = cnt;
        } else {
            int vacant = occupiedRooms.top().second;
            occupiedRooms.pop();
            occupiedRooms.push({departTime, vacant});
            ans[ind] = vacant;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> timing(n, vector<int>(2));
    for(int i = 0; i < n; i++) {
        cin >> timing[i][0] >> timing[i][1];
    }
    vector<int> ans = solve(timing, n);
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}