#include <iostream>
using namespace std;
#include "TreeNode.h"

TreeNode<int>* takeInput(){
    cout << "Enter Root Element : ";
    int rootdata;
    cin >> rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    int n;
    cout << "Enter the Number of Child of Root : ";
    cin >> n;
    for(int i=0; i<n; i++){
       TreeNode<int>* child = takeInput();  // calling recursively for taking root child
       root->child.push_back(child);  // connecting child to it's root
    }
    return root;
}
void printTree(TreeNode<int>* root){
    if (root == NULL)
    {
        return;
    }
    
    cout << root->data << ": "; //printing root data 
    // printing every child of its parent
    for (int i = 0; i < root->child.size(); i++)
    {
        cout << root->child[i]->data << ",";
    }
    cout<<endl;
    //calling recursive function to print tree
    for (int i = 0; i < root->child.size(); i++)
    {
        printTree(root->child[i]);
    }
    
}
int main(){
    // TreeNode<int>* root = new TreeNode<int>(1);  //creating root node manually
    // TreeNode<int>* node1 = new TreeNode<int>(2);// creating nodes
    // TreeNode<int>* node2 = new TreeNode<int>(3);
    // root->child.push_back(node1);
    // root->child.push_back(node2);
    TreeNode<int>* root = takeInput(); // Taking input dynamically
    printTree(root);
    return 0;
}