#include<bits/stdc++.h>
using namespace std;
 
int main() {
  string s = "madhu";
  int left = 0;
  int right = s.size()-1;
  bool isPalindrome = true;
  while (left < right)
  {
      if (s[left] != s[right])
      {
          isPalindrome = false;
          break;
      }
      left++;
      right--;
  }
  if (isPalindrome) cout << "Palindrome";
  else cout << "Not a  Palindrome";
  return 0;
}
