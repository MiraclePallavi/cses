#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> computeLPS(const string &pattern) {
    int m = pattern.length();
    vector<ll> lps(m, 0);  
    int len = 0;  
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];  
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int KMPsearch(const string &text, const string &pattern) {
    int n = text.length();
    int m = pattern.length();
    vector<ll> lps = computeLPS(pattern);
   int cnt = 0;

    int i = 0, j = 0; 
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        
        if (j == m) { 
            cnt++;
            j = lps[j - 1]; 
        } else if (i < n && text[i] != pattern[j]) { 
            if (j != 0) {
                j = lps[j - 1]; 
            } else {
                i++;
            }
        }
    }
    return cnt;
}

int main() {
    string text, pattern;
    cin>>text>>pattern;
    int ans = KMPsearch(text, pattern);
    cout<<ans;
    return 0;
}
