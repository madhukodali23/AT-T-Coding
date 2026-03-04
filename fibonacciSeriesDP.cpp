#include<bits/stdc++.h>
using namespace std;

int fibonacci(int i, vector<int> &dp)
{
    if (i == 0) 
    {
        dp[0] = 0;
        return 0;
    }
    if (i == 1)
    {
        dp[1] = 1;
        return 1;
    }
    if (dp[i] != -1) return dp[i];
    return dp[i] = fibonacci(i-1, dp) + fibonacci(i-2, dp);
}
 
int main() {
    int n = 5;
    vector<int> dp(n, -1);
    for(int i = 0; i < n; i++)
    {
          cout << fibonacci(i, dp) << " ";
    }
  return 0;
}
