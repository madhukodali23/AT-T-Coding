#include<bits/stdc++.h>
using namespace std;

void duplicates()
{
    string  name = "Madhu Kanth Kodali";
    int count = 0;
    stringstream ss(name);
    string word;
    while (ss >> word)
    {
        count++;
    }
    cout << count;
}
 
int main() {
  duplicates();
  return 0;
}
