#include <iostream>
#include <queue>
using namespace std;
#include "TreeNode.h"

TreeNode<int> *takeInputLevelWise()
{
    cout << "Enter Root data ";
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << " Enter Number of child  of " << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *childNode = new TreeNode<int>(childData);
            front->child.push_back(childNode);
            pendingNodes.push(childNode);
        }
    }
    return root;
}

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ": "; // printing root data
    // printing every child of its parent
    for (int i = 0; i < root->child.size(); i++)
    {
        cout << root->child[i]->data << ",";
    }
    cout << endl;
    // calling recursive function to print tree
    for (int i = 0; i < root->child.size(); i++)
    {
        printTree(root->child[i]);
    }
}
// count Node
int CountNode(TreeNode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->child.size(); i++)
    { 
        ans += CountNode(root->child[i]);
    }
    return ans;
}

int sumOfNodes(TreeNode<int>* root) {
    int sum = root->data;
    for (int i = 0; i < root->child.size(); i++) {
        sum += sumOfNodes(root->child[i]);
    }
    return sum;
}

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    TreeNode<int>* maxNode = root;
    for (int i = 0; i < root->child.size(); i++) {
        TreeNode<int>* childMaxNode = maxDataNode(root->child[i]);
        if (childMaxNode->data > maxNode->data) {
            maxNode = childMaxNode;
        }
    }
    return maxNode;
}

int getHeight(TreeNode<int>* root) {
    int height = 0;
    for (int i = 0; i < root->child.size(); i++) {
        height = max(height, getHeight(root->child[i]));
    }
    return height + 1;
}



int main()
{
    // TreeNode<int>* root = new TreeNode<int>(1);  //creating root node manually
    // TreeNode<int>* node1 = new TreeNode<int>(2);// creating nodes
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root->child.push_back(node1);
    // root->child.push_back(node2);
    TreeNode<int> *root = takeInputLevelWise(); // Taking input dynamically
    printTree(root);
    CountNode(root);
    cout  << "Total Node Count: "<<(CountNode(root));
    return 0;
}