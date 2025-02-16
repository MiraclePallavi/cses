#include <iostream>
#include <vector>

using namespace std;

const int MAX_N = 200005;
vector<int> tree[MAX_N];  
int maxDist, farthestNode;
void dfs(int node, int parent, int dist) {
    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = node;
    }
    
    for (int neighbor : tree[node]) {
        if (neighbor != parent) {  
            dfs(neighbor, node, dist + 1);
        }
    }
}

int findDiameter(int n) {
    maxDist = -1;
    dfs(1, -1, 0);  
    maxDist = -1;
    dfs(farthestNode, -1, 0); 
    return maxDist;
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    int diameter = findDiameter(n);
    cout << diameter << endl;
    return 0;
}
