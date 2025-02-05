#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortBySecond(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}

int main() {
    int n;
    cin >> n;  

    vector<pair<int, int>> movies(n);  


    for (int i = 0; i < n; i++) {
        cin >> movies[i].first >> movies[i].second;
    }

    
    sort(movies.begin(), movies.end(), sortBySecond);

    int count = 0;     
    long long last_end = 0;  

    for (int i = 0; i < n; i++) {
        if (movies[i].first >= last_end) {
            count++;
            last_end = movies[i].second;  
        }
    }

    cout << count << endl; 
    return 0;
}
