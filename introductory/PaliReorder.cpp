#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int freq[26] = {};

    for (char c : s) {
        freq[c - 'A']++;
    }

    int cntodd = 0;
    char oddChar = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            cntodd++;
            oddChar = i + 'A';
        }
    }

    if (cntodd > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string ans(n, ' ');  
    int l = 0, r = n - 1;

   
    for (int i = 0; i < 26; i++) {
        while (freq[i] >= 2) {
            ans[l++] = ans[r--] = i + 'A';
            freq[i] -= 2;
        }
    }

    if (cntodd == 1) {
        ans[n / 2] = oddChar;
    }

    cout << ans;
    return 0;
}
