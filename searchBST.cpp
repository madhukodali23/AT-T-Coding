#include<bits/stdc++.h>
using namespace std;

class Node 
{
   public:
        Node* left ;
        Node* right ;
        int data;
   public:
     Node(int value)
     {
         data = value;
         left = nullptr;
         right = nullptr;
     }
};

void preorder(Node*  root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

bool searchBST(Node* root, int key)
{
    if (root == nullptr) return false;
    if (root -> data == key)
    {
        return true;
    }
    if (key < root -> data)
    {
        return searchBST(root->left, key);
    }
    return searchBST(root -> right, key);
}
 
int main() {
  Node* n = new Node(8);
  n -> left = new Node(3);
  n -> right = new Node(10);
  n -> left -> left = new Node(1);
  n -> left -> right = new Node(6);
  n -> right -> right = new Node(14);
  cout << searchBST(n, 4);
  return 0;
}
