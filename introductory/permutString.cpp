#include<bits/stdc++.h>

using namespace std;

    void recurPermute(int index, string s, vector < string > & ans) {
      if (index == s.length()) {
        ans.push_back(s);
        return;
      }
       unordered_set<char> used; 
      for (int i = index; i < s.length(); i++) {
        if (used.find(s[i]) != used.end()) continue; 
        used.insert(s[i]);
        swap(s[index], s[i]);
        recurPermute(index + 1, s, ans);
        swap(s[index], s[i]);
      }
    }

    vector < string> permute(string s) {
      vector < string> ans;
      recurPermute(0, s, ans);
      return ans;
    }


int main() {
  
  string s;
  cin>> s;
  
  vector < string > ans = permute(s);
  sort(ans.begin(), ans.end());
  cout<<ans.size()<<endl;
  for (int i = 0; i < ans.size(); i++) {
      cout << ans[i]<<endl;
  }
}