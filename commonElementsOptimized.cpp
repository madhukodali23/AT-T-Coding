#include<bits/stdc++.h>
using namespace std;

void commonElements()
{
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {3,4,5,6};
    unordered_set<int> s(arr1.begin(), arr1.end());
    for(int x : arr2)
    {
        if (s.count(x)) cout << x << " ";
    }
}
 
int main() {
    commonElements();
  return 0;
}
