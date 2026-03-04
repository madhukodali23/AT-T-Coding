#include<bits/stdc++.h>
using namespace std;

void longestSubString()
{
    string s = "abcabcbb";
    int left = 0;
    int right = s.size()-1;
    int maxLen = 0;
    unordered_set<char> us;
    for(int right = 0; right < s.size(); right++)
    {
        while (us.count(s[right]))
        {
            us.erase(s[left]);
            left++;
        }
        us.insert(s[right]);
        maxLen = max(maxLen, right - left +1);
    }
    cout << maxLen;
}
 
int main() {
    longestSubString();
  return 0;
}
