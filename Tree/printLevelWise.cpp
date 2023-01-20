#include <iostream>
#include<queue>
using namespace std;
#include "TreeNode.h"

TreeNode<int>* takeInputLevelWise(){
    cout << "Enter Root data ";
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << " Enter Number of child  of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i<numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int>* childNode  = new TreeNode<int>(childData);
            front->child.push_back(childNode);
            pendingNodes.push(childNode);
        }
        
    }
    return root;
}

void printTree(TreeNode<int>* root){
   if (root == NULL)
    return;
  queue<TreeNode<int> *> que;
  que.push(root);
  while (!que.empty()) {
    TreeNode<int> *node = que.front();
    cout << node->data << ":";
    que.pop();
    for (int i = 0; i < node->child.size(); i++) {
      auto children = node->child[i];
      que.push(children);
      cout << children->data;
      if (i != node->child.size() - 1)
        cout << ",";
    }
    string s = que.empty() ? "" : "\n";
    cout << s;
  }
   }

int main(){
  
    TreeNode<int>* root = takeInputLevelWise(); // Taking input dynamically
    cout << "Your Tree -> ";
    printTree(root);
    return 0;
}