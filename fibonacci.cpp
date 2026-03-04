#include<bits/stdc++.h>
using namespace std;

void fibonacci(int n)
{
   int left = 0;
   int right = 1;
   for(int i = 0; i< n; i++)
   {
       cout << left << " ";
       int temp = right;
       right = left + right;
       left = temp;
   }
}
 
int main() {
  fibonacci(5);
  return 0;
}
