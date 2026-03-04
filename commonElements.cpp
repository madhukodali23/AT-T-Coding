#include<bits/stdc++.h>
using namespace std;

void commonElements()
{
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {3,4,5,6};
    vector<int> ans;
    for(int i = 0; i < arr1.size(); i++)
    {
        for(int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j]) ans.push_back(arr1[i]);
        }
    }
    for(int k : ans) cout << k << " ";
}
 
int main() {
    commonElements();
  return 0;
}
