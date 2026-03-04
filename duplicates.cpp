#include<bits/stdc++.h>
using namespace std;

void duplicates()
{
    vector<int> arr = {1, 1, 2, 3, 4, 4};
    int temp = arr[0];
    sort(arr.begin(), arr.end());
    for(int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i-1]) cout << arr[i] << " ";
    }
}
 
int main() {
  duplicates();
  return 0;
}
