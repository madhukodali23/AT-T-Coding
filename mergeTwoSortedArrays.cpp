#include<bits/stdc++.h>
using namespace std;

void merge()
{
    vector<int> arr1 = {1, 3, 5, 6, 8};
    vector<int> arr2 = {2, 4, 6};
    vector<int> arr3;

    int left = 0;
    int right = 0;

    while (left < arr1.size() && right < arr2.size())
    {
        if (arr1[left] < arr2[right])
        {
            arr3.push_back(arr1[left]);
            left++;
        }
        else
        {
            arr3.push_back(arr2[right]);
            right++;
        }
    }

    while (left < arr1.size())
    {
        arr3.push_back(arr1[left]);
        left++;
    }

    while (right < arr2.size())
    {
        arr3.push_back(arr2[right]);
        right++;
    }

    for(int k : arr3) cout << k << " ";
}

int main() {
  merge();
  return 0;
}
