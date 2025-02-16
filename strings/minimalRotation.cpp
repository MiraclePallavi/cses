#include <bits/stdc++.h>
using namespace std;
int minimalString(string s)
{
  
    s += s;

    vector<int> failureFunc(s.size(), -1);

    int minRotationIdx = 0;

    for (int currentIdx = 1; currentIdx < s.size();
         ++currentIdx) {
        char currentChar = s[currentIdx];
        int failureIdx
            = failureFunc[currentIdx - minRotationIdx - 1];
        while (
            failureIdx != -1
            && currentChar
                   != s[minRotationIdx + failureIdx + 1]) {
            if (currentChar
                < s[minRotationIdx + failureIdx + 1]) {
                minRotationIdx
                    = currentIdx - failureIdx - 1;
            }
            failureIdx = failureFunc[failureIdx];
        }

        if (currentChar
            != s[minRotationIdx + failureIdx + 1]) {
            if (currentChar < s[minRotationIdx]) {
                minRotationIdx = currentIdx;
            }
            failureFunc[currentIdx - minRotationIdx] = -1;
        }
        else {
            failureFunc[currentIdx - minRotationIdx]
                = failureIdx + 1;
        }
    }

    
    return minRotationIdx;
}

int main() {
    string str;
    cin >> str;
    int minRotationIdx = minimalString(str);
    cout << str.substr(minRotationIdx)  + str.substr(0,  minRotationIdx)<< endl;
    return 0;
}
