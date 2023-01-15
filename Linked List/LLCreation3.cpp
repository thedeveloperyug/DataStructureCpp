// Creating a linked list
#include "iostream"
using namespace std;
#include "LLNode.cpp"

// Printing Linked List
void print(LLNode *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
// taking input
LLNode *takeinput()
{
    int data;
    cin >> data;
    LLNode *head = NULL;
    LLNode *tail = NULL;
    while (data != -1)
    {
        LLNode *newNode = new LLNode(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail= tail -> next;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    cout << "Please enter the LL elements & add -1 in the last to exit from LL" << endl;
    LLNode *head = takeinput();
    cout << "LL elements are : ";
    print(head);
    return 0;
}
