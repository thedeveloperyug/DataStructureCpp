#include "iostream"
using namespace std;
#include "LLNode.cpp"

int main(){
    // Static Node Creation
    LLNode n1(10);
    LLNode n2(20);
    LLNode *head = &n1;             //storing head address value
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;

    // Dynamic Node Creation
    LLNode *n3 = new LLNode(30);
    LLNode *head = n3;              //storing head address value
    LLNode *n4 = new LLNode(40);
    n3->next = n4;
    cout << n3->data << " " << n4->data << endl;

}