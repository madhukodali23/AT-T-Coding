#include<bits/stdc++.h>
using namespace std;

void binarySearch()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int target  = 12;
    int left = 0;
    int right = arr.size()-1;
    bool isFound = false;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target) 
        {
           cout << mid << endl;
           isFound = true;
           break;
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else left = mid + 1;
    }
    if (!isFound) cout << -1;
}
 
int main() {
    binarySearch();
  return 0;
}
