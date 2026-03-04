#include<bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> arr = {1, 1, 2, 2, 3, 3, 4};
  map<int, int> mp;
  for(int i = 0; i < arr.size(); i++)
  {
      mp[arr[i]]++;
  }
  for(auto k : mp)
  {
      if (k.second > 1) {
        cout  << k.first << " :" << k.second << endl;
      }
  }
  return 0;
}
