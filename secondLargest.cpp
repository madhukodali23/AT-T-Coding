#include<bits/stdc++.h>
using namespace std;

void secondLargestNum()
{
    vector<int> arr = {4, 3, 6, 7, 9};
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > firstLargest) 
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else 
        {
          if (arr[i] > secondLargest && arr[i] != firstLargest)
          {
              secondLargest = arr[i];
          }
        }
    }
    cout << firstLargest << " " << secondLargest;
}
 
int main() {
  secondLargestNum();
  return 0;
}
