// Creating a linked list
#include "iostream"
using namespace std;
#include "LLNode.cpp"

// Printing Linked List
void print(LLNode *head)
{
    while (head != NULL)
    {
        cout << head->data << " " << endl;
        head = head->next;
    }
}

int main()
{
    // Creating Nodes
    LLNode *n1 = new LLNode(10);
    LLNode *n2 = new LLNode(20);
    LLNode *n3 = new LLNode(30);
    LLNode *n4 = new LLNode(40);
    LLNode *n5 = new LLNode(50);
    LLNode *head = n1;
    // Connecting Nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    // Printing Node  
    print(head);
    return 0;
}
