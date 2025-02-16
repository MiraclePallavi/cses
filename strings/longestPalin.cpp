#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string &s) {
    int n = s.size();
    if (n == 0) return "";
    string t = "#";
    for (char c : s) {
        t += c;
        t += "#";
    }
    int len = t.size();
    vector<int> p(len, 0);
    int center = 0, right = 0, maxLen = 0, start = 0;
    
    for (int i = 0; i < len; i++) {
        int mirror = 2 * center - i;
        if (i < right) {
            p[i] = min(right - i, p[mirror]);
        }
        
        while (i + p[i] + 1 < len && i - p[i] - 1 >= 0 && t[i + p[i] + 1] == t[i - p[i] - 1]) {
            p[i]++;
        }
        
        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
        
        if (p[i] > maxLen) {
            maxLen = p[i];
            start = (i - maxLen) / 2;
        }
    }
    return s.substr(start, maxLen);
}

int main() {
    string str;
    cin >> str;
    cout << longestPalindrome(str) << endl;
    return 0;
}
