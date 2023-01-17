#include "iostream"
using namespace std;
#include "LLNode.cpp"

LLNode *takeinput()
{
    int data = data;
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
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

LLNode *deleteNode(LLNode *head, int position)
{
    LLNode *temp;
    LLNode *prev;
    temp = head;
    prev = head;
    for (int i = 0; i < position; i++)
    {
        if (i == 0 && position == 1)
        {
            head = (head)->next;
            free(temp);
        }
        else
        {
            if (i == position - 1 && temp)
            {
                prev->next = temp->next;
                free(temp);
            }
            else
            {
                prev = temp;

                // Position was greater than
                // number of nodes in the list
                if (prev == NULL)
                    break;
                temp = temp->next;
            }
        }
    }
    return head;
}

void printll(LLNode *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    int i;
    LLNode *head = takeinput();
    printll(head);
    cout << "Enter the Pos  for deletion" << endl;
    cin >> i;
    head = deleteNode(head, i);
    printll(head);
}