#include "iostream"
using  namespace std;
#include "LLNode.cpp"

LLNode *takeinput(){
int data = data;
cin >> data;
LLNode *head = NULL;
LLNode *tail = NULL;
while(data!=-1){
    LLNode *newNode = new LLNode(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode ;
        tail = tail->next;
    }
 cin >> data;   
    }
return head;
}

LLNode* insertNode(LLNode *head, int i, int data){
    LLNode *newNode = new LLNode(data);
    LLNode *temp = head;
    int count = 1;
    if(i==0){
       newNode->next = head ;
        head = newNode;
        return head;
    }
    while(temp!=NULL && count < i-1){
        temp  = temp -> next;
        count++;
    }
    if(temp != NULL){
    LLNode *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
    }
    return head;
}
void printll(LLNode *head){
while(head != NULL){
    cout << head->data <<" ";
    head = head->next;
    }
    cout << endl;
}


int main(){
int i, data;
 cout << "Enter the list element with separated space along with -1 for termination" << endl;
  LLNode *head =  takeinput();
    printll(head);
    cout << "Enter the Pos along with data with separated space: ";
    cin >> i >> data;
    head = insertNode(head, i, data);
    cout << "After Insertion" << endl;
    printll(head);
}